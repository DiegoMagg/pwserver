//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37770  "ΨLife Hunter"37771  "^ff5c00ΨLife Hunter

^ffcb4aRange　^ffffff4.5^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff90^ffffff
^ffcb4aCast　^ffffff0.7　^ffcb4asecond
^ffcb4aCooldown　^ffffff0.7　^ffcb4asecond
^ffcb4aChi Gained　^ffffff10
^ffcb4aWeapon　^ffffffDagger
^ffcb4aGlyph Bonus　^ff5c00Martial Prowess

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Imbue your daggers with dark magic and thrust them
twice into your enemy, dealing ^96f5ff80%% ^ffffffof base physical damage,
reducing target's physical defense by ^96f5ff60%% ^fffffffor ^96f5ff10 ^ffffffseconds.
The effect will not take effect on
monsters with greater physical defense reduction effect.

^a6caf0Generates ^ff5c001^a6caf0 Hit Charge.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Deals ^96f5ff85%% ^00ff00of base physical damage.
^00ff00Lv5-7: Deals ^96f5ff90%% ^00ff00of base physical damage.
^00ff00Lv8-9: Deals ^96f5ff95%% ^00ff00of base physical damage.
^00ff00Lv10: Deals ^96f5ff100%% ^00ff00of base physical damage.@1@2
Deals ^96f5ff%d%% ^00ff00of base physical damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3777
#define __CPPGEN_GNET_SKILL3777
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3777:public Skill
    {
        public:
        enum
        { SKILL_ID = 3777 };
        Skill3777 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3777Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (10);
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
                return 450;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.85, 0.9, 0.95, 1);
                
                skill->SetSection (1);
                skill->GetPlayer ()->SetDecmp (40);
                //skill->SetPlus (11755);
                //skill->SetRatio (2);
                skill->SetDamage (_glyph_value * skill->GetAttack ());
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
        /*#ifdef _SKILL_SERVER
        class State4:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 250;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.85, 0.9, 0.95, 1);
                
                skill->SetSection (2);
                skill->GetPlayer ()->SetDecmp (40);
                skill->SetPlus (11755);
                skill->SetRatio (2);
                skill->SetDamage (_glyph_value * skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (0);
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
#endif */
#ifdef _SKILL_SERVER
        class State4:public SkillStub::State
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
        Skill3777Stub ():SkillStub (3777)
        {
            cls                 = 5;
#ifdef _SKILL_CLIENT
            name                = L"��׷��";
            nativename          = "��׷��";
            icon                = "��׷����.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1600;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (23749);
            }
#ifdef _SKILL_CLIENT
            effect              = "�̿�_������_����.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "�������������.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
            statestub.push_back (new State4 ());
            //statestub.push_back (new State5 ());
#endif
        }
        virtual ~ Skill3777Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (90);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 600;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 700,700,700,700,700,700,700,700,700,700 };
            return aarray[skill->GetLevel () - 1];
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
            return (float) (4.5);
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
            return 1000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetSection () == 1 ? 100 : 0));
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetDecdefence (1);
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
            return (float) (12);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (2);
        }
#endif
#ifdef _SKILL_SERVER
        int GetChargeMerc  (Skill * skill) const
        {
            return 1;
        }
#endif
    };
}
#endif