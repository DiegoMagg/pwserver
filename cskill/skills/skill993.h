//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39930  "Î¨Darkcloud Bolt"39931  "^ff5c00Î¨Darkcloud Bolt

^ffcb4aRangeã€€^ffffff28^ffcb4aã€€ã€€meters
^ffcb4aManaã€€^96f5ff115^ffffff
^ffcb4aChannelã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff6.0ã€€ ^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aRequired Weapon:ã€€^ffffffSword
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Call down a sudden storm to attack all enemies within ^96f5ff12 ^ffffffmeters around the target.
Deals ^96f5ff110%% ^ffffffof base physical damage plus ^96f5ff100%% ^ffffffof weapon damage
plus ^96f5ff2700^ffffff. Has a ^96f5ff50%% ^ffffffchance to interrupt the target's channeling.
Freezes targets with the Eye of the Northern Sky status, dealing
additional damage and reducing their Defense Level.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff40%% ^ffcb4aof weapon damage.
^ffcb4aLv5-7: Deals an additional ^96f5ff60%% ^ffcb4aof weapon damage.
^ffcb4aLv8-9: Deals an additional ^96f5ff80%% ^ffcb4aof weapon damage.
^ffcb4aLv10: Deals an additional ^96f5ff100%% ^ffcb4aof weapon damage.@1@2
^ffcb4aDeals an additional ^96f5ff%d%% ^ffcb4aof weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL993
#define __CPPGEN_GNET_SKILL993
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill993:public Skill
    {
        public:
        enum
        { SKILL_ID = 993 };
        Skill993 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill993Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (35 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (53 + 40 * (skill->GetLevel () - 1));
                skill->SetFiredamage ((7 + (skill->GetLevel () - 1) * 14 + skill->GetT1 ()) * 6.7);
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
        Skill993Stub ():SkillStub (993)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"×ÓÄ¸À×»ðÖä";
            nativename          = "×ÓÄ¸À×»ðÖä";
            icon                = "×ÓÄ¸À×»ðÖä.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 53040;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 5;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "×ÓÄ¸»ðÀ×Öä.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 0));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill993Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 35,38,41,44,47,50,53,56,59,62 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 40000,40000,40000,40000,40000,40000,40000,40000,40000,40000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 2008,2013,2018,2023,2028,2033,2038,2043,2048,2053 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 160,420,820,1400,2180,3220,4600,6400,8820,12040 };
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
            return (float) (20);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            35 + (skill->GetLevel () - 1) * 3,
            53 + 40 * (skill->GetLevel () - 1), (7 + 14 * (skill->GetLevel () - 1)) * 6.7, skill->GetLevel () * 3);
            
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
            float percent = 0.03f;
            if(skill->GetPlayer ()->GetCls () == 0) percent = 0.03f; // âîèí
            if(skill->GetPlayer ()->GetCls () == 1) percent = 0.03f; // ìà?			if(skill->GetPlayer ()->GetCls () == 2) percent = 0.02f; // øàìà?			if(skill->GetPlayer ()->GetCls () == 3) percent = 0.03f; // äðóè?
            if(skill->GetPlayer ()->GetCls () == 4) percent = 0.02f; // òàíê
            if(skill->GetPlayer ()->GetCls () == 5) percent = 0.01f; // ñè?
            if(skill->GetPlayer ()->GetCls () == 6) percent = 0.01f; // ëó?
            if(skill->GetPlayer ()->GetCls () == 7) percent = 0.03f; // æðåö
            if(skill->GetPlayer ()->GetCls () == 8) percent = 0.03f; // ñòðà?
            if(skill->GetPlayer ()->GetCls () == 9) percent = 0.03f; // ìèñòèê
            if(skill->GetPlayer ()->GetCls () == 10) percent = 0.03f; // ïðèçðà?			if(skill->GetPlayer ()->GetCls () == 11) percent = 0.01f; // æíåö
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetRatio (skill->GetLevel () * percent + skill->GetT1 () * 0.006);
            skill->GetVictim ()->SetReducefire2 (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfstr ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfagi ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent2 (PlayerWrapper * player) const
        {
            return (float) (player->GetLevel ());
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
            return (float) (20);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 20;
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