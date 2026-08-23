//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10370  "Dampen Magic Curse"10371  "^ffffffDampen Magic Curseã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€LV%d

^ffcb4aRangeã€€^ffffff%d meters
^ffcb4aEnergyã€€^96f5ff%d^ffffff
^ffcb4aStaminaã€€^96f5ff1500^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff1ã€€^ffcb4a second
^ffcb4aRequisite Classã€€^ffffffAll

Constantly decreases a target's MP for 15 seconds.
Has a %d%% chance to recover 30%% of your MP over 15 seconds.

^72fe00Dexterity: Randomly increases the target MP reducing amount.
^72fe00Dexterity: Every 2 Genie Dexterity points increases the trigger chance of MP regeneration by 1%%.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1037
#define __CPPGEN_GNET_SKILL1037
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1037:public Skill
    {
        public:
        enum
        { SKILL_ID = 1037 };
        Skill1037 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1037Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (125 + (skill->GetLevel () - 1) * 2);
                skill->GetPlayer ()->SetDecelfap (1500);
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
        Skill1037Stub ():SkillStub (1037)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"ÆÆÄ§Öä";
            nativename          = "ÆÆÄ§Öä";
            icon                = "ÆÆÄ§Öä.dds";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 800000;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 3;
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
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "ÆÆÄ§Öä.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
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
        virtual ~ Skill1037Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 125,127,129,131,133,135,137,139,141,143 };
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
            static int aarray[10] = { 605050,605055,605060,605065,605070,605075,605080,605085,605090,605095 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 10000,13620,18480,25000,34000,53200,88000,141000,221200,317200 };
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
            return (float) (10 + 2 * skill->GetLevel ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (), 10 + 2 * skill->GetLevel (), 125 + (skill->GetLevel () - 1) * 2, 10 + skill->GetLevel () * 2);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 10;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetAmount (skill->GetPlayer ()->GetMaxmp () * 0.2);
            skill->GetVictim ()->SetMagicleak (1);
            skill->GetVictim ()->SetProbability (1.0 * 30);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetAmount (skill->GetPlayer ()->GetMaxmp () * 0.3);
            skill->GetVictim ()->SetMagicleak (1);
            skill->GetVictim ()->SetProbability (1.0 * 20 + skill->GetLevel () * 1 + skill->GetT1 () * 0.2);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetAmount (skill->GetPlayer ()->GetMaxmp () * 0.5);
            skill->GetVictim ()->SetMagicleak (1);
            skill->GetVictim ()->SetProbability (1.0 * 20 + skill->GetLevel () * 1 + skill->GetT1 () * 0.2);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetAmount (skill->GetPlayer ()->GetMaxmp () * 0.6);
            skill->GetVictim ()->SetMagicleak (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 10 + skill->GetLevel () * 2 + skill->GetT1 () * 0.5);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetValue (skill->GetPlayer ()->GetMaxmp () * 0.3);
            skill->GetVictim ()->SetMpgen (1);
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
            return (float) (12 + 2 * skill->GetLevel ());
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