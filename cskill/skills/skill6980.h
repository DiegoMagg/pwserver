//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69800  "Î¨Frost Splash"69801  "^ff5c00Î¨Frost Splash

^ffcb4aRangeã€€^ffffffRanged
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff3ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffRanged Weapons
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffMaster of Harmony
Fire ^96f5ff5^ffffff volleys at all enemies in front of you,
dealing a total of base physical damage plus ^96f5ff850%%^ffffff
of weapon damage. Each hit reduces the target's
speed by ^96f5ff80%%^ffffff and has a ^96f5ff25%%^ffffff chance to freeze the
targets for ^96f5ff1.5^ffffff seconds. Frozen enemies are
vulnerable, increasing incoming damage by ^96f5ff130%%^ffffff.

^a6caf0Costs ^ffffff1^a6caf0 unit of ammo.
^a6caf0Each hit has a chance to trigger special weapon effects.
^a6caf0Costs ^ffffff2^a6caf0 Sparks.
^a6caf0Deals full damage regardless of range."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6980
#define __CPPGEN_GNET_SKILL6980
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6980:public Skill
    {
        public:
        enum
        { SKILL_ID = 6980 };
        Skill6980 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6980Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 100;
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
                return 50;
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
                skill->GetPlayer ()->SetPerform (2);
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
                return 200;
            }
            bool Quit (Skill * skill) const
            {
                return false;
            }
            bool Loop (Skill * skill) const
            {
                return skill->GetPlayer ()->GetMp () > 135 && skill->GetSection () < 5;
            }
            bool Bypass (Skill * skill) const
            {
                return false;
            }
            void Calculate (Skill * skill) const
            {
                skill->SetSection (skill->GetSection () + 1);
                skill->GetPlayer ()->SetDecmp (135);
                skill->SetPlus (0);
                skill->SetRatio (8.5);
                skill->SetDamage (0.2 * skill->GetAttack ());
                skill->GetPlayer ()->SetCombat (1);
                skill->GetPlayer ()->SetPerform (0);
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
        Skill6980Stub ():SkillStub (6980)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤±ùËªÉ¢Éä";
            nativename          = "Éñ¡¤±ùËªÉ¢Éä";
            icon                = "Éñ±ùËªÉ¢Éä.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 200;
            arrowcost           = 1;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 2;
            showorder           = 1313;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (13);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÓðÃ¢_±ùËªÉ¢Éä_»÷ÖÐ.sgc";
#endif
            range.type          = 4;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2216, 1));
            pre_skills.push_back (std::pair < ID, int >(2217, 1));
            runes_attr          = 2;
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
        virtual ~ Skill6980Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (135);
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 180000,180000,180000,180000,180000,180000,180000,180000,180000,180000 };
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
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 72330,72330,72330,72330,72330,72330,72330,72330,72330,72330 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange () + 5);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (45));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 135);
            
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
            skill->GetVictim ()->SetTime (2000);
            skill->GetVictim ()->SetRatio (0.8);
            skill->GetVictim ()->SetSlow (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 25);
            skill->GetVictim ()->SetTime (2500);
            skill->GetVictim ()->SetRatio (1.3);
            skill->GetVictim ()->SetDizzyinchurt (1);
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
            return (float) (skill->GetPlayer ()->GetRange () + 5);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.5);
        }
#endif
    };
}
#endif