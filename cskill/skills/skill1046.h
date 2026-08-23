//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10460  "Inflame"10461  "^ffffffInflameã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€LV%d

^ffcb4aRangeã€€^ffffff8 meters
^ffcb4aEnergyã€€^96f5ff%d^ffffff
^ffcb4aStaminaã€€^96f5ff%d^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff1ã€€^ffcb4a second
^ffcb4aRequisite Classã€€^ffffffAll

Surrounds you in a blazing flame.
Causes %d Fire damage to all enemies within 8 meters
and has a %d%% chance to confuse them for 3 seconds.

^72fe00Dexterity: Every Genie Dexterity point increases the damage by 4.
^72fe00Dexterity: Every 4 Genie Dexterity points increase the chance to confuse by 1%%.
^72fe00Dexterity: Every 50 Genie Dexterity points increase the stun duration by 1 second.
^ff0000Only usable on the ground."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1046
#define __CPPGEN_GNET_SKILL1046
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1046:public Skill
    {
        public:
        enum
        { SKILL_ID = 1046 };
        Skill1046 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1046Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfap (158 + 28 * (skill->GetLevel () - 1));
                skill->SetFiredamage ((221 + (skill->GetLevel () - 1) * 45 + skill->GetT1 () * 4) * 1);
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
        Skill1046Stub ():SkillStub (1046)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"Ñ×ÉÁ";
            nativename          = "Ñ×ÉÁ";
            icon                = "Ñ×ÉÁ.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 158028;
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
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "Ñ×ÉÁ.sgc";
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
        virtual ~ Skill1046Stub ()
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
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 6760,6765,6770,6775,6780,6785,6790,6795,6799,6799 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 18480,25000,34000,53200,88000,141000,221200,317200,500000,500000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (9);
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
            return (float) (8);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            140 + (skill->GetLevel () - 1) * 3,
            158 + 28 * (skill->GetLevel () - 1), 221 + (skill->GetLevel () - 1) * 45, 10 + skill->GetLevel () * 2);
            
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
            skill->GetVictim ()->SetProbability (1.0 * 10 + skill->GetLevel () * 2 + skill->GetT1 () * 0.25);
            skill->GetVictim ()->SetTime (2000 + skill->GetT1 () * 20);
            skill->GetVictim ()->SetSealed (1);
            skill->GetVictim ()->SetProbability (1.0 * -1);
            skill->GetVictim ()->SetTime (2000 + skill->GetT1 () * 20);
            skill->GetVictim ()->SetFix (1);
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