//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10130  "Remove Paralysis"10131  "^ffffffRemove Paralysisã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€LV%d

^ffcb4aEnergyã€€^96f5ff70^ffffff
^ffcb4aStaminaã€€^96f5ff500^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff30ã€€^ffcb4a seconds
^ffcb4aRequisite Classã€€^ffffffAll

%d%% chance to remove a paralysis effect from yourself.

^ffa083Strength: Every 4 Genie Strength points increases the hit chance by 1%%.
^72fe00Dexterity: Every 4 Genie Dexterity points increases the success rate by 1%%.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1013
#define __CPPGEN_GNET_SKILL1013
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1013:public Skill
    {
        public:
        enum
        { SKILL_ID = 1013 };
        Skill1013 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1013Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (70);
                skill->GetPlayer ()->SetDecelfap (500);
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
        Skill1013Stub ():SkillStub (1013)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"½ð¸Õºð";
            nativename          = "½ð¸Õºð";
            icon                = "½ð¸Õºð.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 500000;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
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
            effect              = "½ð¸Õºð.sgc";
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
        virtual ~ Skill1013Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (70);
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
            static int aarray[10] = { 1012016,1012021,1012026,1012031,1012036,1012041,1012046,1012051,1012056,1012061 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 640,1160,1840,2780,4000,5620,7780,10640,14480,19660 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 40 + skill->GetLevel () * 2);
            
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
            skill->GetVictim ()->SetProbability (1.0 * 40 + skill->GetLevel () * 2 + skill->GetT0 () * 0.25 + skill->GetT1 () * 0.25);
            skill->GetVictim ()->SetClearrooted (1);
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