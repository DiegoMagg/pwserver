//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38080  "ΨCursed Jail"38081  "^ff5c00ΨCursed Jail

^ffcb4aRange　^ffffff4.5 meters
^ffcb4aMana　^96f5ff290^ffffff
^ffcb4aChannel　^ffffff0.4　^ffcb4aseconds
^ffcb4aCast　^ffffff2.5　^ffcb4aseconds
^ffcb4aCooldown　^ffffff30.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffDagger
^ffcb4aGlyph Bonus　^ff5c00Dragon's Might

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Attack the enemy's pressure points with a flurry of
precision attacks, stunning the target for ^96f5ff6^ffffff seconds
and dealing ^96f5ff200%%^ffffff of base physical damage. Slows the target
for ^96f5ff10^ffffff seconds, reducing speed by ^96f5ff60%%^ffffff. Base skill
damage is equal to ^96f5ff375%%^ffffff of weapon damage plus ^96f5ff7497^ffffff.

^a6caf0Costs ^ffffff1 ^a6caf0Spark^a6caf0 and ^ffffff50 ^a6caf0Chi.

^d618e7Consumes all Hit Charges to increase effectiveness.

^00ffffEthereal Glyph Effect:@1
Makes you invincible for ^ffffff0.5^00ffff seconds per Hit Charge.
^00ffffLv1-4: Deals ^ffffff240%%^00ffff of base skill damage.
^00ffffLv5-7: Deals ^ffffff260%%^00ffff of base skill damage.
^00ffffLv8-9: Deals ^ffffff280%%^00ffff of base skill damage.
^00ffffLv10: Deals ^ffffff300%%^00ffff of base skill damage.@1@2
Makes you invincible for ^ffffff0.5^00ffff seconds per Hit Charge.
Deals ^ffffff%d%%^00ffff of base skill damage.@2

"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3808
#define __CPPGEN_GNET_SKILL3808
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3808:public Skill
    {
        public:
        enum
        { SKILL_ID = 3808 };
        Skill3808 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3808Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 400;
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
                skill->GetPlayer ()->SetDecmp (90);
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
                skill->GetPlayer ()->SetDecmp (200);
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
                //float _glyph_value = get_glyph(skill->GetLevel (), 2.4, 2.6, 2.8, 3.0);
                float _glyph_value = get_glyph(skill->GetLevel (), 0.6, 0.65, 0.7, 0.75);
                
                skill->SetSection (1);
                skill->SetPlus (7497);
                skill->SetRatio (3.75);
                //skill->SetDamage (0.5 * skill->GetAttack ());
                skill->SetDamage ((0.5 + _glyph_value) * skill->GetAttack ());
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
                return 300;
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
                //float _glyph_value = get_glyph(skill->GetLevel (), 2.4, 2.6, 2.8, 3.0);
                
                //float _glyph_value = get_glyph(skill->GetLevel (), 0.3, 0.35, 0.4, 0.5);
                
                float _glyph_value = get_glyph(skill->GetLevel (), 0.6, 0.65, 0.7, 0.75);
                
                skill->SetSection (2);
                skill->SetPlus (7497);
                skill->SetRatio (3.75);
                //skill->SetDamage (0.2 * skill->GetAttack ());
                skill->SetDamage ((0.2 + _glyph_value) * skill->GetAttack ());
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
                //float _glyph_value = get_glyph(skill->GetLevel (), 0.4, 0.45, 0.5, 0.55);
                
                float _glyph_value = get_glyph(skill->GetLevel (), 0.6, 0.65, 0.7, 0.75);
                
                skill->SetSection (3);
                skill->SetPlus (7497);
                skill->SetRatio (3.75);
                //skill->SetDamage (0.3 * skill->GetAttack ());
                skill->SetDamage ((0.3 + _glyph_value) * skill->GetAttack ());
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
                return 1250;
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
                //float _glyph_value = get_glyph(skill->GetLevel (), 1.1, 1.15, 1.2, 1.3);
                float _glyph_value = get_glyph(skill->GetLevel (), 0.6, 0.65, 0.7, 0.75);
                int _charge_merc_count = skill->GetPlayer()->CountChargeMerc();
                
                skill->SetSection (4);
                skill->SetPlus (7497);
                skill->SetRatio (3.75);
                skill->SetDamage ((1 + _glyph_value) * skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (0);
                skill->GetPlayer ()->SpendChargeMerc(_charge_merc_count);
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
        class State7:public SkillStub::State
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
        Skill3808Stub ():SkillStub (3808)
        {
            cls                 = 5;
#ifdef _SKILL_CLIENT
            name                = L"��������";
            nativename          = "��������";
            icon                = "������������.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 50;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1622;
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
            effect              = "�̿�_ʮ��ն.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "����״̬Ч����ǿ1.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
            statestub.push_back (new State4 ());
            statestub.push_back (new State5 ());
            statestub.push_back (new State6 ());
            statestub.push_back (new State7 ());
#endif
        }
        virtual ~ Skill3808Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (290);
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
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
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetDizzy (1);
            
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetSection () == 1 ? 100 : 0));
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetSlow (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            
            int _charge_merc_count = skill->GetT0();
            //printf("skill3808 : _charge_merc_count normal: val = %d \n", _charge_merc_count);
            
            skill->GetVictim ()->SetProbability (1.0 * _charge_merc_count > 0 ? 100 : 0);
            skill->GetVictim ()->SetTime (600 * _charge_merc_count);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetInvincible (1);
            
            // Remove as cargas
            //skill->GetVictim ()->SpendChargeMerc(_charge_merc_count);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->CountChargeMerc ());
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
        int GetAttackspeed (Skill * skill) const
        {
            return 3;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (4);
        }
#endif
        
#ifdef _SKILL_SERVER
        int GetChargeMerc  (Skill * skill) const
        {
            return 0;
        }
#endif
        
    };
}
#endif