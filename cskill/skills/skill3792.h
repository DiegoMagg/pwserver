//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37920  "ΨSpell Cutter"37921  "^ff5c00ΨSpell Cutter

^ffcb4aRange　^ffffffMelee
^ffcb4aCost Mana　^96f5ff180^ffffff
^ffcb4aChannel　^ffffff0.1　^ffcb4aseconds
^ffcb4aCast　^ffffff0.5　^ffcb4aseconds
^ffcb4aCooldown　^ffffff15.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff10
^ffcb4aWeapon　^ffffffDagger
^ffcb4aGlyph Bonus　^ff5c00Martial Prowess

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Slash at your foe with a strike that inhibits magic. Deals
base physical damage plus ^96f5ff400%%^ffffff of weapon damage plus ^96f5ff5834^ffffff
and interrupts the target's channeling. Dampens the target's
spellcasting powers for ^96f5ff3^ffffff seconds, increasing channeling time by ^96f5ff30%%^ffffff.

^d618e7Consumes all Hit Charges to increase effectiveness.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: Deals an additional 20%% of weapon damage plus 810.
Each Hit Charge increases damage by 24%% of weapon damage.
^ffeaabLv5-7: Deals an additional 30%% of weapon damage plus 1215.
Each Hit Charge increases damage by 35%% of weapon damage.
^ffeaabLv8-9: Deals an additional 40%% of weapon damage plus 1610.
Each Hit Charge increases damage by 48%% of weapon damage.
^ffeaabLv10: Deals an additional 50%% of weapon damage plus 2025.
Each Hit Charge increases damage by 60%% of weapon damage.@1@2
Deals an additional %d%% of weapon damage plus %d.
Each Hit Charge increases damage by %d%% of weapon damage.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3792
#define __CPPGEN_GNET_SKILL3792
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3792:public Skill
    {
        public:
        enum
        { SKILL_ID = 3792 };
        Skill3792 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3792Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (90);
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.2, 0.3, 0.4, 0.5);
                int _glyph_value_2 = get_glyph(skill->GetLevel (), 810, 1215, 1610, 2025);
                int _charge_merc_count = skill->GetPlayer()->CountChargeMerc();
                float _glyph_plus_from_charge = get_glyph(skill->GetLevel (), 0.24, 0.35, 0.48, 0.6);
                
                skill->GetPlayer ()->SetDecmp (90);
                skill->GetPlayer ()->SpendChargeMerc(skill->GetPlayer()->CountChargeMerc());
                skill->SetPlus (5834 + _glyph_value_2);
                skill->SetRatio (4 + _glyph_value + (_charge_merc_count * _glyph_plus_from_charge));
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
        Skill3792Stub ():SkillStub (3792)
        {
            cls                 = 5;
#ifdef _SKILL_CLIENT
            name                = L"�񡤶Ϸ���";
            nativename          = "�񡤶Ϸ���";
            icon                = "�񡤶Ϸ�����.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2156;
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
            effect              = "�̿�_�Ϸ���.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "����������������.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3792Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (180);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 500;
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
            static int aarray[10] = { 4000000 };
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
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetBreak (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (4000);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetSlowpray (1);
            
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
            return (float) (13.3);
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
            return (float) (1.7);
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