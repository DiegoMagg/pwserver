//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39450  "Œ®Myriad Sword Stance"39451  "^ff5c00Œ®Myriad Sword Stance

^ffcb4aRange„ÄÄ^ffffffMelee
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.2„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff3.0„ÄÄ^ffcb4aseconds.
^ffcb4aCooldown„ÄÄ^ffffff30.0„ÄÄ^ffcb4aseconds
^ffcb4aRequired Weapon:„ÄÄ^ffffffSword
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation„ÄÄ^ffffffCelestial Saint
Turn your vigor into an immense sword to destroy
your enemies. Enemies within ^96f5ff12^ffffff meters of the target
are dealt ^96f5ff400%%^ffffff base physical damage.
Never misses. Restores ^96f5ff25^ffffff Chi after use.

^a6caf0Costs ^ffffff1^a6caf0 Spark.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Reduces the Chi cost of your next ^96f5ffŒ®Glacial Spike ^00ff00within ^96f5ff6 ^00ff00seconds by ^96f5ff80.
^00ff00Lv5-7: Reduces the Chi cost of your next ^96f5ffŒ®Glacial Spike ^00ff00within ^96f5ff6 ^00ff00seconds by ^96f5ff120.
^00ff00Lv8-9: Reduces the Chi cost of your next ^96f5ffŒ®Glacial Spike ^00ff00within ^96f5ff6 ^00ff00seconds by ^96f5ff160.
^00ff00Lv10: Reduces the Chi cost of your next ^96f5ffŒ®Glacial Spike ^00ff00within ^96f5ff6 ^00ff00seconds by ^96f5ff200.@1@2
^00ff00Reduces the Chi cost of your next ^96f5ffŒ®Glacial Spike ^00ff00within ^96f5ff6 ^00ff00seconds by ^96f5ff%d.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL945
#define __CPPGEN_GNET_SKILL945
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill945:public Skill
    {
        public:
        enum
        { SKILL_ID = 945 };
        Skill945 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill945Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 50;
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
        class State2:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 50;
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
                skill->GetPlayer ()->SetDisappear (1);
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
        Skill945Stub ():SkillStub (945)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"œ›⁄Â.µ•ÃÂº”ÀŸ√‚‘Œ";
            nativename          = "œ›⁄Â.µ•ÃÂº”ÀŸ√‚‘Œ";
            icon                = "";
#endif
            max_level           = 10;
            type                = 3;
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
            effect              = "¡Ë≤®Œ¢≤Ω.sgc";
#endif
            range.type          = 0;
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
        virtual ~ Skill945Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 50;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 0;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 1,2,3,4,5,6,7,8,9,10 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (skill->GetLevel () + 5);
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
            return (float) (5);
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
            skill->GetVictim ()->SetTime (skill->GetMagicdamage ());
            skill->GetVictim ()->SetRatio (0.2 * skill->GetLevel ());
            skill->GetVictim ()->SetSpeedup (1);
            skill->GetVictim ()->SetTime (skill->GetMagicdamage ());
            skill->GetVictim ()->SetFreemove (1);
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
            return (float) (60);
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