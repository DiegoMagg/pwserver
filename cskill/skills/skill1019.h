//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10190  "Relentless Courage"10191  "^ffffffRelentless Courage　　　　　　　　　　　　　LV%d

^ffcb4aEnergy　^96f5ff%d^ffffff
^ffcb4aStamina　^96f5ff180^ffffff
^ffcb4aInstant
^ffcb4aCooldown　^ffffff30　^ffcb4a seconds
^ffcb4aRequisite Class　^ffffffAll

A courageous song that
improves your battle prowess.
Increases your attack speed by 5%%,
your movement speed by 5%%,
and your channeling speed by 5%%.
Lasts for %.1f seconds.

^ffa083Strength: Every 4 Genie Strength points increase the attack speed by 1%% more.
^ffa083Strength: Every 4 Genie Strength points increase the movement speed by 1%% more.
^72fe00Dexterity: Every 15 Genie Dexterity points increase channeling speed by 1%% more."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1019
#define __CPPGEN_GNET_SKILL1019
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1019:public Skill
    {
        public:
        enum
        { SKILL_ID = 1019 };
        Skill1019 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1019Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (50 + (skill->GetLevel () - 1) * 10);
                skill->GetPlayer ()->SetDecelfap (180);
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
        Skill1019Stub ():SkillStub (1019)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"ս��";
            nativename          = "ս��";
            icon                = "ս��.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 180000;
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
            effect              = "ս��.sgc";
#endif
            range.type          = 5;
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
        virtual ~ Skill1019Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 50,60,70,80,90,100,110,120,130,140 };
            return aarray[skill->GetLevel () - 1];
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
            static int aarray[10] = { 201223,201228,201233,201238,201243,201248,201253,201258,201263,201268 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1400,2180,3220,4600,6400,8820,12040,16360,22200,30200 };
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
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 50 + (skill->GetLevel () - 1) * 10, 3 + 0.5 * skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (3000 + 500 * skill->GetLevel ());
            skill->GetVictim ()->SetRatio (0.05 + skill->GetT0 () * 0.0025);
            skill->GetVictim ()->SetFastattack (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (3000 + 500 * skill->GetLevel ());
            skill->GetVictim ()->SetRatio (0.05 + skill->GetT1 () * 0.00067);
            skill->GetVictim ()->SetFastpray (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (3000 + 500 * skill->GetLevel ());
            skill->GetVictim ()->SetRatio (0.05 + skill->GetT0 () * 0.0025);
            skill->GetVictim ()->SetSpeedup (1);
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
        bool TakeEffect (Skill * skill) const
        {;
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetEffectdistance (Skill * skill) const
        {
            return (float) (40);
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