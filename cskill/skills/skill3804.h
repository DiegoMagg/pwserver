//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38040  "ΨKnife Throw"38041  "^ff5c00ΨKnife Throw

^ffcb4aRange　^96f5ff35^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff85^ffffff
^ffcb4aChannel　^ffffff0.1　^ffcb4aseconds
^ffcb4aCast　^ffffff0.9　^ffcb4aseconds
^ffcb4aCooldown　^ffffff10.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff20
^ffcb4aWeapon　^ffffffDagger
^ffcb4aGlyph Bonus　^ff5c00Dragon's Might

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Throw your dagger at the target, dealing base physical
damage plus ^96f5ff1888^ffffff and interrupting the target's channeling.

^d618e7Consumes all Hit Charges to increase effectiveness.

^ffeaabArgent Glyph Effect:@1
Reduces the cooldown by ^96f5ff2^ffeaab seconds per Hit Charge.
^ffeaabLv1-4: Deals an additional ^96f5ff100%%^ffeaab of weapon damage plus ^96f5ff1860^ffeaab.
^ffeaabLv5-7: Deals an additional ^96f5ff150%%^ffeaab of weapon damage plus ^96f5ff2790^ffeaab.
^ffeaabLv8-9: Deals an additional ^96f5ff200%%^ffeaab of weapon damage plus ^96f5ff3720^ffeaab.
^ffeaabLv10: Deals an additional ^96f5ff250%%^ffeaab of weapon damage plus ^96f5ff4650^ffeaab.@1@2
Reduces the cooldown by ^96f5ff2^ffeaab seconds per Hit Charge.
Deals an additional ^96f5ff%d%%^ffeaab of weapon damage plus ^96f5ff%d^ffeaab.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3804
#define __CPPGEN_GNET_SKILL3804
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3804:public Skill
    {
        public:
        enum
        { SKILL_ID = 3804 };
        Skill3804 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3804Stub:public SkillStub
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
                
                // Remove as cargas
                
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
        Skill3804Stub ():SkillStub (3804)
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
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
            feature             = 601;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "��ȴʱ�����.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3804Stub ()
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
            int _charge_merc_count = skill->GetConsumedCharge();
            if(_charge_merc_count > 6)
            {
                _charge_merc_count = 6;
            }
            
            return 10000 - (2000 * _charge_merc_count);
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
            return (float) (40.5);
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