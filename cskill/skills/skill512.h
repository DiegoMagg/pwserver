//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
45120  "Î¨Fossilized Curse"45121  "^ff5c00Î¨Fossilized Curse

^ffcb4aRequires Fox Form
^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1ã€€^ffcb4asecond
^ffcb4aCastã€€^ffffff1.3ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff2ã€€^ffcb4aminutes
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instrument

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Assault your enemy with the essence of death itself.
Deals base magic damage plus ^96f5ff100%%^ffffff of weapon damage plus
^96f5ff150%%^ffffff of your maximum Health  plus ^96f5ff20%%^ffffff of base magic damage as Wood
damage. Removes all status effects from the target that
increase Magic Defenses, and reduces Attack Rate by
^96f5ff100%%^ffffff and Accuracy by ^96f5ff300%%^ffffff for ^96f5ff15^ffffff seconds.
Never misses.

^a6caf0Costs ^ffffff1 ^a6caf0Spark.

^ff0000Sanguine Glyph Effect:@1
^ff0000No longer reduces Attack Rate and Accuracy.
No longer removes Magic Defense effects.
Increases base magic damage by ^96f5ff80%%^ff0000.
^ff0000Lv1-4: Increases all Wood damage by an additional ^96f5ff10%%^ff0000.
^ff0000Lv5-7: Increases all Wood damage by an additional ^96f5ff15%%^ff0000.
^ff0000Lv8-9: Increases all Wood damage by an additional ^96f5ff20%%^ff0000.
^ff0000Lv10: Increases all Wood damage by an additional ^96f5ff25%%^ff0000.@1@2
^ff0000No longer reduces Attack Rate and Accuracy.
No longer removes Magic Defense effects.
Increases base magic damage by ^96f5ff80%%^ff0000.
Increases all Wood damage by an additional ^96f5ff%d%%^ff0000.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL512
#define __CPPGEN_GNET_SKILL512
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill512:public Skill
    {
        public:
        enum
        { SKILL_ID = 512 };
        Skill512 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill512Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 500;
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
                skill->GetPlayer ()->SetDecmp (99);
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
                skill->GetPlayer ()->SetDecmp (396);
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
        Skill512Stub ():SkillStub (512)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"Õæ¡¤ÊÞÍõ¹ÄÎè";
            nativename          = "Õæ¡¤ÊÞÍõ¹ÄÎè";
            icon                = "ÊÞÍõ¹ÄÎè1.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 20;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1511;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (9);
            }
#ifdef _SKILL_CLIENT
            effect              = "1ÊÞÍõ¹ÄÎè.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(82, 10));
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
        virtual ~ Skill512Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (495);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 2000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 3000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 89 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (16);
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
            return _snwprintf (buffer, length, format, 495, 35);
            
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
            skill->GetVictim ()->SetTime (3600000);
            skill->GetVictim ()->SetRatio (0.35);
            skill->GetVictim ()->SetInchp (1);
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
            return 6;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1);
        }
#endif
    };
}
#endif