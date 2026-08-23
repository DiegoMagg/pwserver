//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38810  "Î¨Raging Slap"38811  "^ff5c00Î¨Raging Slapã€€ã€€ã€€ã€€

^ffcb4aRequires Tiger Weapon
^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff202^ffffff
^ffcb4aChannelã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff20.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffA/H, Unarmed
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Taunt the target with a furious slap of your paw,
forcing them to
target you for the next ^96f5ff8^ffffff seconds.
Grants a shield that absorbs damage equal to ^96f5ff10%%^ffffff of your maximum Health for ^96f5ff5^ffffff seconds.
Guaranteed to remove ^96f5ff1^ffffff positive status effect.

^a6caf0Has no effect on non-player.
^a6caf0Costs ^ffffff35^a6caf0 Chi

^ff0000Sanguine Glyph Effect@1
^ff0000Lv1-4:Channeling time reduced to^96f5ff0.3^ff0000 seconds
^ff0000Lv5-7:Channeling time reduced to^96f5ff0.2^ff0000 seconds
^ff0000Lv8-9:Channeling time reduced to^96f5ff0.1^ff0000 seconds
^ff0000 Lv10 :Channeling time reduced to^96f5ff0^ff0000 seconds@1@2
^ff0000Channeling time reduced to^96f5ff%.1f^ff0000 second@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3881
#define __CPPGEN_GNET_SKILL3881
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3881:public Skill
    {
        public:
        enum
        { SKILL_ID = 3881 };
        Skill3881 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3881Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                int _glyph_value = get_glyph(skill->GetLevel (), 300, 200, 100, 0);
                return _glyph_value;
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
                skill->GetPlayer ()->SetDecmp (40);
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
                return 700;
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
                skill->GetPlayer ()->SetDecmp (162);
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
        Skill3881Stub ():SkillStub (3881)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤·ÜÕ½É¨»÷";
            nativename          = "Éñ¡¤·ÜÕ½É¨»÷";
            icon                = "Éñ¡¤·ÜÕ½É¨»÷ºì.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 35;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2901;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÐÜÃ¨_Éñ_·ÜÕ½É¨»÷_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3881Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (202);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 700;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 20000,20000,20000,20000,20000,20000,20000,20000,20000,20000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 3000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 3000000,3000000,3000000,3000000,3000000,3000000,3000000,3000000,3000000,3000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 11208,11208,11208,11208,11208,11208,11208,11208,11208,11208 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (12);
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
            return 100000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetForceselecttarget (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetClearOnebuffRandom (1);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetValue (skill->GetPlayer ()->GetMaxhp () * 0.1);
            skill->GetVictim ()->SetShieldDamageReduceBarbian (1);
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
            return (float) (25);
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
            return (float) (3);
        }
#endif
    };
}
#endif