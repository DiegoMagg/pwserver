//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10340  "Blazing Shield"10341  "^ffffffBlazing Shield　　　　　　　　　　　　　LV%d

^ffcb4aRange　^ffffff25 meters
^ffcb4aEnergy　^96f5ff120^ffffff
^ffcb4aStamina　^96f5ff999^ffffff
^ffcb4aInstant
^ffcb4aCooldown　^ffffff1　^ffcb4a second
^ffcb4aRequisite Class　^ffffffAll

Randomly makes the target immune to one or more of the following effects:
Silence, sleep, immobilization,
for %.1f seconds,
or increased damage.
for %.1f seconds.

^ffa083Strength: Every 2 Genie Strength Points increase the chance to immune to Silence and Sleep by 1%%
^72fe00Dexterity: Every 2 Genie Dexterity points increase the chance to immune to Slow and Stun by 1%%"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1034
#define __CPPGEN_GNET_SKILL1034
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1034:public Skill
    {
        public:
        enum
        { SKILL_ID = 1034 };
        Skill1034 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1034Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (120);
                skill->GetPlayer ()->SetDecelfap (999);
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
        Skill1034Stub ():SkillStub (1034)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"Ǳ�ܼ���";
            nativename          = "Ǳ�ܼ���";
            icon                = "Ǳ�ܼ���.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 999000;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
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
            effect              = "Ǳ�ܼ���.sgc";
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
        virtual ~ Skill1034Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (120);
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
            static int aarray[10] = { 5545,5550,5555,5560,5565,5570,5575,5580,5585,5590 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 7300,10000,13620,18480,25000,34000,53200,88000,141000,221200 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 2 + skill->GetLevel () * 0.2, 3 + skill->GetLevel () * 0.4);
            
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
            skill->GetVictim ()->SetProbability (1.0 * 10 + skill->GetT0 () * 0.5);
            skill->GetVictim ()->SetTime (2000 + skill->GetLevel () * 200);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetImmunesealed (1);
            skill->GetVictim ()->SetProbability (1.0 * 10 + skill->GetT0 () * 0.5);
            skill->GetVictim ()->SetTime (3000 + skill->GetLevel () * 200);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetImmunesleep (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (3000 + skill->GetLevel () * 400);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetImmuneweak (1);
            skill->GetVictim ()->SetProbability (1.0 * 10 + skill->GetT1 () * 0.5);
            skill->GetVictim ()->SetTime (3000 + skill->GetLevel () * 200);
            skill->GetVictim ()->SetImmuneslowdizzy (1);
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
            return 0;
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