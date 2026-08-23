//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
66060  "Œ®Goose Descent"66061  "^ff5c00Œ®Goose Descent„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ

^ffcb4aRange„ÄÄ^96f5ffMelee
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aChannel„ÄÄ^ffffffInstant
^ffcb4aCooldown„ÄÄ^ffffff120„ÄÄ^ffcb4aseconds
^ffcb4aWeapon„ÄÄ^ffffffClubs

^ffcb4aRequired Cultivation„ÄÄ^ffffffCelestial Saint
Swing your club to defend yourself. The direct ranged damage dealt by players
^96f5ff8^ffffff meters away is reduced by ^96f5ff90%%^ffffff.
While casting, immune to negative effects and regenerate 30 Chi
every ^96f5ff1.5^ffffff seconds. Lasts for up to ^96f5ff20^ffffff seconds.

^a6caf0Costs ^ffffff1 ^a6caf0Spark.

^00ff00Verdant Glyph Effect@1
^00ff00Lv1-4: While casting, gain an additional ^96f5ff100%%^00ff00 of gear physical and magical defense.
^00ff00Lv5-7: While casting, gain an additional ^96f5ff200%%^00ff00 of gear physical and magical defense.
^00ff00Lv8-9: While casting, gain an additional ^96f5ff300%%^00ff00 of gear physical and magical defense.
^00ff00Lv10: While casting, gain an additional ^96f5ff400%%^00ff00 of gear physical and magical defense.@1@2
^00ff00While casting, gain an additional ^96f5ff%d%%^00ff00 of gear physical and magical defense.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6606
#define __CPPGEN_GNET_SKILL6606
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6606:public Skill
    {
        public:
        enum
        { SKILL_ID = 6606 };
        Skill6606 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6606Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 100;
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
                skill->GetPlayer ()->SetPerform (2);
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
                return 1450;
            }
            bool Quit (Skill * skill) const
            {
                return false;
            }
            bool Loop (Skill * skill) const
            {
                return skill->GetPlayer ()->GetMp () > 300 && skill->GetSection () < 14;
            }
            bool Bypass (Skill * skill) const
            {
                return false;
            }
            void Calculate (Skill * skill) const
            {
                skill->SetSection (skill->GetSection () + 1);
                skill->GetPlayer ()->SetDecmp (0.5 * (300));
                skill->GetPlayer ()->SetCombat (1);
                skill->GetPlayer ()->SetPerform (0);
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
        Skill6606Stub ():SkillStub (6606)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"…Ò°§∆Ω…≥¬‰—„";
            nativename          = "…Ò°§∆Ω…≥¬‰—„";
            icon                = "…Ò∆Ω…≥¬‰—„¬Ã.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 4;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1501;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (69843);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(6496, 1));
            pre_skills.push_back (std::pair < ID, int >(6497, 1));
            runes_attr          = 2;
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
        virtual ~ Skill6606Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (300);
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 120000,120000,120000,120000,120000,120000,120000,120000,120000,120000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 50000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
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
            return (float) (skill->GetPlayer ()->GetRange () + 10);
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
            //skill->GetVictim ()->SetProbability (1.0 * (skill->GetSection () < 2 ? 100 : 0));
            //skill->GetVictim ()->SetTime (20000);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (5050);
            skill->GetVictim ()->SetRatio (0.9);
            skill->GetVictim ()->SetReduzDanoaDistancia (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (5050);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetIncdebuffdodge (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100); // Adiciona Chi a cada 1.5 Segundos
            skill->GetVictim ()->SetValue (30);
            skill->GetVictim ()->SetAp (1);
            
            float _glyph_value = get_glyph(skill->GetLevel (), 1.0, 2.0, 3.0, 4.0);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (4050);
            skill->GetVictim ()->SetRatio (_glyph_value);
            skill->GetVictim ()->SetIncdefence (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (4050);
            skill->GetVictim ()->SetRatio (_glyph_value);
            skill->GetVictim ()->SetIncresist (1);
            
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