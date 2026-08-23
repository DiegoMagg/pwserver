//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10400  "Bramble Rage"10401  "^ffffffBramble Rageã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€LV%d

^ffcb4aRangeã€€^ffffff25 meters
^ffcb4aEnergyã€€^96f5ff%d^ffffff
^ffcb4aStaminaã€€^96f5ff%d^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff60ã€€^ffcb4a seconds
^ffcb4aRequisite Classã€€^ffffffAll

Summons thorny brambles around your target and all enemies within 15 meters.
Causes %.1f Earth and Wood damage and interrupts their spell channeling.

^72fe00Dexerity: Every Genie Dexterity point increases the Wood damage by 14.
^72fe00Dexerity: Every Genie Dexterity point increases the Earth damage by 6.

^ff0000Only usable on the ground.

^d618e7Causes triple damage to targets on the ground."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1040
#define __CPPGEN_GNET_SKILL1040
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1040:public Skill
    {
        public:
        enum
        { SKILL_ID = 1040 };
        Skill1040 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1040Stub:public SkillStub
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
                skill->SetWooddamage ((0.7 * (177 + (skill->GetLevel () - 1) * 50 + skill->GetT1 () * 3)) * 6.7);
                skill->SetEarthdamage ((0.3 * (177 + (skill->GetLevel () - 1) * 50 + skill->GetT1 () * 3)) * 6.7);
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
        Skill1040Stub ():SkillStub (1040)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"¾£¼¬Ö®Å­";
            nativename          = "¾£¼¬Ö®Å­";
            icon                = "¾£¼¬Ö®Å­.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 1055099;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 6;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 1;
            clslimit            = 0;
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
            effect              = "¾£¼¬Ö®Å­.sgc";
#endif
            range.type          = 3;
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
        virtual ~ Skill1040Stub ()
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
            return 60000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 6000760,6000765,6000770,6000775,6000780,6000785,6000790,6000795,6000799,6000799 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 18480,25000,34000,53200,88000,141000,221200,317200,500000,500000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (12);
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
            140 + (skill->GetLevel () - 1) * 3, 1055 + 99 * (skill->GetLevel () - 1), (177 + 51 * (skill->GetLevel () - 1)) * 6.7);
            
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
            skill->GetVictim ()->SetBreak (1);
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