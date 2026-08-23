//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37580  "Î¨Amplify Damage"37581  "^ff5c00Î¨Amplify Damage

^ffcb4aRequires Fox Form.
^ffcb4aRangeã€€^ffffff10ã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1.5ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.2ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aRequired Weapon:ã€€^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Curse a target with vulnerability, increasing the damage it takes by ^96f5ff%d%%^ffffff for ^96f5ff26^ffffff seconds.

^a6caf0If the enemy is already cursed, the previous curse will be removed.

^00ff00Verdant Glyph Effect:@1
^00ff00Further increases damage taken by targets
affected by the Argent Glyphs of ^96f5ffÎ¨Venomous Scarab^00ff00,
^96f5ffÎ¨Lucky Scarab^00ff00 ^96f5ffÎ¨Noxious Gas^00ff00 or ^96f5ffÎ¨Redstone Venomworm^00ff00.
^00ff00Lv1-4: Increases damage by ^96f5ff4%%^00ff00 per effect.
^00ff00Lv5-7: Increases damage by ^96f5ff6%%^00ff00 per effect.
^00ff00Lv8-9: Increases damage by ^96f5ff8%%^00ff00 per effect.
^00ff00Lv10: Increases damage by ^96f5ff10%%^00ff00 per effect.@1@2
^00ff00Further increases damage taken by targets affected
by the Argent Glyphs of ^96f5ffÎ¨Venomous Scarab^00ff00, ^96f5ffÎ¨Lucky Scarab^00ff00,
^96f5ffÎ¨Noxious Gas^00ff00 or ^96f5ffÎ¨Redstone Venomworm^00ff00 by ^96f5ff%d%%^00ff00 per effect.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL758
#define __CPPGEN_GNET_SKILL758
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill758:public Skill
    {
        public:
        enum
        { SKILL_ID = 758 };
        Skill758 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill758Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 400;
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
                return 600;
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
        Skill758Stub ():SkillStub (758)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"¼õËÙ";
            nativename          = "¼õËÙ";
            icon                = "³èÎï¼õËÙ.dds";
#endif
            max_level           = 5;
            type                = 3;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 9106;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "ºÍ·ç·÷Ãæ.sgc";
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
        virtual ~ Skill758Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 600;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 10000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 1,20,40,60,80,80,80,80,80,80 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 10000,20000,30000,40000,50000,50000,50000,50000,50000,50000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 11703,11689,11689,11689,11689,11689,11689,11689,11689,11689 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (10);
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
            return (float) (3);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 25 + 5 * skill->GetLevel ());
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 10 * skill->GetPlayer ()->GetLevel () * (3 + skill->GetLevel ());
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetRatio (0.25 + 0.05 * 5);
            skill->GetVictim ()->SetSlow (1);
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
            return (float) (10);
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