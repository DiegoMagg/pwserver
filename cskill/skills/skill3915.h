//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39150  "Î¨Drake's Ray"39151  "^ff5c00Î¨Drake's Ray

^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4aMeters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.5ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff5.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffMelee weapons
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Create a swift psionic blade to attack an enemy
from afar, dealing base physical damage plus ^96f5ff6747^ffffff.
Has a ^96f5ff66%%^ffffff chance to freeze the target for ^96f5ff3^ffffff seconds.
Range is increased by ^96f5fftwice^ffffff the weapon's range.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Multiplies the current weapon range of your next ^96f5ffÎ¨Ferocious Leap^00ff00 or ^96f5ffÎ¨Ocean's Edge^00ff00 within 5 seconds by ^96f5ff2^00ff00.
^00ff00Lv5-7: Multiplies the current weapon range of your next ^96f5ffÎ¨Ferocious Leap^00ff00 or ^96f5ffÎ¨Ocean's Edge^00ff00 within 5 seconds by ^96f5ff3^00ff00.
^00ff00Lv8-9: Multiplies the current weapon range of your next ^96f5ffÎ¨Ferocious Leap^00ff00 or ^96f5ffÎ¨Ocean's Edge^00ff00 within 5 seconds by ^96f5ff4^00ff00.
^00ff00Lv10: Multiplies the current weapon range of your next ^96f5ffÎ¨Ferocious Leap^00ff00 or ^96f5ffÎ¨Ocean's Edge^00ff00 within 5 seconds by ^96f5ff5^00ff00.@1@2
^00ff00Multiplies the current weapon range of your next ^96f5ffÎ¨Ferocious Leap^00ff00 or ^96f5ffÎ¨Ocean's Edge^00ff00 within 5 seconds by ^96f5ff%d^00ff00.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3915
#define __CPPGEN_GNET_SKILL3915
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3915:public Skill
    {
        public:
        enum
        { SKILL_ID = 3915 };
        Skill3915 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3915Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (30);
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
                skill->GetPlayer ()->SetDecmp (120);
                skill->SetPlus (6747);
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
        Skill3915Stub ():SkillStub (3915)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÁúÏÖ";
            nativename          = "Éñ¡¤ÁúÏÖ";
            icon                = "Éñ¡¤ÁúÏÖÂÌ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1105;
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
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (9);
            }
#ifdef _SKILL_CLIENT
            effect              = "1ÁúÏÖ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ÕýÃæ×´Ì¬Ð§¹ûÔöÇ¿1.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3915Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (150);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 500;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 5000;
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
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 11208,11208,11208,11208,11208,11208,11208,11208,11208,11208 };
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
            return (float) (12 + (skill->GetPlayer ()->GetCurweaponRange () * 2));
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 10, 150, 2211);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 2000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 66);
            skill->GetVictim ()->SetTime (3000);
            skill->GetVictim ()->SetFix (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            float _glyph_value = get_glyph(skill->GetLevel (), 2, 3, 4, 5);
            
            skill->GetPlayer ()->SetProbability (1.0 * 100);
            skill->GetPlayer ()->SetTime (6000);
            skill->GetPlayer ()->SetAmount (3895); // Salto Feroz
            skill->GetPlayer ()->SetValue (3901); // Cindir da Montanha
            skill->GetPlayer ()->SetRatio (_glyph_value);
            skill->GetPlayer ()->SetNewValue (1); // Feature
            skill->GetVictim ()->SetGlyphRange (1);
            
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
            return (float) (19 + (skill->GetPlayer ()->GetCurweaponRange () * 2));
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 12;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (2);
        }
#endif
    };
}
#endif