//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10140  "Wind Force"10141  "^ffffffWind Forceã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€Initial skill

^ffcb4aEnergyã€€^96f5ff90^ffffff
^ffcb4aStaminaã€€^96f5ff150^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff15ã€€^ffcb4a seconds
^ffcb4aRequisite Classã€€^ffffffAll

Increases your flight speed by 50%% for %.1f seconds.
Every 2 genie levels, the energy cost is reduced by 1.

^72fe00Dexterity: Every 10 Genie Dexterity points increases the speed bonus by 1%%.
^72fe00Dexterity: Every 40 Genie Dexterity points increases the duration by 1 second.

^ff0000Only usable in the air.

"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1014
#define __CPPGEN_GNET_SKILL1014
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1014:public Skill
    {
        public:
        enum
        { SKILL_ID = 1014 };
        Skill1014 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1014Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (90 - skill->GetPlayer ()->GetElflevel () * 0.5);
                skill->GetPlayer ()->SetDecelfap (150);
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
        Skill1014Stub ():SkillStub (1014)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"Óù·ç¾÷";
            nativename          = "Óù·ç¾÷";
            icon                = "Óù·ç¾÷.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 150000;
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
            allow_land          = 0;
            allow_air           = 1;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "Óù·ç¾÷.sgc";
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
        virtual ~ Skill1014Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (90);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
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
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 4 + skill->GetLevel () * 0.5);
            
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
            skill->GetVictim ()->SetTime (4000 + skill->GetLevel () * 500 + skill->GetT1 () * 25);
            skill->GetVictim ()->SetRatio (0.5 + skill->GetT1 () * 0.001);
            skill->GetVictim ()->SetFastfly (1);
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