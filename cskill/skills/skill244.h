//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
12440  "‚óèEarth Vector"12441  "^8080ff‚óèEarth Vector

^ffcb4aRange „ÄÄ^96f5ff28.5^ffffff„ÄÄ^ffcb4a meters
^ffcb4aMana„ÄÄ^96f5ff680^ffffff
^ffcb4aChannel„ÄÄ^ffffff1.0„ÄÄ^ffcb4a seconds
^ffcb4aCast„ÄÄ^ffffff1.0„ÄÄ^ffcb4a seconds
^ffcb4aCooldown„ÄÄ^ffffff20.0„ÄÄ^ffcb4a seconds
^ffcb4aWeapon„ÄÄ^ffffffSoulsphere

^ffcb4aRequired Cultivation„ÄÄ^ffffffMaster of Harmony
Manipulate the earth's magnetic field to crush enemies
within ^96f5ff6^ffffff meters into the ground. Deals base magic damage
plus ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff3987.1^ffffff as Earth damage.
Has an ^96f5ff85%%^ffffff chance to stun enemies for ^96f5ff6^ffffff seconds.

^a6caf0Costs ^ffffff1^a6caf0 Spark.

^f7dfa5Sage version has a ^96f5ff50%%^f7dfa5 chance to consume no Sparks."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL244
#define __CPPGEN_GNET_SKILL244
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill244:public Skill
    {
        public:
        enum
        { SKILL_ID = 244 };
        Skill244 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill244Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 3000;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (4.5 + 22.5 * skill->GetLevel ()));
                skill->GetPlayer ()->SetPray (1);
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
#ifdef _SKILL_SERVER
        class State2:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 800;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (4.5 + 22.5 * skill->GetLevel ()));
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
#ifdef _SKILL_SERVER
        class State3:public SkillStub::State
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
        Skill244Stub ():SkillStub (244)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"¡“—Ê÷Æ ∏";
            nativename          = "¡“—Ê÷Æ ∏";
            icon                = "¡“—Ê÷Æ ∏.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1312;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (13);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill244Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 27,49,72,94,117,139,162,184,207,229 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 800;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 3000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 6,11,16,21,26,31,36,41,46,51 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 320,1200,2560,4640,7360,11120,16000,22480,31120,42560 };
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
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 4.5 + 22.5 * skill->GetLevel (), 10 + 3 * skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (600000);
            skill->GetVictim ()->SetRatio (0.1 + 0.03 * skill->GetLevel ());
            skill->GetVictim ()->SetFirearrow (1);
            skill->GetVictim ()->SetClearinvisible (1);
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
            return (float) (skill->GetPlayer ()->GetRange () + 5);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 3;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1 + 0.05 * skill->GetLevel ());
        }
#endif
    };
}
#endif