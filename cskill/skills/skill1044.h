//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10440  "Aquaflame Shot"10441  "^ffffffAquaflame Shotã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€LV%d

^ffcb4aRangeã€€^ffffff25 meters
^ffcb4aEnergyã€€^96f5ff%d^ffffff
^ffcb4aStaminaã€€^96f5ff%d^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff12ã€€^ffcb4a seconds
^ffcb4aRequisite Classã€€^ffffffAll

Fires a bolt comprised of both Water and Fire elements.
Causes %.1f Water and Fire damage to the target.
And has a %d%% chance to recovery own health by 20%%.

^72fe00Dexterity: Every Genie Dexterity point increases the Fire and Water damage by 4.3 for each.
^72fe00Dexterity: Every 2 Genie Dexterity points increase the chance to recovery your health by 1%%."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1044
#define __CPPGEN_GNET_SKILL1044
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1044:public Skill
    {
        public:
        enum
        { SKILL_ID = 1044 };
        Skill1044 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1044Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (115 + (skill->GetLevel () - 1) * 4);
                skill->GetPlayer ()->SetDecelfap (600 + 99 * (skill->GetLevel () - 1));
                skill->SetWaterdamage ((0.5 * (216 + (skill->GetLevel () - 1) * 51 + skill->GetT1 () * 2)) * 4.3);
                skill->SetFiredamage ((0.5 * (216 + (skill->GetLevel () - 1) * 51 + skill->GetT1 () * 2)) * 4.3);
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
        Skill1044Stub ():SkillStub (1044)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"Ë®»ð·û";
            nativename          = "Ë®»ð·û";
            icon                = "Ë®»ð·û.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 600099;
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
            effect              = "Ë®»ð·û.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = true;
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
        virtual ~ Skill1044Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 115,119,123,127,131,135,139,143,147,151 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 12000,12000,12000,12000,12000,12000,12000,12000,12000,12000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 55047,55052,55057,55062,55067,55072,55077,55082,55087,55092 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 8280,11320,15380,20800,28400,38400,65400,106600,169400,263600 };
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
            return (float) (25);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            115 + (skill->GetLevel () - 1) * 4,
            600 + 99 * (skill->GetLevel () - 1), 0.5 * (216 + (skill->GetLevel () - 1) * 51) * 4.3, 10 + skill->GetLevel () * 2);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 20);
            skill->GetVictim ()->SetRatio (0.1 + skill->GetLevel () * 0.2 + skill->GetT1 () * 0.005);
            skill->GetVictim ()->SetScaleinchp (1);
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
            return (float) (27);
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