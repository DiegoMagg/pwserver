//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
36860  "Î¨Sandfall"36861  "^ff5c00Î¨Sandfall

^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4aMeters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1.8ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff10.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aRequired Weapon:ã€€^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Unleash a deadly torrent of sand on your foe, dealing base
magic damage plus ^96f5ff200%%^ffffff of weapon damage plus ^96f5ff6560^ffffff as Earth
damage. Blinds the target for ^96f5ff9^ffffff seconds, reducing Accuracy
by ^96f5ff50%%^ffffff and dealing an additional ^96f5ff600%%^ffffff weapon damage plus ^96f5ff7021^ffffff
as Earth damage. Has a ^96f5ff33%%^ffffff chance to stun the target for ^96f5ff3^ffffff seconds.

^00ff00Verdant Glyph Effect@1
^00ff00Lv1-4: Reduces channeling time to ^96f5ff1.6^00ff00 seconds.
^00ff00Lv5-7: Reduces channeling time to ^96f5ff1.5^00ff00 seconds.
^00ff00Lv8-9: Reduces channeling time to ^96f5ff1.4^00ff00 seconds.
^00ff00Lv10: Reduces channeling time to ^96f5ff1.3^00ff00 seconds.@1@2
^00ff00Reduces channeling time to ^96f5ff%.1f^00ff00 seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL686
#define __CPPGEN_GNET_SKILL686
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill686:public Skill
    {
        public:
        enum
        { SKILL_ID = 686 };
        Skill686 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill686Stub:public SkillStub
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
        Skill686Stub ():SkillStub (686)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"´ò¶ÏÊõ";
            nativename          = "´ò¶ÏÊõ";
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
            effect              = "¹ÖÎï»÷ÔÎÊõ.sgc";
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
        virtual ~ Skill686Stub ()
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
            return (float) (15);
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
            skill->GetVictim ()->SetProbability (1.0 * 90);
            skill->GetVictim ()->SetBreak (1);
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
            return (float) (25);
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