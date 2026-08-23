//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10080  "Blue Fire"10081  "^ffffffBlue Fireã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€LV%d

^ffcb4aRangeã€€^ffffff12 meters
^ffcb4aEnergyã€€^96f5ff%d^ffffff
^ffcb4aStaminaã€€^96f5ff%d^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff20ã€€^ffcb4a seconds
^ffcb4aRequisite Classã€€^ffffffWizard

Burns all enemies within 12 meters for %d Fire damage.
Causes %.1f Fire damage over 15 seconds to yourself and your targets.

^ffa083Strength: Every  Genie Strength point increases the damage by 1%%.


"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1008
#define __CPPGEN_GNET_SKILL1008
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1008:public Skill
    {
        public:
        enum
        { SKILL_ID = 1008 };
        Skill1008 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1008Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (45 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (78 + 94 * (skill->GetLevel () - 1));
                skill->SetFiredamage ((33 + (skill->GetLevel () - 1) * 12) * (1 + skill->GetPlayer ()->GetElfstr () * 0.01) * 6.7);
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
        Skill1008Stub ():SkillStub (1008)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"»ðÁ¶Õæ½ð";
            nativename          = "»ðÁ¶Õæ½ð";
            icon                = "»ðÁ¶Õæ½ð.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 78094;
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
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "»ðÁ¶Õæ½ð.sgc";
#endif
            range.type          = 2;
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
        virtual ~ Skill1008Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 45,48,51,54,57,60,63,66,69,72 };
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
            static int aarray[10] = { 1001111,1001116,1001121,1001126,1001131,1001136,1001141,1001146,1001151,1001156 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 300,640,1160,1840,2780,4000,5620,7780,10640,14480 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (13);
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
            return (float) (12);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            45 + (skill->GetLevel () - 1) * 3,
            78 + 94 * (skill->GetLevel () - 1), 3 + (skill->GetLevel () - 1) * 10, (33 + (skill->GetLevel () - 1) * 12 * 6.7));
            
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
            skill->GetVictim ()->SetTime (15000 + skill->GetT1 () * 50);
            skill->GetVictim ()->SetAmount (33 + (skill->GetLevel () - 1) * 12 * 6.7);
            skill->GetVictim ()->SetBurning (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (15000 + skill->GetT1 () * 50);
            skill->GetVictim ()->SetAmount (33 + (skill->GetLevel () - 1) * 12 * 6.7);
            skill->GetVictim ()->SetSelfburning (1);
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