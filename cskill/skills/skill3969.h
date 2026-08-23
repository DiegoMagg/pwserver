//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39690  "ΨWind Blade"39691  "^ff5c00ΨWind Blade

^ffcb4aRange　^96f5ff28^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff70^ffffff
^ffcb4aChannel　^ffffff0.2　^ffcb4aseconds
^ffcb4aCast　^ffffff0.8　^ffcb4aseconds
^ffcb4aCooldown　^ffffff2.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff10
^ffcb4aRequired Weapon:　^ffffffSword
^ffcb4aGlyph Bonus　^ff5c00Martial Prowess

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Slash through your enemy with a swift, powerful attack,
dealing ^96f5ff110%% ^ffffffof base physical damage plus ^96f5ff100%% ^ffffffof weapon
damage plus ^96f5ff1815^ffffff. Has a ^96f5ff40%% ^ffffffchance to deal an additional
^96f5ff2060 ^ffffffdamage, immobilize the target for ^96f5ff4 ^ffffffseconds, and
reduces the target's Defense Level by ^96f5ff20 ^fffffffor ^96f5ff8 ^ffffffseconds.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff20%% ^ffcb4aof weapon damage plus ^96f5ff1720^ffcb4a.
^ffcb4aLv5-7: Deals an additional ^96f5ff30%% ^ffcb4aof weapon damage plus ^96f5ff2580^ffcb4a.
^ffcb4aLv8-9: Deals an additional ^96f5ff40%% ^ffcb4aof weapon damage plus ^96f5ff3440^ffcb4a.
^ffcb4aLv10: Deals an additional ^96f5ff50%% ^ffcb4aof weapon damage plus ^96f5ff4300^ffcb4a.@1@2
^ffcb4aDeals an additional ^96f5ff%d%% ^ffcb4aof weapon damage plus ^96f5ff%d^ffcb4a.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3969
#define __CPPGEN_GNET_SKILL3969
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3969:public Skill
    {
        public:
        enum
        { SKILL_ID = 3969 };
        Skill3969 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3969Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * 70);
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return 0;
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
                return 800;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.2, 0.3, 0.4, 0.5);
                int _glyph_value_2 = get_glyph(skill->GetLevel (), 1720, 2580, 3440, 4300);
                
                skill->GetPlayer ()->SetDecmp (0.8 * 70);
                skill->SetPlus (1815 + _glyph_value_2);
                skill->SetRatio (1.0 + _glyph_value);
                skill->SetDamage (1.1 * skill->GetAttack ());
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
        Skill3969Stub ():SkillStub (3969)
        {
            cls                 = 8;
#ifdef _SKILL_CLIENT
            name                = L"���Ʒ罣â";
            nativename          = "���Ʒ罣â";
            icon                = "���Ʒ罣â��.dds";
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
            showorder           = 1125;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (1);
            }
#ifdef _SKILL_CLIENT
            effect              = "����_�Ʒ罣��.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ֱ���˺�����1.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3969Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (70);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 600;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 2000;
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
            return (float) (29);
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
            skill->GetVictim ()->SetProbability (1.0 * 40);
            skill->GetVictim ()->SetTime (5000);
            skill->GetVictim ()->SetFix (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 40);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetValue (20);
            skill->GetVictim ()->SetSubdefencedegree (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 40);
            skill->GetVictim ()->SetTime (3000);
            skill->GetVictim ()->SetAmount (2060);
            skill->GetVictim ()->SetBleeding (1);
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
            return (float) (45);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 5;
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