//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10250  "Whirlwind Cloud"10251  "^ffffffWhirlwind Cloud　　　　　　　　　　　　　LV%d

^ffcb4aRange　^ffffff12 meters
^ffcb4aEnergy　^96f5ff%d^ffffff
^ffcb4aStamina　^96f5ff%d^ffffff
^ffcb4aInstant
^ffcb4aCooldown　^ffffff10　^ffcb4a seconds
^ffcb4aRequisite Class　^ffffffAll

Calls a whirlwind to attack targets in a frontal cone.
Causes %.1f Metal and physical damage and knocks
non-player enemies 8 meters back.

^ffa083Strength: Every  Genie Strength point increases the damage by 1%%."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1025
#define __CPPGEN_GNET_SKILL1025
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1025:public Skill
    {
        public:
        enum
        { SKILL_ID = 1025 };
        Skill1025 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1025Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfap (46 + 22 * (skill->GetLevel () - 1));
                skill->SetGolddamage ((0.8 * (33 + (skill->GetLevel () - 1) * 28)) * (1 + skill->GetPlayer ()->GetElfstr () * 0.01) * 6.2);
                skill->SetDamage ((0.2 * (33 + (skill->GetLevel () - 1) * 28)) * (1 + skill->GetPlayer ()->GetElfstr () * 0.01) * 6.2);
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
        Skill1025Stub ():SkillStub (1025)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"��ŭ";
            nativename          = "��ŭ";
            icon                = "��ŭ.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 46022;
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
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "��ŭ.sgc";
#endif
            range.type          = 4;
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
        virtual ~ Skill1025Stub ()
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
            return 10000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 2010430,2010435,2010440,2010445,2010450,2010455,2010460,2010465,2010470,2010475 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 2560,3720,5260,7300,10000,13620,18480,25000,34000,53200 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (14);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (90));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (12);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            85 + (skill->GetLevel () - 1) * 3, 46 + 22 * (skill->GetLevel () - 1), (33 + (skill->GetLevel () - 1) * 28) * 6.2);
            
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
            skill->GetVictim ()->SetValue (8);
            skill->GetVictim ()->SetRepel (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (1000);
            skill->GetVictim ()->SetAmount (0);
            skill->GetVictim ()->SetValue (8);
            skill->GetVictim ()->SetRepel2 (1);
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