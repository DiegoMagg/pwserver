//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
51060  "Shield of Monstrosity"51061  "^ffffffShield of Monstrosity  ã€€ ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€Level %d

^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff90ã€€^ffcb4asecond(s)
^ffcb4aWeaponã€€^ffffffSword Shield, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of Transcendence
Protects yourself with the shield; in ^96f5ff%.1f^ffffff seconds, reflects all negative effects from ^96f5ff3^ffffff
skills that your enemies cast at you.
When you take a skill that lands multiple hits, each hit is counted as a skill.

^FFFF00Used when inflicted with control effects.
^a6caf0Requires ^ffffff100^a6caf0  Shield Energy."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5106
#define __CPPGEN_GNET_SKILL5106
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5106:public Skill
    {
        public:
        enum
        { SKILL_ID = 5106 };
        Skill5106 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5106Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (1 * (95.4 + (5.4 * skill->GetLevel () - 5.4)));
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
        Skill5106Stub ():SkillStub (5106)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"Ñª¶Ü-²ØÉ±";
            nativename          = "Ñª¶Ü-²ØÉ±";
            icon                = "Ñª¶Ü²ØÉ±.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 6;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 7;
            {
                restrict_weapons.push_back (59830);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "Óð¶Ü_·´_×´Ì¬.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5104, 1));
            feature             = 1205;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5106Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 108,113,118,124,129,135,140,145,151,156 };
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
            static int aarray[10] = { 60,63,66,69,72,75,78,81,84,87 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 55440,63270,71820,81600,99840,146300,209380,295240,411520,567490 };
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
        /*bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetTime (5300 + (300 * skill->GetLevel () - 300));
            skill->GetVictim ()->SetRatio (3);
            skill->GetVictim ()->SetRetortNewPaladin (1);
            return true;
        }*/
        bool StateAttack (Skill * skill) const
        {						
	        skill->GetVictim ()->SetProbability (1.0 * 100);
			skill->GetVictim ()->SetTime (5300 + (300 * skill->GetLevel () - 300));
            skill->GetVictim ()->SetRatio (100);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetNewValue (3);
            skill->GetVictim ()->SetSoulbeatbackPaladin (1);		

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