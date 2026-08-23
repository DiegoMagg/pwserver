//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
44890  "Î¨Bramble Tornado"44891  "^ff5c00Î¨Bramble Tornado

^ffcb4aRangeã€€^96f5ff27^ffffffã€€^ffcb4aMeters
^ffcb4aManaã€€^96f5ff310^ffffff
^ffcb4aChannelã€€^ffffff1.5ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.5ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff12.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instrument

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Summon a powerful vortex of wind to batter
your enemy, dealing base magic damage plus
^96f5ff100%%^ffffff of weapon damage plus ^96f5ff3750^ffffff as Wood damage.

^a6caf0Costs ^ffffff25^a6caf0 Chi.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Deals an additional ^96f5ff80%%^00ff00 of weapon damage plus ^96f5ff1500^00ff00.
^00ff00Lv5-7: Deals an additional ^96f5ff120%%^00ff00 of weapon damage plus ^96f5ff2250^00ff00.
^00ff00Lv8-9: Deals an additional ^96f5ff160%%^00ff00 of weapon damage plus ^96f5ff3000^00ff00.
^00ff00Lv10: Deals an additional ^96f5ff200%%^00ff00 of weapon damage plus ^96f5ff3750^00ff00.@1@2
Deals an additional ^96f5ff%d%%^00ff00 of weapon damage plus ^96f5ff%d^00ff00.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4489
#define __CPPGEN_GNET_SKILL4489
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4489:public Skill
    {
        public:
        enum
        { SKILL_ID = 4489 };
        Skill4489 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4489Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1500;
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
                skill->GetPlayer ()->SetDecmp (0.2 * 310);
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.8, 1.2, 1.6, 2);
                int _glyph_value_2 = get_glyph(skill->GetLevel (), 1500, 2250, 3000, 3750);
                
                skill->GetPlayer ()->SetDecmp (0.8 * 310);
                skill->SetPlus (3750 + _glyph_value_2);
                skill->SetRatio (1 + _glyph_value);
                skill->SetWooddamage (skill->GetMagicattack ());
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
        Skill4489Stub ():SkillStub (4489)
        {
            cls                 = 9;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤»¨½¦Óê";
            nativename          = "Éñ¡¤»¨½¦Óê";
            icon                = "Éñ»¨½¦ÓêÂÌ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 25;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 3;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1303;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (292);
            }
#ifdef _SKILL_CLIENT
            effect              = "÷ÈÁé_³¤·çÆÆ.sgc";
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
        virtual ~ Skill4489Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (310);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 500;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 12000,12000,12000,12000,12000,12000,12000,12000,12000,12000 };
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
            return (float) (27);
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
            return (float) (36);
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