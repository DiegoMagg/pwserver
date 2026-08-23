//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38780  "Î¨Raging Slap"38781  "^ff5c00Î¨Raging Slapã€€ã€€ã€€ã€€

^ffcb4aRequires Tiger Form
^ffcb4aRangeã€€^ff5c0020ã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff202^ffffff
^ffcb4aChannelã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ff5c0030.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffA/H, Unarmed
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Taunt the target with a furious slap of your paw,
forcing them to
target you for the next ^96f5ff8^ffffff seconds.
Grants a shield that absorbs damage equal to^96f5ff10%%^ffffff of your maximum Health for ^96f5ff5^ffffff seconds.
Guaranteed to remove ^96f5ff1^ffffff positive status effect.

^a6caf0Has no effect on non-player targets.
^a6caf0Costs ^ffffff35^a6caf0 Chi

^ffcb4aGolden Glyph Effect@1
^ffcb4aLv1-4: Cooldown reduced to ^96f5ff28^ffcb4a seconds
^ffcb4aLv5-7: Cooldown reduced to ^96f5ff26^ffcb4a seconds
^ffcb4aLv8-9: Cooldown reduced to ^96f5ff24^ffcb4a seconds
^ffcb4a Lv10 : Cooldown reduced to ^96f5ff22^ffcb4a seconds@1@2
^ffcb4aCooldown reduced to ^96f5ff%d^ffcb4a seconds@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL878
#define __CPPGEN_GNET_SKILL878
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill878:public Skill
    {
        public:
        enum
        { SKILL_ID = 878 };
        Skill878 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill878Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
        Skill878Stub ():SkillStub (878)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"×ÔÉíÔ²ÐÄÈºÌå¶¨Éí";
            nativename          = "×ÔÉíÔ²ÐÄÈºÌå¶¨Éí";
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
            effect              = "ÎåÒô·û.sgc";
#endif
            range.type          = 2;
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
        virtual ~ Skill878Stub ()
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
            return (float) (60);
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
            return (float) (50);
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
            skill->GetVictim ()->SetTime (5000 * skill->GetLevel ());
            skill->GetVictim ()->SetFix (1);
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