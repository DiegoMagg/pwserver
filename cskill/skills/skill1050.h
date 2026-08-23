//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10500  "Hollow Fist"10501  "^ffffffHollow Fistã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€LV%d

^ffcb4aRangeã€€^ffffff25 meters
^ffcb4aEnergyã€€^96f5ff%d^ffffff
^ffcb4aStaminaã€€^96f5ff%d^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff20ã€€^ffcb4a seconds
^ffcb4aRequisite Classã€€^ffffffVenomancer

Smashes the enemy with a fist of the purest Chi energy.
Causes %.1f physical and Metal damage and reduces the
target's physical defense for 20%% of gear value for 9 seconds.
Also causes the target to bleed for %d damage over 9 seconds.

^ffa083Strength: Every Genie Strength point increases the bleed damage by %d.
^ffa083Strength: Every Genie Strength point increases the Physical damage by 10.
^72fe00Dexterity: Every Genie Dexterity points increases the Metal damage by 10.

^d618e7Causes triple damage to targets in the air.
^ff0000Only usable on the ground.

"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1050
#define __CPPGEN_GNET_SKILL1050
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1050:public Skill
    {
        public:
        enum
        { SKILL_ID = 1050 };
        Skill1050 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1050Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (85 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (780 + 99 * (skill->GetLevel () - 1));
                skill->SetGolddamage ((0.5 * (125 + (skill->GetLevel () - 1) * 22 + skill->GetT1 () * 3)) * 6.7);
                skill->SetDamage ((0.5 * (125 + (skill->GetLevel () - 1) * 22 + skill->GetT0 () * 3)) * 6.7);
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
        Skill1050Stub ():SkillStub (1050)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"¿ÕÁÑ×¦";
            nativename          = "¿ÕÁÑ×¦";
            icon                = "¿ÕÁÑ×¦.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 780099;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 2;
            clslimit            = 8;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 0;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "¿ÕÁÑ×¦.sgc";
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
        virtual ~ Skill1050Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 85,88,91,94,97,100,103,106,109,112 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 20000,20000,20000,20000,20000,20000,20000,20000,20000,20000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 400435,400440,400445,400450,400455,400460,400465,400470,400475,400480 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 3720,5260,7300,10000,13620,18480,25000,34000,53200,88000 };
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
            85 + (skill->GetLevel () - 1) * 3,
            780 + 99 * (skill->GetLevel () - 1),
            0.5 * (125 + (skill->GetLevel () - 1) * 22) * 6.7, skill->GetLevel (), skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetRatio (0.2);
            skill->GetVictim ()->SetDecdefence2 (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetAmount (skill->GetLevel () * skill->GetT0 () * 1);
            skill->GetVictim ()->SetBleeding (1);
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
            return (float) (26);
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