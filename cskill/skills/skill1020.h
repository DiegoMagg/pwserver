//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10200  "Mantle Ripple of Rage"10201  "^ffffffMantle Ripple of Rageã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€LV%d

^ffcb4aRangeã€€^ffffff15 meters
^ffcb4aEnergyã€€^96f5ff%d^ffffff
^ffcb4aStaminaã€€^96f5ff120^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff1ã€€^ffcb4a second
^ffcb4aRequisite Classã€€^ffffffBarbarian

Sends a ripple of anger through the ground.
Increases the Chi of all allies within %d meters.
Whenever an ally is attacked, that ally will gain 3 Chi.
Lasts for 5 seconds.

^ffa083Strength: Every 4 Genie Strength points increase the effect time by 1 second.
^72fe00Dexterity: Every 70 Genie Dexterity points increase the Chi replenished by 1.

^ff0000Only usable on the ground."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1020
#define __CPPGEN_GNET_SKILL1020
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1020:public Skill
    {
        public:
        enum
        { SKILL_ID = 1020 };
        Skill1020 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1020Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (70 + (skill->GetLevel () - 1) * 2);
                skill->GetPlayer ()->SetDecelfap (120);
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
        Skill1020Stub ():SkillStub (1020)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"´óµØ²¨ÎÆ.·ßÅ­";
            nativename          = "´óµØ²¨ÎÆ.·ßÅ­";
            icon                = "´óµØ²¨ÎÆ·ßÅ­.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 120000;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 5;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 1;
            clslimit            = 16;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 0;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "´óµØ²¨ÎÆ·ßÅ­.sgc";
#endif
            range.type          = 2;
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
        virtual ~ Skill1020Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 70,72,74,76,78,80,82,84,86,88 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 3310,3315,3320,3325,3330,3335,3340,3345,3350,3355 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 240,560,1040,1680,2560,3720,5260,7300,10000,13620 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (5 + skill->GetLevel () * 1);
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
            return (float) (15);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 70 + (skill->GetLevel () - 1) * 2, 5 + skill->GetLevel () * 1);
            
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
            skill->GetVictim ()->SetTime (5000 + skill->GetT0 () * 250);
            skill->GetVictim ()->SetValue (3 + skill->GetT1 () * 0.014);
            skill->GetVictim ()->SetApgen (1);
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