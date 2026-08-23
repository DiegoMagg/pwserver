//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
13420  "Saber Rattle"13421  "^ffffffSaber Rattle„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄLevel %d

^ffcb4aRange„ÄÄ^96f5ffMelee
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aChannel„ÄÄ^ffffff2.0„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff1.8„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff15.0„ÄÄ^ffcb4aseconds
^ffcb4aWeapon„ÄÄ^ffffffBlade, Sword

^ffcb4aRequired Cultivation„ÄÄ^ffffffAware of Discord
Raise your weapon in the air and shout a rallying
cry to boost the morale of all squad members
within ^96f5ff15^ffffff meters. Increases their Attack Level by
up to ^96f5ff3^ffffff based on skill level. Lasts ^96f5ff30^ffffff minutes.

^a6caf0Only one of this type of effect may be active at once.
^a6caf0Does not stack with Runecrafting effects."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1342
#define __CPPGEN_GNET_SKILL1342
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1342:public Skill
    {
        public:
        enum
        { SKILL_ID = 1342 };
        Skill1342 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1342Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 2000;
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
                skill->GetPlayer ()->SetDecmp (0.5 * (100 + 50 * skill->GetLevel ()));
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 25 - 2 * skill->GetLevel ();
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
                return 1867;
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
                skill->GetPlayer ()->SetDecmp (0.5 * (100 + 50 * skill->GetLevel ()));
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
        Skill1342Stub ():SkillStub (1342)
        {
            cls                 = 8;
#ifdef _SKILL_CLIENT
            name                = L"¡˘∫œΩ£÷‰";
            nativename          = "¡˘∫œΩ£÷‰";
            icon                = "¡˘∫œΩ£÷‰.dds";
#endif
            max_level           = 3;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 4;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1127;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (1);
            }
#ifdef _SKILL_CLIENT
            effect              = "Ω£¡È_¡˘∫œΩ£÷‰.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(1345, 1));
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
        virtual ~ Skill1342Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 150,200,250,250,250,250,250,250,250,250 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1867;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 39,59,75,75,75,75,75,75,75,75 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 24600,87000,266000,266000,266000,266000,266000,266000,266000,266000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (15);
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
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 100 + 50 * skill->GetLevel ());
            
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
            skill->GetVictim ()->SetAmount (0);
            skill->GetVictim ()->SetValue (29381 + skill->GetLevel ());
            skill->GetVictim ()->SetActivatesharpener (1);
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
            return (float) (5);
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
            return (float) (0);
        }
#endif
    };
}
#endif