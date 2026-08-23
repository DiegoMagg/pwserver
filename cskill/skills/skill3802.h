#include <cmath>
//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38020  "ΨKnife Throw"38021  "^ff5c00ΨKnife Throw

^ffcb4aRange　^96f5ff35^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff85^ffffff
^ffcb4aChannel　^ffffff0.1　^ffcb4aseconds
^ffcb4aCast　^ffffff0.9　^ffcb4aseconds
^ffcb4aCooldown　^ffffff10.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff20
^ffcb4aWeapon　^ffffffDaggers
^ffcb4aGlyph Bonus　^ff5c00Dragon's Might

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Throw your dagger at the target, dealing base physical
damage plus ^96f5ff1888^ffffff and interrupting the target's channeling.

^d618e7Consumes all Hit Charges
to increase effectiveness.

^00ffffEthereal Glyph Effect:@1
Hits all targets within a radius area of ^ffffff20^00ffff degrees per Hit Charge.
^00ffffLv1-4: Deals an additional damage that equals to ^ffffff100%%^00ffff of your Gear Attack plus ^ffffff1860^00ffff.
^00ffffLv5-7: Deals an additional damage that equals to ^ffffff150%%^00ffff of your Gear Attack plus ^ffffff2790^00ffff.
^00ffffLv8-9: Deals an additional damage that equals to ^ffffff200%%^00ffff of your Gear Attack plus ^ffffff3720^00ffff.
^00ffffLv10: Deals an additional damage that equals to ^ffffff250%%^00ffff of your Gear Attack plus ^ffffff4650^00ffff.@1@2
Every Hit Charge cost increases by ^ffffff20^00ffff degrees of the radius area.
Deals an additional damage that equals to ^ffffff%d%%^00ffff of your Gear Attack plus ^ffffff%d^00ffff.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3802
#define __CPPGEN_GNET_SKILL3802
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3802:public Skill
    {
        public:
        enum
        { SKILL_ID = 3802 };
        Skill3802 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3802Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (17);
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
                return 900;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 1, 1.5, 2, 2.5);
                int _glyph_value_2 = get_glyph(skill->GetLevel (), 1860, 2790, 3720, 4650);
                
                skill->GetPlayer ()->SetDecmp (68);
                skill->GetPlayer ()->SpendChargeMerc(skill->GetPlayer()->CountChargeMerc());
                skill->SetPlus (1888.5 + _glyph_value_2);
                skill->SetRatio (_glyph_value);
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
        Skill3802Stub ():SkillStub (3802)
        {
            cls                 = 5;
#ifdef _SKILL_CLIENT
            name                = L"���������";
            nativename          = "���������";
            icon                = "�񡤶��ɵ���.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1609;
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
            effect              = "�̿�_���ɵ�.sgc";
#endif
            range.type          = 4;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
            feature             = 601;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "Ӱ�췶Χ����1.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3802Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (85);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 10000;
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
        float GetRadius(Skill *skill) const
        {
            return (float)(100);
        }
        float GetAttackdistance(Skill *skill) const
        {
            return (float)(0);
        }
        /*float GetAngle(Skill *skill) const
        {
            int _charge_merc_count = skill->GetPlayer()->CountChargeMerc();
            if(_charge_merc_count > 0)
            {
                return (float)(1 - 0.0111111 * (20 * _charge_merc_count));
            }
            else
            {
                return (float) (1 - 0.0111111 * (20));
            }
        }*/
        /*float GetAngle(Skill *skill) const
        {
            int _charge_merc_count = skill->GetPlayer()->CountChargeMerc();
            float half_angle_degrees = (_charge_merc_count > 0) ? (20.0f * _charge_merc_count) : 10.0f; // metade do ?ngulo total
            float half_angle_radians = half_angle_degrees * (3.14159265f / 180.0f); // converter para radianos
            return cos(half_angle_radians);
        }*/
        float GetAngle(Skill *skill) const
        {
            int _charge_merc_count = skill->GetPlayer()->CountChargeMerc();
            float angle = 0.f;
            
            switch (_charge_merc_count)
            {
                case 1:
                angle = 0.2f;
                break;
                case 2:
                angle = 0.4f;
                break;
                case 3:
                angle = 0.6f;
                break;
                case 4:
                angle = 0.8f;
                break;
                case 5:
                case 6:
                angle = 1.f;
                break;
                default:
                angle = 0.1f;
                break;
            }
            return cos(angle);
            //return (float) (1 - 0.0111111 * (angle));
        }
        float GetPraydistance(Skill *skill) const
        {
            return (float)(35);
            
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetBreak (1);
            
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
            return (float) (55);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 4;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (3);
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