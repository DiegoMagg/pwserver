//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39410  "Œ®Glacial Spike"39411  "^ff5c00Œ®Glacial Spike

^ffcb4aRange„ÄÄ^96f5ff20^ffffff„ÄÄ^ffcb4ameters
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.3„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff1.2„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff30.0„ÄÄ^ffcb4aseconds
^ffcb4aWeapon„ÄÄ^ffffffPolearm
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation„ÄÄ^ffffffCelestial Saint
Focus cold magic into a ^96f5ff12^ffffff meter burst of glacial spikes,
dealing base physical damage plus ^96f5ff100%%^ffffff of weapon damage
plus ^96f5ff8504^ffffff. Restores
^96f5ff50^ffffff Chi after use. This attack is guaranteed to hit.

If the target is within ^96f5ff10^ffffff meters of you,
their Physical and Magical Damage is reduced by^96f5ff%d%%^ffffff of weapon damage.
(Physical Defense reduction increased to ^96f5ff90%%^ffffff of weapon damage.
Magic Defense reduction increased to ^96f5ff60%%^ffffff of weapon damage.)
^ffffffFreezes the inflicted targets ^96f5ff10^ffffff meters away for
^96f5ff5^ffffff seconds.

^a6caf0Costs ^ffffff2^a6caf0 Sparks.

^ff0000Sanguine Glyph Effect:@1
^ff0000 In ^96f5ff6^ff0000 seconds, the range of the next ^96f5ffŒ®Drake's Breath Bash^ff0000 is increased by ^96f5ff10^ff0000 meters.
^ff0000Lv1-4: The damage of the next ^96f5ffŒ®Drake's Breath Bash^ff0000 is increased by ^96f5ff20%%.
^ff0000Lv5-7: The damage of the next^96f5ffŒ®Drake's Breath Bash^ff0000 is increased by^96f5ff30%%.
^ff0000Lv8-9: The damage of the next^96f5ffŒ®Drake's Breath Bash^ff0000 is increased by^96f5ff40%%.
^ff0000 LV10 :The damage of the next^96f5ffŒ®Drake's Breath Bash^ff0000 is increased by^96f5ff50%%.@1@2
^ff0000In ^96f5ff6^ff0000seconds, the range of the next ^96f5ffŒ®Drake's Breath Bash^ff0000is increased by
^96f5ff10^ff0000meters and damage increased by ^96f5ff%d%%.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL41
#define __CPPGEN_GNET_SKILL41
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill41:public Skill
    {
        public:
        enum
        { SKILL_ID = 41 };
        Skill41 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill41Stub:public SkillStub
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
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 5;
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
        Skill41Stub ():SkillStub (41)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"∑ﬂ≈≠";
            nativename          = "∑ﬂ≈≠";
            icon                = "";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "π÷ŒÔ÷Œ¡∆ ı.sgc";
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
        virtual ~ Skill41Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 0;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
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
            return _snwprintf (buffer, length, format);
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
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetIncattack (1);
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
            return (float) (0);
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