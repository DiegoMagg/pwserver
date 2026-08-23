//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50530  "Î¨Gilded Blaze"50531  "^ff5c00Î¨Gilded Blaze
ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€
^ffcb4aManaã€€^96f5ff209^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff20.0ã€€^ffcb4asecond(s)
^ffcb4aWeaponã€€^ffffffFirearm, Unarmed
^ffcb4aGlyph Bonus    ^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€ã€€^ffffffChaotic Soul
Awakens your body and immediately removes negative states like
Paralyzed, Disarmed, Silenced, Frozen, Stunned, and Sleep.
Becomes immune to all negative effects within the next ^96f5ff2.0^ffffff
second.

^a6caf0Used when inflicted with control effects.

^00ff00Verdant Glyph Effect:@1
^00ff00LV1-4: Cooldown is reduced to ^96f5ff16^00ff00 seconds.
^00ff00LV5-7: Cooldown is reduced to ^96f5ff14^00ff00 seconds.
^00ff00LV8-9: Cooldown is reduced to ^96f5ff12^00ff00 seconds.
^00ff00LV10: Cooldown is reduced to ^96f5ff10^00ff00 seconds. @1@2
Cooldown is reduced to ^96f5ff%d^00ff00 seconds. @2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5053
#define __CPPGEN_GNET_SKILL5053
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5053:public Skill
    {
        public:
        enum
        { SKILL_ID = 5053 };
        Skill5053 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5053Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (209);
                skill->GetPlayer ()->SetPerform (1);
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
        Skill5053Stub ():SkillStub (5053)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÁðÁ§³ãÊ¢";
            nativename          = "Éñ¡¤ÁðÁ§³ãÊ¢";
            icon                = "ÉñÁðÁ§³ãÊ¢ÂÌ.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 1423;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 5;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (59831);
            }
#ifdef _SKILL_CLIENT
            effect              = "Éñ»ú_½â³ý¿ØÖÆ_¹â01.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
            feature             = 1304;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ÕýÃæ×´Ì¬Ð§¹ûÔöÇ¿2.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5053Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (210);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            int _glyph_value = get_glyph(skill->GetLevel (), 16000, 14000, 12000, 10000);
            return _glyph_value;
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
            return (float) (0);
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
            skill->GetVictim ()->SetTime (2500);
            skill->GetVictim ()->SetImmuneall2 (1);
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
            return (float) (0);
        }
#endif
    };
}
#endif