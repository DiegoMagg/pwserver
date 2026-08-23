//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39660  "Î¨Glowing Blade"39661  "^ff5c00Î¨Glowing Blade

^ffcb4aRangeã€€^96f5ff28^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff80^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff3.0 ^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff15
^ffcb4aRequired Weaponã€€^ffffffSword
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Charge your weapon with mystical light to strike
a deadly blow against your enemy. Deals ^96f5ff110%% ^ffffffof
base physical damage plus ^96f5ff100%% ^ffffffof weapon damage
plus ^96f5ff3520 ^ffffffas ^ffcb4aPhysical ^ffffffdamage. Increases Threat.
^ff0000Does not apply Spirit Bore or Bloodletting. Never misses.

^ff0000Sanguine Glyph Effect:@1
^ff0000Lv1-4: Deals an additional ^96f5ff90%% ^ff0000of weapon damage plus ^96f5ff2010^ff0000.
^ff0000Lv5-7: Deals an additional ^96f5ff120%% ^ff0000of weapon damage plus ^96f5ff2680^ff0000.
^ff0000Lv8-9: Deals an additional ^96f5ff150%% ^ff0000of weapon damage plus ^96f5ff3350^ff0000.
^ff0000Lv10: Deals an additional ^96f5ff180%% ^ff0000of weapon damage plus ^96f5ff4020^ff0000.@1@2
^ff0000Deals an additional ^96f5ff%d%% ^ff0000of weapon damage plus ^96f5ff%d^ff0000.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3966
#define __CPPGEN_GNET_SKILL3966
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3966:public Skill
    {
        public:
        enum
        { SKILL_ID = 3966 };
        Skill3966 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3966Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
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
                skill->GetPlayer ()->SetDecmp (0.2 * 80);
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return 0;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.9, 1.2, 1.5, 1.8);
                int _glyph_value_2 = get_glyph(skill->GetLevel (), 2010, 2680, 3350, 4020);
                
                skill->GetPlayer ()->SetDecmp (0.8 * 80);
                skill->SetPlus (3520 + _glyph_value_2);
                skill->SetRatio (1.0 + _glyph_value);
                skill->SetDamage (1.1 * skill->GetAttack ());
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
        Skill3966Stub ():SkillStub (3966)
        {
            cls                 = 8;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Á÷¹â½£Ã¢";
            nativename          = "Éñ¡¤Á÷¹â½£Ã¢";
            icon                = "Éñ¡¤Á÷¹â½£Ã¢ºì.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 15;
            attr                = 7;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1126;
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
            effect              = "½£Áé_Á÷¹â½£¾¢.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "Ö±½ÓÉËº¦Ôö¼Ó2.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3966Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (80);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 3000,3000,3000,3000,3000,3000,3000,3000,3000,3000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000 };
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
            return (float) (29);
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
            return 11000;
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
            return (float) (45);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 9;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (3.0);
        }
#endif
    };
}
#endif