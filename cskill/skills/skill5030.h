//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50300  "Î¨Neon Landing"50301  "^ff5c00Î¨Neon Landing

^ffcb4aRangeã€€^ffffffLong
^ffcb4aManaã€€^96f5ff227^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4asecond(s)
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond(s)
^ffcb4aCooldownã€€^ffffff60.0ã€€^ffcb4asecond(s)
^ffcb4aWeaponã€€^ffffffFirearm
^ffcb4aGlyph Bonus    ^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€ã€€^ffffffCelestial Saint
Leaps to the location of the target, attacking the target and all enemies within
^96f5ff%d^ffffff meter, dealing Physical damage equal to your base Physical Attack
plus ^96f5ff350%%^ffffff gear Attack and ^96f5ff8695^ffffff.
Also knocks down the targets.

^a6caf0Costs ^ffffff2^a6caf0 Sparks.

^00ff00Verdant Glyph Effect:@1
If a Î¨Burning Flutter is used before, you will gain a Life Straggler effect that
increases your Damage and Crit Damage.
^00ff00LV1-4: Increases damage by ^96f5ff76%%^00ff00 of your gear Attack.
^00ff00LV5-7: Increases damage by ^96f5ff114%%^00ff00 of your gear Attack.
^00ff00LV8-9: Increases damage by ^96f5ff152%%^00ff00 of your gear Attack.
^00ff00LV10: Increases damage by ^96f5ff190%%^00ff00 of your gear Attack.@1@2
May trigger a Life Straggler effect, which increases damage by ^96f5ff%d%%^00ff00 of your
gear Attack.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5030
#define __CPPGEN_GNET_SKILL5030
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5030:public Skill
    {
        public:
        enum
        { SKILL_ID = 5030 };
        Skill5030 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5030Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * (167));
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.76, 1.14, 1.52, 1.9);
                float _glyph_ratio_plus = skill->GetPlayer ()->CheckBuffState(429) ? _glyph_value : 0;
                
                skill->GetPlayer ()->SetDecmp (0.8 * (167));
                skill->SetPlus (8695);
                skill->SetRatio (3.5 + _glyph_ratio_plus);
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
        Skill5030Stub ():SkillStub (5030)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÂþÌìÄÞºç";
            nativename          = "Éñ¡¤ÂþÌìÄÞºç";
            icon                = "ÉñÂþÌìÄÞºçÂÌ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1310;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59831);
            }
#ifdef _SKILL_CLIENT
            effect              = "Éñ»ú_Ô­×Óµ¯_ÑÌ±¬01.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
            feature             = 1302;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ÕýÃæ×´Ì¬Ð§¹ûÔöÇ¿2.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill5030Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (227);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 968;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 99 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000 };
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
            return 10;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (2500);
            skill->GetVictim ()->SetValue (2);
            skill->GetVictim ()->SetPalsy (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
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
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
        }
#endif
    };
}
#endif