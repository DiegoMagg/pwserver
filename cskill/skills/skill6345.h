//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
63450  "Î¨Shield of Imprecation"63451  "^ff5c00Î¨Shield of Imprecation

^ffcb4aManaã€€^96f5ff169.7^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff90ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffSword Shield, Unarmed
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Consumes your shield energy, increasing your damage by ^96f5ff35%%^ffffff.
Lasts ^96f5ff12 ^ffffffseconds.

^FFFF00Used when inflicted with control effects.
^a6caf0Requires ^ffffff100 ^a6caf0Shield Energy.

^00ffffEthereal Glyph Effect@1
^00ffffLv1-4: Cooldown is reduced by ^ffffff15.0^00ffff seconds.
^00ffffLv5-7: Cooldown is reduced by ^ffffff20.0^00ffff seconds.
^00ffffLv8-9: Cooldown is reduced by ^ffffff25.0^00ffff seconds.
^00ffffLv10: Cooldown is reduced by ^ffffff30.0^00ffff seconds.@1@2
Cooldown is reduced by ^ffffff%d.0^00ffff seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6345
#define __CPPGEN_GNET_SKILL6345
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6345:public Skill
    {
        public:
        enum
        { SKILL_ID = 6345 };
        Skill6345 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6345Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (169.7);
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
        Skill6345Stub ():SkillStub (6345)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤»ê¶Ü-Õ¶»ö";
            nativename          = "Éñ¡¤»ê¶Ü-Õ¶»ö";
            icon                = "Éñ¡¤»ê¶ÜÕ¶»öÀ¶.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 7;
            {
                restrict_weapons.push_back (59830);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5161, 1));
            pre_skills.push_back (std::pair < ID, int >(5162, 1));
            runes_attr          = 1;
            feature             = 1204;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill6345Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (169);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 800;
        }
        int GetCoolingtime (Skill * skill) const
        {
            int _glyph_value = get_glyph(skill->GetLevel (), 15000, 20000, 25000, 30000);
            return 80000 - _glyph_value;
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
            return (float) (0);
        }
        int GetCostShieldEnergy (Skill * skill) const
        {
            static int aarray[10] = { 100,100,100,100,100,100,100,100,100,100 };
            return aarray[skill->GetLevel () - 1];
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
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetValue (0.35);
            skill->GetVictim ()->SetskillplusPAL (1);
            
            /*// Define Icon / Gfx Buff
            skill->GetVictim ()->SetTime (11000); // Tempo
            skill->GetVictim ()->SetRatio (407); // Icon
            skill->GetVictim ()->SetAmount (181); // Buff
            skill->GetVictim ()->SetValue (2); // Definir
            skill->GetVictim ()->SetInsertvstate (1);*/
            
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
            return (float) (8);
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