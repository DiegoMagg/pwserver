//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
52280  "Î¨Howling Collapse"52281  "^ff5c00Î¨Howling Collapse

^ffcb4aRangeã€¢ã^ffffffMelee
^ffcb4aManaã€¢ã^96f5ff155.9^ffffff
^ffcb4aChannelã€¢ã^ffffff0.1ã€¢ã^ffcb4asecond(s)
^ffcb4aCastã€¢ã^ffffff1.0ã€¢ã^ffcb4asecond(s)
^ffcb4aCooldownã€¢ã^ffffff15ã€¢ã^ffcb4asecond(s)
^ffcb4aWeaponã€¢ã^ffffffSword Shield
^ffcb4aGlyph Bonus    ^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€¢ãã€¢ã^ffffffCelestial Saint
Bashes with your shield, hitting all enemies within ^96f5ff8^ffffff meters of the target, dealing
physical damage equal to your base Physical Attack plus ^96f5ff6238^ffffff.
Also Silence it for ^96f5ff2^ffffff seconds.

^a6caf0Costs ^ffffff20^a6caf0 Chi.

^00ffffEthereal Glyph Effect:@1
^00ffffLV1-4: Silence Duration is increased to ^ffffff2.5^00ffff seconds.
^00ffffLV5-7: Silence Duration is increased to ^ffffff3.0^00ffff seconds.
^00ffffLV8-9: Silence Duration is increased to ^ffffff3.5^00ffff seconds.
^00ffffLV10: Silence Duration is increased to ^ffffff4.0^00ffff seconds. @1@2
Silence Duration is increased to ^ffffff%.1f^00ffff seconds. @2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5228
#define __CPPGEN_GNET_SKILL5228
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5228:public Skill
    {
        public:
        enum
        { SKILL_ID = 5228 };
        Skill5228 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5228Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * (155.9));
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
                skill->GetPlayer ()->SetDecmp (0.8 * (155.9));
                skill->SetPlus (6238);
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
        Skill5228Stub ():SkillStub (5228)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Õ¶Ð¥ÇãÂ¥";
            nativename          = "Éñ¡¤Õ¶Ð¥ÇãÂ¥";
            icon                = "ÉñÕ¶Ð¥ÇãÂ¥À¶.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 20;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
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
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59830);
            }
#ifdef _SKILL_CLIENT
            effect              = "±ÀÉ½»÷_»÷ÖÐ.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5159, 1));
            pre_skills.push_back (std::pair < ID, int >(5160, 1));
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "×´Ì¬³ÖÐøÊ±¼äÔö³¤2.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill5228Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (155);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1034;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
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
            return (float) (8);
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
            int _glyph_value = get_glyph(skill->GetLevel (), 3200, 3600, 4000, 4500);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (_glyph_value);
            skill->GetVictim ()->SetSleep (1);
            
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
            return (float) (skill->GetPlayer ()->GetRange () + 8);
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
            return (float) (1.0);
        }
#endif
    };
}
#endif