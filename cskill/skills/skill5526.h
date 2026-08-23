//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
55260  "Vantagem Celestial"
55261  "^ffffff Vantagem Celestial

^ffcb4aEspera  ^ffffff 30,0 ^ffcb4asegundos

^ffcb4aCultivo Necess�rio:  ^ffffff Leal

Eleve seu Esp�rito de  ^96f5ff 1 ^ffffff  para  ^96f5ff 750 ^ffffff .
Quanto mais Selos Celestiais voc� tiver, mais forte a habilidade ser�.
Ap�s os Selos Celestiais ultrapassarem o valor de 700, 
o efeito ben�fico ser� menor.
Aumenta o seu N�vel de Matan�a em  ^96f5ff 10 ^ffffff .

Os efeitos seguintes s� est�o dispon�veis em 
 ^96f5ff Vale Celestial, Perfect World�Crisol de Jade, 
Perfect World�Quedanunca, Morai, Mundo Primitivo, 
Mundo Primitivo, Mundo Primitivo(Modo Hist�ria) ^ffffff .

Imune a dano de habilidades e efeitos negativos de jogadores 
cujo N�vel de C�u seja  ^96f5ff 10 ^ffffff  n�veis a menos que o seu ou ainda menor.
Imune a dano de habilidades e efeitos negativos de jogadores 
cujo Anima seja  ^96f5ff 25000 ^ffffff  menor que o seu.
Todo o dano recebido de jogadores � reduzido em  ^96f5ff 20%% ^ffffff , 
aumenta o dano causado a jogadores em  ^96f5ff 25%% ^ffffff .
Dura  ^96f5ff 1 ^ffffff  hora.

^a6caf0N�o pode ser usado na Arena, Ca�a Temporal ou no Modo Offline.
"
*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5526
#define __CPPGEN_GNET_SKILL5526
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5526:public Skill
    {
        public:
        enum
        { SKILL_ID = 5526 };
        Skill5526 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5526Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 0;
            }
            bool Quit (Skill * skill) const
            {
                return false;
            }
            bool Loop (Skill * skill) const
            {
                return false;
            }
            bool Bypass (Skill * skill) const
            {
                return false;
            }
            void Calculate (Skill * skill) const
            {
                skill->GetPlayer ()->SetPerform (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return false;
            }
            bool Cancel (Skill * skill) const
            {
                return 0;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill5526Stub ():SkillStub (5526)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"����ѹ��";
            nativename          = "����ѹ��";
            icon                = "�ɼ���ӡ.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 7003;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
#ifdef _SKILL_CLIENT
            effect              = "����.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5526Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (0);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, const wchar_t * buffer, int length, const wchar_t * format) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (99999999);
            skill->GetVictim ()->SetValue (10);       
            skill->GetVictim ()->SetBattlePassEffect (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool TakeEffect (Skill * skill) const
        {;
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetEffectdistance (Skill * skill) const
        {
            return (float) (10);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
        }
#endif
    };
}
#endif