//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38550  "Î¨Berserker's Wrath"38551  "^ff5c00Î¨Berserker's Wrath

^ffcb4aRangeã€€^96f5ff35^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff303^ffffff
^ffcb4aChannelã€€^ffffff0.6ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.5ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff60.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffAxe, Poleaxe, Hammer or Polehammer
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Unleash a furious assault of blows upon all enemies
within ^96f5ff20^ffffff meters of the target. Deals ^96f5ff120%%^ffffff of base
physical damage. Has a ^96f5ff100%%^ffffff chance to knock flying
enemies to the ground and prevent them from flying
for ^96f5ff30^ffffff seconds. Deals ^96f5fftriple^ffffff damage to flying targets.
Cannot use while flying. Never misses.

^a6caf0This skill can't be cast in the air.
^a6caf0Costs ^ffffff2 ^a6caf0Sparks.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Prevent targets from flying for ^96f5ff36^00ff00 seconds.
^00ff00Lv5-7: Prevent targets from flying for ^96f5ff39^00ff00 seconds.
^00ff00Lv8-9: Prevent targets from flying for ^96f5ff42^00ff00 seconds.
^00ff00Lv10: Prevent targets from flying for ^96f5ff45^00ff00 seconds.@1@2
^00ff00Prevent targets from flying for ^96f5ff%d^00ff00 seconds.@2



"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3855
#define __CPPGEN_GNET_SKILL3855
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3855:public Skill
    {
        public:
        enum
        { SKILL_ID = 3855 };
        Skill3855 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3855Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 650;
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
                skill->GetPlayer ()->SetDecmp (61);
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
                return 1450;
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
                skill->GetPlayer ()->SetDecmp (242);
                skill->SetDamage (1.2 * skill->GetAttack ());
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
        Skill3855Stub ():SkillStub (3855)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Áú·É¾ø";
            nativename          = "Éñ¡¤Áú·É¾ø";
            icon                = "Éñ¡¤Áú·É¾øÂÌ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 2;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2905;
            allow_land          = 1;
            allow_air           = 0;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (9);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÑýÊÞ_ÊÞÁéÖ®Á¦.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "¸ºÃæ×´Ì¬Ð§¹ûÔöÇ¿1.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3855Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (240);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1450;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 11208,11208,11208,11208,11208,11208,11208,11208,11208,11208 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (20);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (180));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (35);
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
            return 100;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            int _glyph_value = get_glyph(skill->GetLevel (), 36000, 39000, 42000, 45000);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (_glyph_value);
            skill->GetVictim ()->SetNofly (1);
            
            skill->GetVictim ()->SetValue (skill->GetPlayer ()->GetAiring () ? (3 * skill->GetAttack ()) : 1);
            skill->GetVictim ()->SetPhysichurt (1);
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
            return (float) (50);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 33;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (4);
        }
#endif
    };
}
#endif