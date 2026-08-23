//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50920  "Shield of Cataclysm"50921  "^ffffffShield of Cataclysm ã€€ ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€Level %d

^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff90ã€€^ffcb4asecond(s)
^ffcb4aWeaponã€€^ffffffSword Shield, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffSpiritual Adept
Use your Shield Energy to form a defensive shield, that can negate
damage by ^96f5ff%d%%^ffffff of your Max HP for ^96f5ff10^ffffff seconds.
When the shield is active, immune to all negative effects.

^FFFF00Can be used when inflicted with movement control effects.
^a6caf0Requires ^ffffff100^a6caf0  Shield Energy."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5092
#define __CPPGEN_GNET_SKILL5092
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5092:public Skill
    {
        public:
        enum
        { SKILL_ID = 5092 };
        Skill5092 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5092Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (21.6 + (9 * skill->GetLevel ()));
                skill->GetPlayer ()->SetPerform (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return false;
            }
            bool Cancel (Skill * skill) const
            {
                return 1;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill5092Stub ():SkillStub (5092)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"Ãü¶Ü-±Ü½Ù";
            nativename          = "Ãü¶Ü-±Ü½Ù";
            icon                = "Ãü¶Ü±Ü½Ù.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 1;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 1202;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 7;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (59830);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5090, 1));
            feature             = 1201;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5092Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 30,39,48,57,66,75,84,93,102,111 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 90000,90000,90000,90000,90000,90000,90000,90000,90000,90000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 10,22,27,32,37,42,47,52,57,62 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 3700,6272,9300,13112,17845,23400,30222,38488,48447,60320 };
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
            return (float) (0);
        }
        int GetCostShieldEnergy (Skill * skill) const
        {
            static int aarray[10] = { 100,100,100,100,100,100,100,100,100,100 };
            return aarray[skill->GetLevel () - 1];
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format);
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
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetValue (skill->GetPlayer ()->GetMaxhp () * 0.17 + (0.02 * skill->GetLevel() - 0.02) / 3);
            skill->GetVictim ()->SetShieldNew1 (1);
            
            return true;
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
            return (float) (8);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (0);
        }
#endif
    };
}
#endif