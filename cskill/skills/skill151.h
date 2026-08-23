//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
11510  "543523"11511  "^ffffffOxygen Void  (Level %d)

^ffcb4aRange„ÄÄ^96f5ff%.1f^ffffff„ÄÄ^ffcb4a Meters
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.2„ÄÄ^ffcb4a seconds
^ffcb4aCast„ÄÄ^ffffff0.8„ÄÄ^ffcb4a seconds
^ffcb4aCooldown„ÄÄ^ffffff3.0„ÄÄ^ffcb4a seconds
^ffcb4aChi Gained„ÄÄ^ffffff5
^ffcb4aWeapon„ÄÄ^ffffffSoulsphere, barehands

^ffcb4aRequired Cultivation„ÄÄ^ffffffSpiritual Adept
Explosively collapse a bubble of oxygen next to the target,
dealing ^96f5ff%d%%^ffffff of weapon damage plus ^96f5ff%.1f^ffffff as Water damage.
Suffocates the target for ^96f5ff15^ffffff seconds, dealing ^96f5ff%.1f^ffffff Physical
damage. Slows the target for ^96f5ff%.1f^ffffff seconds, reducing speed by ^96f5ff50%%^ffffff.

Only usable in Tide Form."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL151
#define __CPPGEN_GNET_SKILL151
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill151:public Skill
    {
        public:
        enum
        { SKILL_ID = 151 };
        Skill151 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill151Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 200;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (28.8 + 6 * skill->GetLevel ()));
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
                return 1000;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (28.8 + 6 * skill->GetLevel ()));
                skill->SetPlus (3.1 * skill->GetLevel () * skill->GetLevel () + 124 * skill->GetLevel () + 581.3);
                skill->SetRatio (0);
                skill->SetDamage (skill->GetAttack ());
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
        Skill151Stub ():SkillStub (151)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"ÕÃ …";
            nativename          = "ÕÃ …";
            icon                = "ÕÃ ….dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 35;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 3;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1517;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÕÃ ….sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 2;
            commoncooldowntime  = 6000;
            pre_skills.push_back (std::pair < ID, int >(149, 1));
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
        virtual ~ Skill151Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 34,40,46,52,58,64,70,76,82,88 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 6000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 29,34,39,44,49,54,59,64,69,74 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 11800,17300,24600,34200,47000,64000,87000,118000,160000,239000 };
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
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            28.8 + 6 * skill->GetLevel (),
            3.1 * skill->GetLevel () * skill->GetLevel () + 124 * skill->GetLevel () + 581.3,
            20 + 3 * skill->GetLevel (), 1 * skill->GetLevel ());
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 700 * skill->GetLevel ();
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (4000);
            skill->GetVictim ()->SetDizzy (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (0.2 + 0.03 * skill->GetLevel ());
            skill->GetVictim ()->SetDecdefence (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (4000);
            skill->GetVictim ()->SetValue (1 * skill->GetLevel ());
            skill->GetVictim ()->SetSubattackdegree (1);
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
            return (float) (14.1);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 11;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.5 + 0.1 * skill->GetLevel ());
        }
#endif
    };
}
#endif