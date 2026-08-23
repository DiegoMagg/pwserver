//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
34940  "Î¨Quickshot"34941  "^ff5c00Î¨Quickshot

^ffcb4aRangeã€€^ffffffRanged Attack
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.5ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.6ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff1.0 ^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff15
^ffcb4aWeaponã€€^ffffffRanged Weapons
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Quickly fire off a powerful shot at the target, dealing
base physical damage plus ^96f5ff%d^ffffff. Energizes you for ^96f5ff10 ^ffffffseconds,
increasing your Crit Rate by ^96f5ff20%%^ffffff. Has a ^96f5ff50%%^ffffff chance to further
energize you for ^96f5ff6^ffffff seconds, increasing your Attack Rate by ^96f5ff30%%^ffffff.

^a6caf0Costs ^ffffff1^a6caf0 unit of ammo.

^00ff00Verdant Glyph Effect:@1
Increases damage the further you are from your target.
^00ff00Lv1-4: Increases damage by up to ^96f5ff70%% ^00ff00of weapon damage.
^00ff00Lv5-7: Increases damage by up to ^96f5ff105%% ^00ff00of weapon damage.
^00ff00Lv8-9: Increases damage by up to ^96f5ff140%% ^00ff00of weapon damage.
^00ff00Lv10: Increases damage by up to ^96f5ff175%% ^00ff00of weapon damage.@1@2
Increases damage the further you are
from your target by up to ^96f5ff%d%% ^00ff00of weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3494
#define __CPPGEN_GNET_SKILL3494
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3494:public Skill
    {
        public:
        enum
        { SKILL_ID = 3494 };
        Skill3494 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3494Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (27);
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
                return 600;
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
                float distance = skill->GetPlayer ()->GetRangetotarget ();
                float max_distance = skill->GetPlayer ()->GetRange ();
                float _glyph_value = get_glyph(skill->GetLevel (), 0.7, 1.05, 1.4, 1.75);
                skill->GetPlayer ()->SetDecmp (108);
                skill->SetPlus (7327);
                skill->SetRatio (( distance / max_distance ) * _glyph_value);
                skill->SetGolddamage (skill->GetAttack ());
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
        Skill3494Stub ():SkillStub (3494)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Á¬Éä";
            nativename          = "Éñ¡¤Á¬Éä";
            icon                = "Éñ¡¤Á¬ÉäÂÌ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 1;
            apgain              = 15;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1302;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (13);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÓðÃ¢_Éñ_Á¬Éä¼¼ÄÜ_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "Ê©·Å¾àÀëÔö¼Ó.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3494Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (135);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 600;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
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
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetValue (20);
            skill->GetVictim ()->SetIncsmite (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 50);
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetFastattack (1);
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
            return (float) (skill->GetPlayer ()->GetRange () + 15);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 21;
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