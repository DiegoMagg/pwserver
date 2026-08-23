//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10410  "Dragonfire"10411  "^ffffffDragonfireã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€LV%d

^ffcb4aRangeã€€^ffffff25 meters
^ffcb4aEnergyã€€^96f5ff%d^ffffff
^ffcb4aStaminaã€€^96f5ff%d^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff20ã€€^ffcb4a seconds
^ffcb4aRequisite Classã€€^ffffffAll

Summon a fiery dragon to assault your enemy. Causes %.1f physical and
Fire damage and frightens your opponent, reducing the target's
defense level by %d for 3 seconds.

^ffa083Strength: Every Genie Strength point increases the physical damage by 10.
^72fe00Dexterity: Every Genie Dexterity point increases the fire damage by 10.
^ffa083Strength: Every 20 Genie Strength points increase duration by 1 second.

^d618e7Causes double damage to very close targets.

^ff0000Only usable on the ground.

"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1041
#define __CPPGEN_GNET_SKILL1041
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1041:public Skill
    {
        public:
        enum
        { SKILL_ID = 1041 };
        Skill1041 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1041Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (140 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (1055 + 99 * (skill->GetLevel () - 1));
                skill->SetFiredamage ((0.5 * (199 + (skill->GetLevel () - 1) * 47 + skill->GetT1 () * 3)) * 6.7);
                skill->SetDamage ((0.5 * (199 + (skill->GetLevel () - 1) * 47 + skill->GetT0 () * 3)) * 6.7);
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
        Skill1041Stub ():SkillStub (1041)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"ÉýÁúÆø";
            nativename          = "ÉýÁúÆø";
            icon                = "ÉýÁúÆø.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 1055099;
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
            allow_air           = 0;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 2;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "ÉýÁúÆø.sgc";
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
        virtual ~ Skill1041Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 140,143,146,149,152,155,158,161,164,167 };
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
            static int aarray[10] = { 67060,67065,67070,67075,67080,67085,67090,67095,67099,67099 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 18480,25000,34000,53200,88000,141000,221200,317200,500000,500000 };
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
            140 + (skill->GetLevel () - 1) * 3,
            1055 + 99 * (skill->GetLevel () - 1), (199 + (skill->GetLevel () - 1) * 48) * 6.7, 10 + skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (3000 + skill->GetT0 () * 50);
            skill->GetVictim ()->SetValue (10 + skill->GetLevel () * 1);
            skill->GetVictim ()->SetSubdefencedegree (1);
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