//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39610  "Î¨Gravel Blade"39611  "^ff5c00Î¨Gravel Blade

^ffcb4aRangeã€€^96f5ff28^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff75^ffffff
^ffcb4aChannelã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff3.0 ^ffcb4aseconds
^ffcb4aChi Gainedã€€^f96f5f30
^ffcb4aRequired Weapon:ã€€^ffffffSword
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Deliver a massive blow to your enemy, dealing ^96f5ff110%%^ffffff of
base physical damage plus ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff1650^ffffff Physical damage.

^ffeaabDoes not apply Spirit Bore or Bloodletting. Never misses.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: Deals an additional ^96f5ff30%% ^ffeaabof weapon damage plus ^96f5ff3780^ffeaab.
^ffeaabLv5-7: Deals an additional ^96f5ff45%% ^ffeaabof weapon damage plus ^96f5ff4670^ffeaab.
^ffeaabLv8-9: Deals an additional ^96f5ff60%% ^ffeaabof weapon damage plus ^96f5ff5560^ffeaab.
^ffeaabLv10: Deals an additional ^96f5ff75%% ^ffeaabof weapon damage plus ^96f5ff6450^ffeaab.@1@2
^ffeaabDeals an additional ^96f5ff%d%% ^ffeaabof weapon damage plus ^96f5ff%d^ffeaab.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3961
#define __CPPGEN_GNET_SKILL3961
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3961:public Skill
    {
        public:
        enum
        { SKILL_ID = 3961 };
        Skill3961 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3961Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 267;
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
                skill->GetPlayer ()->SetDecmp (0.2 * 75);
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
                return 733;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.3, 0.45, 0.6, 0.75);
                int _glyph_value_2 = get_glyph(skill->GetLevel (), 3780, 4670, 5560, 6450);
                skill->GetPlayer ()->SetDecmp (0.8 * 75);
                skill->SetPlus (1650 + _glyph_value_2);
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
        Skill3961Stub ():SkillStub (3961)
        {
            cls                 = 8;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ËéÊ¯½£Ã¢";
            nativename          = "Éñ¡¤ËéÊ¯½£Ã¢";
            icon                = "Éñ¡¤ËéÊ¯½£Ã¢°×.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 30;
            attr                = 7;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1124;
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
            effect              = "Éñ_ËéÊ¯½£Ã¢_·ÉÐÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "»ñµÃÔªÆøÔö¼Ó.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3961Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (75);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 733;
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
            return 0;
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
            return 5;
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