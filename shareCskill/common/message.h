#ifndef __ONLINEGAME_COMMON_MESSAGE_H__
#define __ONLINEGAME_COMMON_MESSAGE_H__

#include <stdlib.h>
#include "ASSERT.h"
#include <amemory.h>
struct MSG 
{
	int 	message;	//��Ϣ������
	struct XID target;	//����Ϣ��Ŀ�꣬�����Ƿ���������ң���Ʒ��NPC��
	struct XID source;	//�����﷢�����ģ����ܵ�id������һ��
	A3DVECTOR pos;		//��Ϣ����ʱ��λ�ã��е���Ϣ����λ�ò�������
	int	ttl;		//time to live,���ֵ���С��0����ô�Ͳ�������ٴ�ת����
	int	param;		//һ���������������������ã���ô��ʹ���������
	int param2;		//	New
	size_t 	content_length;	//��Ϣ�ľ������ݳ���
	const void * content;	//��Ϣ�ľ������� �����ϴ���ʱ����ֶ���Ч
private:
	enum {FAST_ALLOC_LEN = 128};
	friend void * SerializeMessage(const MSG &);
	friend void FreeMessage(MSG *);
};

inline void * SerializeMessage(const MSG & msg)
{
	void * buf;
	size_t length = msg.content_length;
	if(length <= MSG::FAST_ALLOC_LEN)
	{
	//	printf("%d %dalloced\n",sizeof(MSG) + length,msg.message);
		buf = abase::fast_allocator::align_alloc(sizeof(MSG) + length);		//������룬���Ƕ��msg
		memcpy(buf,&msg,sizeof(MSG));
		if(length)
		{
			memcpy((char*)buf + sizeof(MSG),msg.content,length);
		}
	}
	else
	{
		buf = abase::fast_allocator::raw_alloc(sizeof(MSG) + length);
		memcpy(buf,&msg,sizeof(MSG));
		memcpy((char*)buf + sizeof(MSG),msg.content,msg.content_length);
	}
	return buf;
}

inline MSG * DupeMessage(const MSG & msg)
{
	MSG * pMsg = (MSG*)SerializeMessage(msg);
	pMsg->content = ((char*)pMsg) + sizeof(MSG);
	return pMsg;
}

inline void FreeMessage(MSG * pMsg)
{
	ASSERT(pMsg->content == ((char*)pMsg) + sizeof(MSG));
	size_t length = pMsg->content_length;
	if(length <= MSG::FAST_ALLOC_LEN)
	{
		abase::fast_allocator::align_free(pMsg, sizeof(MSG) + length);
	}
	else
	{
		abase::fast_allocator::raw_free(pMsg);
	}
}
inline void BuildMessage(MSG & msg, int message, const XID &target, const XID & source,
			const A3DVECTOR & pos,int param = 0, int param2 = 0, const void * content = NULL,size_t content_length = 0)
{
	msg.message = message;
	msg.target = target;
	msg.source = source;
	msg.pos = pos;
	msg.ttl = 2;
	msg.param = param;
	msg.param2 = param2;
	msg.content_length = content_length;
	msg.content = content;
}

enum
{
//	normal message
	GM_MSG_NULL,				//����Ϣ
	GM_MSG_FORWARD_USERBC,			//ת�����û��㲥
	GM_MSG_FORWARD,				//ת������Ϣ������Ӧ����Ϊһ���µ���Ϣ����������
	GM_MSG_FORWARD_BROADCAST,		//ת������Ϣ�㲥��Ϣ,content������һ����������Ϣ
	GM_MSG_USER_GET_INFO,			//�û�ȡ�ñ�Ҫ������

//5
	GM_MSG_IDENTIFICATION,			//��������֪�Լ�������,ԭ�����ͱ�����server����id�����ķ���
	GM_MSG_SWITCH_GET,			//ȡ���û�����,�������л���ȡ���û����� param�� tag,content��key
	GM_MSG_SWITCH_USER_DATA,		//�û�����,SWITCH_GET�Ļ�Ӧ
	GM_MSG_SWITCH_NPC,			//NPC�л�������
	GM_MSG_USER_MOVE_OUTSIDE,		//�û��ڱ߽��ƶ�

//10	
	GM_MSG_USER_NPC_OUTSIDE,		//NPC�ڱ߽紦�ƶ�����֮ͬ������NPC����Ҫȡ���¿�������Ķ���
	GM_MSG_ENTER_WORLD,			//��controller�ģ���ʾ�û��Ѿ�����������
	GM_MSG_ATTACK,				//Ŀ���Դ�������Ǹ���
	GM_MSG_SKILL,				//Ŀ���Դ�������Ǹ���
	GM_MSG_PICKUP,				//������Ʒ,Ŀ��һ������Ʒ

//15
	GM_MSG_FORCE_PICKUP,			//ǿ�Ƽ�����Ʒ����У��������ID�����ID
	GM_MSG_PICKUP_MONEY,			//��Ʒ֪ͨ�û���Ǯ param��Ǯ��  content��˭������
	GM_MSG_PICKUP_TEAM_MONEY,		//��Ʒ֪ͨ�ӳ���Ǯ param��Ǯ��  content��˭������
	GM_MSG_RECEIVE_MONEY,			//֪ͨ��ҵõ�Ǯ�����������)
	GM_MSG_PICKUP_ITEM,			//��Ʒ֪ͨ�û�����Ʒ param�� palyer_id | 0x80000000(�����ӣ�

//20
	GM_MSG_ERROR_MESSAGE,			//��player����һ��error message
	GM_MSG_NPC_SVR_UPDATE,			//NPC�����˷������л��������Ϣֻ������������״̬��ԭ��NPC
	GM_MSG_EXT_NPC_DEAD,			//�ⲿ��NPC��������Ϣ(����ɾ��)�������Ϣֻ������������״̬��ԭ��NPC
	GM_MSG_EXT_NPC_HEARTBEAT,		//�ⲿNPC�������������ж��Ƿ�ʱ 
	GM_MSG_WATCHING_YOU,			//�������Ｄ�����Ϣ,����һ�npc������������һ��watching_t�Ľṹ

//25
//	AGGRO  message 
	GM_MSG_GEN_AGGRO,			//����aggro�����渽����һ��aggro_info_t�Ľṹ
	GM_MSG_TRANSFER_AGGRO,			//aggro�Ĵ��� Ŀǰֻ���͵�һλ content��һ��XID,�����XID��idΪ-1    ����ճ���б� param�Ǹ��˳��ֵ
	GM_MSG_AGGRO_ALARM,			//aggro���������ܵ�����ʱ�ᷢ�ͣ����渽����һ��aggro_alarm_tδʹ��
	GM_MSG_AGGRO_WAKEUP,			//aggro�����������ߵĹ��ﾪ��,���渽����һ��aggro_alarm_tδʹ��
	GM_MSG_AGGRO_TEST,			//aggro����,ֻ�е���������aggro�б��У��Ż������µ�aggro�����渽����һ��aggro_info_tδʹ��
	
//30
	GM_MSG_OBJ_SESSION_END,			//�����session���
	GM_MSG_OBJ_SESSION_REPEAT,		//��ʾsessionҪ����ִ�� 
	GM_MSG_OBJ_ZOMBIE_END,			//��ʾҪ������ʬ״̬
	GM_MSG_EXPERIENCE,			//�õ�����ֵ	content ��һ��msg_exp_t
	GM_MSG_GROUP_EXPERIENCE,		//�õ���Ӿ���ֵ conennt �Ƕ��msg_grp_exp_t , param ��ɵ����˺�
	
//35
	GM_MSG_TEAM_EXPERIENCE,			//�õ���Ӿ���ֵ conennt ��msg_exp_t �������뾭��ֵ�ᱻ���� param ��ɱ����npcid ���?���Ǳ�����ɱ����
	GM_MSG_QUERY_OBJ_INFO00,		//ȡ�ö����info00 param�Ƿ����ߵ�sid ,content��һ��int����cs_index
	GM_MSG_HEARTBEAT,			//�����Լ���������Ϣ  ���������Heartbeat������
	GM_MSG_HATE_YOU,
	GM_MSG_TEAM_INVITE,			//����ĳ�˼������param��teamseq, content��һ��int ��ʾpickup_flag

//40	
	GM_MSG_TEAM_AGREE_INVITE,		//��������ͬ�������� content��һ��int(��ʾְҵ)+ team_mutable_prop
	GM_MSG_TEAM_REJECT_INVITE,		//�ܾ���������
	GM_MSG_JOIN_TEAM,			//�ӳ�ͬ��ĳ�˼������ param��λ�Ǽ�ȡ��ʽ param��λ�Ƕ�Ա������content��member_entry�ı� 
	GM_MSG_JOIN_TEAM_FAILED,		//�����޷�������飬Ӧ�ôӶ�����ȥ��
	GM_MSG_MEMBER_NOTIFY_DATA,		//��ӳ�Ա֪ͨ�������Լ��Ļ�����Ϣ content ��һ��team_mutable_prop

//45	
	GM_MSG_NEW_MEMBER,			//leader֪ͨ�³�Ա���룬content��һ��member_entry list param������
	GM_MSG_LEAVE_PARTY_REQUEST,
	GM_MSG_LEADER_CANCEL_PARTY,
	GM_MSG_MEMBER_NOT_IN_TEAM,
	GM_MSG_LEADER_KICK_MEMBER,

//50	
	GM_MSG_MEMBER_LEAVE,
	GM_MSG_LEADER_UPDATE_MEMBER,
	GM_MSG_GET_MEMBER_POS,			//Ҫ����ѷ���λ�� param�Ƿ����ߵ�sid ,content��һ��int����cs_index
	GM_MSG_QUERY_PLAYER_EQUIPMENT,		//ȡ���ض���ҵ����ݣ�Ҫ��ƽ�������һ����Χ֮��param�Ƿ����ߵ�sid ,content��һ��int����cs_index
	GM_MSG_TEAM_PICKUP,			//���ѷ��䵽��Ʒ�� param �� type, content ��count

//55	
	GM_MSG_TEAM_CHAT,			//������� param ��channel, content ������
	GM_MSG_SERVICE_REQUEST,			//playerҪ��������Ϣ param �Ƿ������� content �Ǿ������� ?	
	GM_MSG_SERVICE_DATA,			//��������ݵ��� param �Ƿ�������  content �� ��������
	GM_MSG_SERVICE_HELLO,			//player ��������ʺ�  param �� player�Լ���faction
	GM_MSG_SERVICE_GREETING,		//�����̽��лػ� ������Ҫ�����淵�ط����б�$$$$(����δ��)

//60	
	GM_MSG_SERVICE_QUIERY_CONTENT,		//ȡ�÷������� 	 param �Ƿ�������, content�ɿ���pair<cs_index,sid>
	GM_MSG_EXTERN_OBJECT_APPEAR,		//content ��extern_object_manager::object_appear
	GM_MSG_EXTERN_OBJECT_DISAPPEAR,		//��ʧ����
	GM_MSG_EXTERN_OBJECT_REFRESH,		//����λ�ú�Ѫֵ��param�б������Ѫֵ 
	GM_MSG_USER_APPEAR_OUTSIDE,		//�û���������֣�Ҫ���ͱ�Ҫ�����ݸ�����ң�content ����sid,param��linkd id

//65
	GM_MSG_FORWARD_BROADCAST_SPHERE,	//ת������Ϣ�㲥��Ϣ,content������һ����������Ϣ
	GM_MSG_FORWARD_BROADCAST_CYLINDER,	//ת������Ϣ�㲥��Ϣ,content������һ����������Ϣ
	GM_MSG_FORWARD_BROADCAST_TAPER,		//ת������Ϣ�㲥��Ϣ,content������һ����������Ϣ
	GM_MSG_ENCHANT,				//ʹ�ø���ħ��
	GM_MSG_ENCHANT_ZOMBIE,			//ʹ�ø���ħ��,ר�Ÿ������õ�

//70
	GM_MSG_OBJ_SESSION_REPEAT_FORCE,	//��ʾsessionҪrepeat �����漴ʹ������ҲҪ����ִ��
	GM_MSG_NPC_BE_KILLED,			//��Ϣ����ɱ��npc����ң�param ��ʾ��ɱ��npc������ content��NPC�ļ���
	GM_MSG_NPC_CRY_FOR_HELP,		//npc ������Ȳ���
	GM_MSG_PLAYER_TASK_TRANSFER,		//������player֮����д��ͺ�ͨѶ�ĺ���
	GM_MSG_PLAYER_BECOME_INVADER,		//��Ϊ���� msg.param �����ӵ�ʱ��

//75
	GM_MSG_PLAYER_BECOME_PARIAH,		//��Ϊ���� 
	GM_MSG_FORWARD_CHAT_MSG,		//ת�����û�������Ϣ,param��rlevel,source��XID(-channel,self_id)
	GM_MSG_QUERY_SELECT_TARGET,		//ȡ�ö���ѡ��Ķ���
	GM_MSG_NOTIFY_SELECT_TARGET,		//ȡ�ö���ѡ��Ķ���
	GM_MSG_SUBSCIBE_TARGET,			//Ҫ����һ������

//80
	GM_MSG_UNSUBSCIBE_TARGET,		//Ҫ����һ������
	GM_MSG_SUBSCIBE_CONFIRM,		//ȷ�϶����Ƿ����
	GM_MSG_PRODUCE_MONEY,			//֪ͨϵͳ������Ǯ ����Դ�������ߣ�param����id�� content��Ǯ��
	GM_MSG_PRODUCE_MONSTER_DROP,		//֪ͨϵͳ�������������Ʒ�ͽ�Ǯ�� ����Դ�������ߣ�param��money�� content �� struct { int team_id; int team_seq;int npc_id;int item_count; int item[];}
	GM_MSG_GATHER_REQUEST,			//�����ռ�ԭ�ϣ�  param ����ҵ�faction, content �ֱ�����Ҽ��𡢲ɼ����ߺ�����ID

//85
	GM_MSG_GATHER_REPLY,			//֪ͨ���Խ��вɼ�  param �ǲɼ���Ҫ��ʱ��
	GM_MSG_GATHER_CANCEL,			//ȡ���ɼ�
	GM_MSG_GATHER,				//���вɼ���Ҫ��ȡ����Ʒ
	GM_MSG_GATHER_RESULT,			//�ɼ���ɣ�param ���ǲɼ�������Ʒid, content������ �Ϳ��ܸ��ӵ�����ID
	GM_MSG_HP_STEAL,				//�յ���Ѫ�Ľ��

//90
	GM_MSG_INSTANCE_SWITCH_GET,		//ȡ���û�����,�������л���ȡ���û����� ���ڸ�������л� param��key
	GM_MSG_INSTANCE_SWITCH_USER_DATA,	//�û�����,SWITCH_SWITCH_GET�Ļ�Ӧ
	GM_MSG_EXT_AGGRO_FORWARD,		//֪ͨԭ��npc���г��ת�� param ��rage��С�� content�ǲ�����޵�id
	GM_MSG_TEAM_APPLY_PARTY,		//����������ѡ��
	GM_MSG_TEAM_APPLY_REPLY,		//����ɹ��ظ� ���е�param��seq	

//95
	GM_MSG_QUERY_INFO_1,			//��ѯINFO1�����Է�����һ���NPC,param��������cs_index,content��sid
	GM_MSG_CON_EMOTE_REQUEST,		//����Эͬ���������� param �� action
	GM_MSG_CON_EMOTE_REPLY,			//����Эͬ�����Ļ�Ӧ param ��action��ͬ�����������ֽڵ����
	GM_MSG_TEAM_CHANGE_TO_LEADER,		//֪ͨ����Ҫ��Ϊleader
	GM_MSG_TEAM_LEADER_CHANGED,		//֪ͨ���Ѷӳ��ĸı�

//100
	GM_MSG_OBJ_ZOMBIE_SESSION_END,		//���������session�Ĳ��������������������session����һ��
	GM_MSG_QUERY_PERSONAL_MARKET_NAME,	//ȡ�ð�̯�����֣�param�Ƿ����ߵ�sid ,content��һ��int����cs_index
	GM_MSG_HURT,				//��������˺� content ��msg_hurt_extra_info_t
	GM_MSG_DEATH,				//ǿ���ö�������,param=0������=1��������=2��������(��param����player��Ч) 
	GM_MSG_PLANE_SWITCH_REQUEST,		//����ʼ���ͣ�content��key��������д��ͣ��򷵻� SWITCH_REPLAY

//105
	GM_MSG_PLANE_SWITCH_REPLY,		//��������ȷ�ϣ�content��key
	GM_MSG_SCROLL_RESURRECT,		//���Ḵ��  param��ʾ�������Ƿ�����pvpģʽ1��ʾ������
	GM_MSG_LEAVE_COSMETIC_MODE,		//��������״̬
	GM_MSG_DBSAVE_ERROR,			//���ݿⱣ�����
	GM_MSG_SPAWN_DISAPPEAR,			//֪ͨNPC����Ʒ��ʧ param��condition

//110
	GM_MSG_PET_CTRL_CMD,			//��ҷ����Ŀ�����Ϣ���������Ϣ��������
	GM_MSG_ENABLE_PVP_DURATION,		//����PVP״̬
	GM_MSG_PLAYER_KILLED_BY_NPC,		//��ұ�NPCɱ����NPC���߼�
	GM_MSG_PLAYER_DUEL_REQUEST,             //��ҷ���Ҫ��duel������
	GM_MSG_PLAYER_DUEL_REPLY,               //��һ�Ӧduel������param���Ƿ��Ӧduel

//115
	GM_MSG_PLAYER_DUEL_PREPARE,      	//����׼����ʼ 3�뵹��ʱ��ʼ
	GM_MSG_PLAYER_DUEL_START,               //������ʼ 
	GM_MSG_PLAYER_DUEL_CANCEL,		//ֹͣ����
	GM_MSG_PLAYER_DUEL_STOP,		//��������
	GM_MSG_DUEL_HURT,			//PVP��������˺�content ������

//120
	GM_MSG_PLAYER_BIND_REQUEST,		//�������ڱ�������
	GM_MSG_PLAYER_BIND_INVITE,		//������������Լ�����
	GM_MSG_PLAYER_BIND_REQUEST_REPLY,	//������Ļ�Ӧ
	GM_MSG_PLAYER_BIND_INVITE_REPLY,	//������Ļ�Ӧ
	GM_MSG_PLAYER_BIND_PREPARE,		//׼����ʼ����

//125
	GM_MSG_PLAYER_BIND_LINK,		//���ӿ�ʼ
	GM_MSG_PLAYER_BIND_STOP,		//ֹͣ����
	GM_MSG_PLAYER_BIND_FOLLOW,		//Ҫ����Ҹ���
	GM_MSG_QUERY_EQUIP_DETAIL,		//param Ϊfaction, content Ϊcs_index ��cs_sid
	GM_MSG_PLAYER_RECALL_PET,		//�����ǿ�������ٻ�״̬

//130
	GM_MSG_CREATE_BATTLEGROUND,		//Ҫ��ս������������һ��ս������Ϣ����Ҫ���ڲ���
	GM_MSG_BECOME_TURRET_MASTER,		//��Ϊ���ǳ���master,param��tid, content ��faction
	GM_MSG_REMOVE_ITEM,			//ɾ��һ����Ʒ����Ϣ�����ڹ��ǳ����ƺ����Ʒ���� param��tid
	GM_MSG_NPC_TRANSFORM,			//NPC����Ч����content�ﱣ�� �м�״̬���м�ʱ�� �м��־ ���״̬
	GM_MSG_NPC_TRANSFORM2,			//NPC����Ч��2��param ��Ŀ��ID ��������ͺ�Ŀ��IDһ���ˣ���ô�Ͳ�������

//135
	GM_MSG_TURRET_NOTIFY_LEADER,		//���ǳ�֪ͨleader�Լ����ڣ������޷��ٴν����ٻ�
	GM_MSG_PET_RELOCATE_POS,		//����Ҫ�����¶�λ����
	GM_MSG_PET_CHANGE_POS,			//�����޸��˳��������
	GM_MSG_PET_DISAPPEAR,			//���ݲ���ȷ,�����������,����Ҫ�������ʧ
	GM_MSG_PET_NOTIFY_HP,			//����֪ͨ���ˣ���֪�Լ���Ѫ�� param �� stamp,content ��float hp ratio

//140
	GM_MSG_PET_NOTIFY_DEATH,		//����֪ͨ�����Լ�������
	GM_MSG_PET_MASTER_INFO,			//����֪ͨ�����Լ�������
	GM_MSG_PET_LEVEL_UP,			//����֪ͨ���������� ,content�� level
	GM_MSG_PET_HONOR_MODIFY,		//����֪ͨ������ҳ϶ȷ����仯
	GM_MSG_MASTER_ASK_HELP,			//����Ҫ��������

//145	
	GM_MSG_PET_SET_COOLDOWN,		//����֪ͨ����������ȴʱ�� msg.param�� cooldown id, content �� msec
	GM_MSG_MOB_BE_TRAINED,			//���ﱻѱ�������ͳ��ﵰ��ʩ����
	GM_MSG_PET_AUTO_ATTACK,			//����֪ͨ�����Զ����� msg.param ��force attack, content��Ŀ��
	GM_MSG_PET_SKILL_LIST,			//����֪ͨ�����µļ����б�
	GM_MSG_SWITCH_FAILED,			//����֪ͨ˵����ʧ��

//150	
	GM_MSG_PET_ANTI_CHEAT,
	GM_MSG_QUERY_PROPERTY,			//��ѯ�����˵����ԣ�param�ǲ�ѯ�����ڰ���������
	GM_MSG_QUERY_PROPERTY_REPLY,	//��ѯ�����˵����Է��أ�param�ǲ�ѯ�����ڰ�����������content����������
	GM_MSG_TRY_CLEAR_AGGRO,			//���������ȼ�����npc�����ȼ������npc���Լ��ĳ�ޣ�param���Լ��������ȼ�
	GM_MSG_NOTIFY_INVISIBLE_DATA,	//����������������֪ͨ������,�ó�������������

//155
	GM_MSG_NOTIFY_CLEAR_INVISIBLE,	//����������֪ͨ���ˣ�������Ҳ�������
	GM_MSG_CONTRIBUTION_TO_KILL_NPC,//���ɱ��npc��npc���͸���ҵ���Ϣ��param��npc world_tag content�ǽṹmsg_contribution_t
	GM_MSG_GROUP_CONTRIBUTION_TO_KILL_NPC,//����ɱ��npc��npc���͸���ҵ���Ϣ��param��npc world_tag content�ǽṹmsg_group_contribution_t
	GM_MSG_REBUILD_TEAM_INSTANCE_KEY_REQ,	//��Ա�����ӳ����ؽ���Ӹ���key������,param��worldtag,content���ؽ�ǰ��team_instance_key
	GM_MSG_REBUILD_TEAM_INSTANCE_KEY,		//�ӳ�������Ա���ؽ���Ӹ���key,param��worldtag,content�Ǿɵĺ��µ�team_instance_key

//160
	GM_MSG_TRANSFER_FILTER_DATA,		//filterת�ƣ�param��filter������content��filter����
	GM_MSG_PLANT_PET_NOTIFY_DEATH,		//ֲ���֪ͨ����������������pet_stamp
	GM_MSG_PLANT_PET_NOTIFY_HP,			//ֲ���֪ͨ������Ϣ��������pet_stamp��data��msg_plant_pet_hp_notify
	GM_MSG_PLANT_PET_NOTIFY_DISAPPEAR,	//ֲ���֪ͨ������ʧ��������pet_stamp
	GM_MSG_PLANT_PET_SUICIDE,			//����ֲ֪ͨ��ʹ���Ա���������pet_stamp

//165
	GM_MSG_MASTER_NOTIFY_LAYER,		//����֪ͨ��������layer,������petstamp data��char layer
	GM_MSG_INJECT_HP_MP,			//��Ŀ������hp��mp,data��msg_hp_mp_t
	GM_MSG_DRAIN_HP_MP,				//ʹĿ������hp��mp,data��msg_hp_mp_t
	GM_MSG_CONGREGATE_REQUEST,		//��������, param�������� data:msg_congregate_req_t
	GM_MSG_REJECT_CONGREGATE,		//�ܾ���������, param��������

//170
	GM_MSG_NPC_BE_KILLED_BY_OWNER,	//NPC�����ɱ��,param��npc tid,content��msg_dps_dph_t
	GM_MSG_EXCHANGE_POS,			//���֮�佻��λ�ã���ͬʱ����������
	GM_MSG_EXTERN_HEAL,				//��ĳĳ�����Ѫ����Ϣ
	GM_MSG_QUERY_INVENTORY_DETAIL,	//��ѯ��Ұ�����ϸ����
	GM_MSG_TURRET_OUT_OF_CONTROL,	//������ǳ��Ŀ���

//175
	GM_MSG_TRANSFER_FILTER_GET,		//filterת��, param��filter_mask content��ת�Ƶ�����
	GM_MSG_PET_TEST_SANCTUARY,		//֪ͨ��������˰�ȫ��
	GM_MSG_PLAYER_KILLED_BY_PLAYER,	//��ұ����ɱ����param��msg_player_killed_info_t
	GM_MSG_CREATE_COUNTRYBATTLE,	//Ҫ���սս������������һ��ս������Ϣ����Ҫ���ڲ���
	GM_MSG_COUNTRYBATTLE_HURT_RESULT,	//��ս��֪ͨ������ʵ����ɵ��˺���paramΪ�˺�ֵ��content�ܹ����߻���(player)��0(npc)
	
//180
	GM_MSG_LONGJUMP,				//���˲�ƣ�param��worldtag, content��pos
	GM_MSG_TRICKBATTLE_PLAYER_KILLED,
	GM_MSG_COUNTRYBATTLE_PLAYER_KILLED,	//��ս���������
	GM_MSG_MAFIA_PVP_AWARD, //����pvp��������
	GM_MSG_MAFIA_PVP_STATUS, //����pvp ״̬֪ͨ
//185	
	GM_MSG_MAFIA_PVP_ELEMENT,// ����pvp ��������
	GM_MSG_PUNISH_ME,	// ����Է��Լ�enchant����
	GM_MSG_REDUCE_CD,	// ��Ŀ�꽵cd
	GM_MSG_DELIVER_TASK, // ���������Ŀ��
	GM_MSG_OBJ_ACTION_END,			//�����action���
//190	
	GM_MSG_OBJ_ACTION_REPEAT,		//��ʾactionҪ����ִ�� 
	GM_MSG_SUBSCIBE_SUBTARGET,			//Ҫ����һ���μ�Ŀ��
	GM_MSG_UNSUBSCIBE_SUBTARGET,		//Ҫ��ȡ������һ���μ�Ŀ��
	GM_MSG_SUBSCIBE_SUBTARGET_CONFIRM, // ȷ�ϴμ�Ŀ�궩���Ƿ����
	GM_MSG_NOTIFY_SELECT_SUBTARGET,	   // ֪ͨ�����ߴμ������߸ı�
//195
	GM_MSG_ATTACK_CRIT_FEEDBACK,
	GM_MSG_DELIVER_STORAGE_TASK,       // �������������
    GM_MSG_CHANGE_GENDER_LOGOUT,       // ��ɫ���Գɹ�������
	GM_MSG_CLEAR_TOWER_TASK,           // ������˸�������
	GM_MSG_CREATE_MNFACTION,	//Ҫ��������ս������������һ��ս������Ϣ����Ҫ���ڲ���
//200
    GM_MSG_LOOKUP_ENEMY,
    GM_MSG_LOOKUP_ENEMY_REPLY,

	GM_MSG_FINISH_EVENT_REGION = 300,	// 
	GM_MSG_GIVE_SKILL_REGION,
	GM_MSG_GIVE_ITEM_REGION,

//GM�����õ���Ϣ	
	GM_MSG_GM_GETPOS=600,			//ȡ��ָ����ҵ����� param �� cs_index, content ��sid
	GM_MSG_GM_MQUERY_MOVE_POS,		//GMҪ���ѯ���� ������һ����ת����Ҵ� 
	GM_MSG_GM_MQUERY_MOVE_POS_REPLY,	//GMҪ���ѯ����Ļ�Ӧ,����GM����ת���� content�ǵ�ǰ��instance key
	GM_MSG_GM_RECALL,			//GMҪ�������ת
	GM_MSG_GM_CHANGE_EXP,			//GM����exp ��sp , param �� exp , content ��sp
	GM_MSG_GM_ENDUE_ITEM,			//GM������������Ʒ ��param ��item id, content ����Ŀ 
	GM_MSG_GM_ENDUE_SELL_ITEM,		//GM�������̵���������Ʒ������ͬ��
	GM_MSG_GM_REMOVE_ITEM,			//GMҪ��ɾ��ĳЩ��Ʒ��param ��item id, content ����Ŀ
	GM_MSG_GM_ENDUE_MONEY,			//GM���ӻ��߼��ٽ�Ǯ
	GM_MSG_GM_RESURRECT,			//GMҪ�󸴻�
	GM_MSG_GM_OFFLINE,			//GMҪ������ 
	GM_MSG_GM_DEBUG_COMMAND,		//GMҪ������ 
	GM_MSG_GM_RESET_PP,			//GM����ϴ�����
	GM_MSG_GM_QUERY_SPEC_ITEM,	//GM��ѯ����Ƿ����ָ����Ʒ
	GM_MSG_GM_REMOVE_SPEC_ITEM,	//GMɾ�����ָ����Ʒ

	GM_MSG_PICKUP_MONEY2,			//��Ʒ֪ͨ�û���Ǯ param��Ǯ��  content��˭������ 172
	GM_MSG_PICKUP_TEAM_MONEY2,		//��Ʒ֪ͨ�ӳ���Ǯ param��Ǯ��  content��˭������ 172
	GM_MSG_RECEIVE_MONEY2,			//֪ͨ��ҵõ�Ǯ�����������) 172

	GM_MSG_MAX,

};

struct msg_usermove_t	//�û��ƶ����ҿ�Խ�߽����Ϣ
{
	int cs_index;
	int cs_sid;
	int user_id;
	A3DVECTOR newpos;	//��Ϣ������oldpos
	size_t leave_data_size;	//�뿪���͵���Ϣ��С������Ϣ�����ں���)
	size_t enter_data_size;	//�뿪���͵���Ϣ��С������Ϣ�����ں���)
};

struct msg_aggro_info_t
{
	XID source;		//˭��������Щ���
	int aggro;		//��޵Ĵ�С
	int aggro_type;		//��޵�����
	int faction;		//�Է���������ϵ
	int level;		//�Է��ļ���
};

struct msg_watching_t
{
	int level;		//Դ�ļ���
	int faction;		//Դ����ϵ
	int invisible_degree;//Դ����������
};

struct msg_aggro_list_t
{
	int count;
	struct 
	{
		XID id;
		int aggro;
	}list[1];
};

struct msg_cry_for_help_t
{
	XID attacker;
	int lamb_faction;
	int helper_faction;
};

struct msg_aggro_alarm_t
{
	XID attacker;	//������
	int rage;	
	int faction;	//�����ߵ���ϵ
	int target_faction;	//Ŀ��Ľ����������
};

struct team_exp_entry
{
	int exp;
	int sp;
	XID who;
};

struct msg_exp_t
{
	int level;
	int exp;
	int sp;
};

struct msg_grp_exp_t
{
	int level;
	int exp;
	int sp;
	float rand;
};

struct msg_grpexp_t
{
	XID who;
	int damage;
	int reserve;
	/*
		��ӵ����ݽ϶�
		��ӵľ����ɶ���˵��˺����
		���Ը����������˵��˺��б�,
		�б��ĵ�һ��Ԫ�طֱ���who.type,who.id damage�ﱣ���� ����ֵ level/sp �Ͷ����team_seq
		����who.id�ĸ�16λΪ���𣬵�16λΪsp����Ŀ
		����ṹ��npc.cpp�ڲ��Ķ�������ΪTempDmgNode(����)

		����Ǹö������������˺������б��ĵڶ���Ԫ�ر�����ɱ���Ĺ������ƺͼ���
		����who.type ����npc tid,who.id ������һ�������,ʹ�ô��������һ��

		�ڶ���Ԫ�ص�damage ʼ�ձ�����������tag�������Ƿ�ö����������˺�
	*/
};

struct gather_reply
{
	int can_be_interrupted;
	int eliminate_tool;	//���Ĺ��ߵ�ID
	unsigned short gather_time_min;
	unsigned short gather_time_max;
};

struct gather_result
{
	int amount;
	int task_id;
	int get_task;
	int eliminate_tool;		//���ɾ����Ʒ�򸽼Ӵ�ID
	int mine_tid;
	int life;		//�ɼ�����Ʒ������
	char mine_type;	//���������
	int donglu_treasurebox_config_id;
	int modify_var_key;
	int modify_var_val;
};

struct msg_pickup_t
{
	XID who;
	int team_seq;
};

struct msg_gen_money
{
	int team_id;
	int team_seq;
};

struct msg_npc_transform
{
	int id_in_build;
	int time_use;
	int flag;
	int id_buildup;
	enum 
	{
		FLAG_DOUBLE_DMG_IN_BUILD = 1,
	};
};

struct msg_pet_pos_t
{
	A3DVECTOR pos;
	char inhabit_mode;
};

struct msg_pet_hp_notify
{
	float hp_ratio;
	int   cur_hp;
	char  aggro_state;		//���ֳ��״̬  0 ���� 1 ���� 2 ����
	char  stay_mode;		//���ָ��淽ʽ: 0 ���棬1��ͣ��
	char  combat_state;		//�Ƿ���ս��
	char  attack_monster;	//�Ƿ񹥻�����
	float mp_ratio;
	int   cur_mp;
};

struct msg_invisible_data
{
	int invisible_degree;
	int anti_invisible_degree;
};

struct msg_contribution_t
{
	int npc_id;				//npc��ģ��id
	bool is_owner;			//�Ƿ��ǹ��������������ж�ͬ����ɱ��
	float team_contribution;//���鹱�ף�����Ҳ��ڶ�������Ϊ���˹���
	int team_member_count;	//��������������Ҳ��ڶ�������Ϊ1
	float personal_contribution;	//���˹��׶�
};

struct msg_group_contribution_t
{
	int npc_id;				//npc��ģ��id
	bool is_owner;			//�Ƿ��ǹ��������������ж�ͬ����ɱ��
	int count;
	struct _list{
		XID xid;	
		float contribution;
	}list[];
};

struct msg_plant_pet_hp_notify
{
	float hp_ratio;
	int   cur_hp;
	float mp_ratio;
	int   cur_mp;
};

struct msg_hp_mp_t
{
	int hp;
	int mp;
};

struct msg_query_spec_item_t
{
	int type;
	int cs_index;
	int cs_sid;
};

struct msg_remove_spec_item_t
{
	int type;
	unsigned char where;
	unsigned char index;
	size_t count;
	int cs_index;
	int cs_sid;
};

struct msg_congregate_req_t
{
	int world_tag;
	int level_req;
	int sec_level_req;
    int reincarnation_times_req;
};

struct msg_dps_dph_t
{
	int level;
	int dps;
	int dph;
	bool update_rank;
};

struct msg_player_t
{
	int id;
	int cs_index;
	int cs_sid;
};

struct msg_player_killed_info_t
{
	int cls;
	bool gender;
	int level;
	int force_id;
};

struct msg_hurt_extra_info_t
{
	bool orange_name;
	char attacker_mode;
};

struct msg_mafia_pvp_award_t
{
	int mafia_id;
	int domain_id;
};

struct msg_punish_me_t
{
	int skill_id;
	int skill_lvl;
};

struct msg_reduce_cd_t
{
	int skill_id;
	int msec;
};

#endif

