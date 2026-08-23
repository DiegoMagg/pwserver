//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
64060  "Œ®Reaper Form"64061  "^ff5c00Œ®Reaper Form

^ffcb4aMana„ÄÄ^96f5ff303^ffffff
^ffcb4aCast„ÄÄ^ffffffInstant
^ffcb4aCooldown„ÄÄ^ffffff85.0„ÄÄ^ffcb4aseconds
^ffcb4aWeapon„ÄÄ^ffffffUnarmed, Scythe
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Dragon's Might

^ffcb4aRequired Cultivation„ÄÄ^ffffffCelestial Saint
Invoke your inner darkness, transforming into a shadowy
Reaper. Lasts for ^96f5ff32^ffffff seconds. Increases your movement speed by ^96f5ff20%%^ffffff
and physical defense by ^96f5ff300%%^ffffff. Also enhances the effect of skills that can be cast while moving.

^a6caf0Used when inflicted with control effects.

^a6caf0Costs ^ffffff30 ^a6caf0Chi.

^ffcb4aGolden Glyph Effect@1
^ffcb4aLv1-4: Increases your damage by ^96f5ff5%%^ffcb4a.
^ffcb4aLv5-7: Increases your damage by ^96f5ff10%%^ffcb4a.
^ffcb4aLv8-9: Increases your damage by ^96f5ff15%%^ffcb4a.
^ffcb4aLv10: Increases your damage by ^96f5ff20%%^ffcb4a.@1@2
Increases your damage by ^96f5ff%d%%^ffcb4a.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6406
#define __CPPGEN_GNET_SKILL6406
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6406:public Skill
    {
        public:
        enum
        { SKILL_ID = 6406 };
        Skill6406 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6406Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (303);
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
        Skill6406Stub ():SkillStub (6406)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"…Ò°§Î ";
            nativename          = "…Ò°§Î ";
            icon                = "…Ò°§Î “π”∞ª∆.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 30;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 1001;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (44879);
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
            pre_skills.push_back (std::pair < ID, int >(2617, 1));
            pre_skills.push_back (std::pair < ID, int >(2618, 1));
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill6406Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (303);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 85000,85000,85000,85000,85000,85000,85000,85000,85000,85000 };
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
            return (float) (10);
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
            float _glyph_value = get_glyph(skill->GetLevel (), 0.05, 0.1, 0.15, 0.2);
            
            /* skill->GetVictim ()->SetTime (33000);
            skill->GetVictim ()->SetRatio (0.2);
            skill->GetVictim ()->SetValue (3);
            skill->GetVictim ()->SetNewValue (_glyph_value);
            skill->GetVictim ()->SetFairyformDamage (1);*/
            skill->GetVictim ()->SetTime (33000);
            skill->GetVictim ()->SetRatio (0.2);
            skill->GetVictim ()->SetValue (3);
            skill->GetVictim ()->SetFairyform (1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (33000);
            skill->GetVictim ()->SetRatio (_glyph_value);
            skill->GetVictim ()->SetAmount (25);
            skill->GetVictim ()->SetValue (2);
            skill->GetVictim ()->SetInchurt6 (1);*/
            skill->GetVictim()->SetProbability(1.0 * 100);
            skill->GetVictim ()->SetTime (33000);
            skill->GetVictim ()->SetRatio (_glyph_value);
            skill->GetVictim ()->SetInchurtTM (1);
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
            return (float) (35);
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