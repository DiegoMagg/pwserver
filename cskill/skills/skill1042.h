//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10420  "Chi Siphon"10421  "^ffffffChi Siphonã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€LV%d

^ffcb4aRangeã€€^ffffff15 meters
^ffcb4aEnergyã€€^96f5ff%d^ffffff
^ffcb4aStaminaã€€^96f5ff300^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff1ã€€^ffcb4a second
^ffcb4aRequisite Classã€€^ffffffAll

Drains %d Chi from an enemy into yourself.
The target will then regenerate 30 Chi every 3 seconds for 30 seconds.

^72fe00Dexterity: Every 2 Genie Dexterity points increases the Chi you gain by 1.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1042
#define __CPPGEN_GNET_SKILL1042
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1042:public Skill
    {
        public:
        enum
        { SKILL_ID = 1042 };
        Skill1042 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1042Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (130 + (skill->GetLevel () - 1) * 4);
                skill->GetPlayer ()->SetDecelfap (300);
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
        Skill1042Stub ():SkillStub (1042)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"ÔªÆøµÁÇÔ";
            nativename          = "ÔªÆøµÁÇÔ";
            icon                = "ÔªÆøµÁÇÔ.dds";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 300000;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 4;
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
            effect              = "ÔªÆøµÁÇÔ.sgc";
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
        virtual ~ Skill1042Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 130,134,138,142,146,150,154,158,162,166 };
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
            static int aarray[10] = { 70760,70765,70770,70775,70780,70785,70790,70795,70799,70799 };
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
            return (float) (15);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 130 + (skill->GetLevel () - 1) * 4, 50 + skill->GetLevel () * 15);
            
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
            skill->GetVictim ()->SetValue (-(50 + skill->GetLevel () * 15));
            skill->GetVictim ()->SetAp (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (30000);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetAmount (300);
            skill->GetVictim ()->SetValue (1);
            skill->GetVictim ()->SetApgencont (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (50 + skill->GetLevel () * 15 + skill->GetT1 () / 2);
            skill->GetVictim ()->SetAp (1);
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
            return (float) (16);
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