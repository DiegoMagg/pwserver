//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37820  "ΨElimination"37821  "^ff5c00ΨElimination

^ffcb4aRange　^ffffff4.5^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff130^ffffff
^ffcb4aChannel　^ffffff0.1　^ffcb4aseconds
^ffcb4aCast　^ffffff2.5　^ffcb4aseconds
^ffcb4aCooldown　^ffffff15.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff30
^ffcb4aWeapon　^ffffffDagger
^ffcb4aGlyph Bonus　^ff5c00Martial Prowess

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Go in for a killing strike, immobilizing the target
for ^96f5ff3^ffffff seconds and dealing ^96f5ff320%%^ffffff of base physical damage.

^a6caf0Generates ^ffffff2 ^a6caf0Hit Charges.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff120%%^ffcb4a of base physical damage.
^ffcb4aLv5-7: Deals an additional ^96f5ff140%%^ffcb4a of base physical damage.
^ffcb4aLv8-9: Deals an additional ^96f5ff160%%^ffcb4a of base physical damage.
^ffcb4aLv10: Deals an additional ^96f5ff180%%^ffcb4a of base physical damage.@1@2
Deals an additional ^96f5ff%d%%^ffcb4a of base physical damage.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3782
#define __CPPGEN_GNET_SKILL3782
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3782:public Skill
    {
        public:
        enum
        { SKILL_ID = 3782 };
        Skill3782 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3782Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (26);
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
                skill->GetPlayer ()->SetDecmp (104);
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.3, 0.35, 0.40, 0.45);
                
                skill->SetSection (1);
                //skill->SetPlus (0);
                //skill->SetRatio (0);
                //skill->SetDamage ((0.6 + (_glyph_value * 0.2)) * skill->GetAttack ());
                skill->SetDamage (0.6 * skill->GetAttack () + (_glyph_value * skill->GetAttack ()));
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
#ifdef _SKILL_SERVER
        class State4:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 350;
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
                // float _glyph_value = get_glyph(skill->GetLevel (), 1.2, 1.4, 1.6, 1.8);
                float _glyph_value = get_glyph(skill->GetLevel (), 0.3, 0.35, 0.40, 0.45);
                
                skill->SetSection (2);
                //skill->SetPlus (0);
                //skill->SetRatio (0);
                //skill->SetDamage ((0.4 + (_glyph_value * 0.2)) * skill->GetAttack ());
                skill->SetDamage (0.4 * skill->GetAttack () + (_glyph_value * skill->GetAttack ()));
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
#ifdef _SKILL_SERVER
        class State5:public SkillStub::State
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.3, 0.35, 0.40, 0.45);
                
                skill->SetSection (3);
                //skill->SetPlus (0);
                //skill->SetRatio (0);
                //skill->SetDamage ((0.4 + (_glyph_value * 0.2)) * skill->GetAttack ());
                skill->SetDamage (0.4 * skill->GetAttack () + (_glyph_value * skill->GetAttack ()));
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
#ifdef _SKILL_SERVER
        class State6:public SkillStub::State
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.3, 0.35, 0.40, 0.45);
                
                skill->SetSection (4);
                //skill->SetPlus (0);
                //skill->SetRatio (0);
                //skill->SetDamage ((0.6 + (_glyph_value * 0.2)) * skill->GetAttack ());
                skill->SetDamage (0.6 * skill->GetAttack () + (_glyph_value * skill->GetAttack ()));
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
#ifdef _SKILL_SERVER
        class State7:public SkillStub::State
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.3, 0.35, 0.40, 0.45);
                
                skill->SetSection (5);
                //skill->SetPlus (0);
                //skill->SetRatio (0);
                //skill->SetDamage ((1.2 + (_glyph_value * 0.2)) * skill->GetAttack ());
                skill->SetDamage (1.2 * skill->GetAttack () + (_glyph_value * skill->GetAttack ()));
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
#endif
#ifdef _SKILL_SERVER
        class State8:public SkillStub::State
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
        Skill3782Stub ():SkillStub (3782)
        {
            cls                 = 5;
#ifdef _SKILL_CLIENT
            name                = L"����ɱ";
            nativename          = "����ɱ";
            icon                = "����ɱ��.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 30;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1602;
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
            effect              = "�̿�_նɱ��_����.sgc";
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
            statestub.push_back (new State4 ());
            statestub.push_back (new State5 ());
            statestub.push_back (new State6 ());
            statestub.push_back (new State7 ());
            statestub.push_back (new State8 ());
#endif
        }
        virtual ~ Skill3782Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (130);
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
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
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetSection () == 1 ? 100 : 0));
            skill->GetVictim ()->SetTime (4000);
            skill->GetVictim ()->SetFix (1);
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetSection () == 1 ? 100 : 0));
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetAmount (skill->GetT0 ());
            skill->GetVictim ()->SetBleeding (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (7.5 * player->GetEquipattack ());
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
            return 2;
        }
#endif
    };
}
#endif