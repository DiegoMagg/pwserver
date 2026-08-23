//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
44610  "ΨShadow Teleport"44611  "^ff5c00ΨShadow Teleport

^ffcb4aRange　^96f5ff35^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff140^ffffff
^ffcb4aChannel 　^ffffffInstant
^ffcb4aCooldown　^ffffff120　^ffcb4aseconds
^ffcb4aWeapon　^ffffffDaggers

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Jump between shadows, stepping
instantly to the target's location
in an eruption of shadow magic that
stuns the target for ^96f5ff4^ffffff seconds.

^a6caf0Costs ^ffffff1^a6caf0 Spark.


^d618e7^d618e7Consumes all Hit Charges to increase effectiveness.

^ff0000Sanguine Glyph Effect:@1
Increases the Stun duration by ^96f5ff0.7^ff0000 seconds per Hit Charge.
^ff0000Lv1-4: Generates ^96f5ff20^ff0000 Chi after use.
^ff0000Lv5-7: Generates ^96f5ff30^ff0000 Chi after use.
^ff0000Lv8-9: Generates ^96f5ff40^ff0000 Chi after use.
^ff0000Lv10: Generates ^96f5ff50^ff0000 Chi after use.@1@2
Increases the Stun duration by ^96f5ff0.7^ff0000 second.
Generates ^96f5ff%d^ff0000 Chi after use.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4461
#define __CPPGEN_GNET_SKILL4461
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4461:public Skill
    {
        public:
        enum
        { SKILL_ID = 4461 };
        Skill4461 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4461Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (40);
                skill->GetPlayer ()->SetPray (1);
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
                skill->GetPlayer ()->SetDecmp (100);
                skill->GetPlayer ()->SpendChargeMerc(skill->GetPlayer()->CountChargeMerc());
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
        Skill4461Stub ():SkillStub (4461)
        {
            cls                 = 5;
#ifdef _SKILL_CLIENT
            name                = L"�񡤰ٲ����о�";
            nativename          = "�񡤰ٲ����о�";
            icon                = "��ٲ����о���.dds";
#endif
            max_level           = 1;
            type                = 8;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1626;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (23749);
            }
#ifdef _SKILL_CLIENT
            effect              = "��.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "����״̬Ч����ǿ1.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill4461Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (140);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 500;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 120000,120000,120000,120000,120000,120000,120000,120000,120000,120000 };
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
        float GetRadius (Skill * skill) const
        {
            return (float) (35);
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
            return 1000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            int _charge_merc_count = skill->GetConsumedCharge();
            if(_charge_merc_count > 6)
            {
                _charge_merc_count = 6;
            }
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (4000 + (700 * _charge_merc_count));
            skill->GetVictim ()->SetDizzy (1);
            
            skill->GetVictim ()->SetProbability (1.0 * _charge_merc_count > 0 ? 100 : 0);
            skill->GetVictim ()->SetTime ((700 * _charge_merc_count) > 5000 ? 5000 : (700 * _charge_merc_count));
            skill->GetVictim ()->SetValue (2);
            skill->GetVictim ()->SetPalsy (1);

            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            int _glyph_value = get_glyph(skill->GetLevel (), 20, 30, 40, 50);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (_glyph_value);
            skill->GetVictim ()->SetAp (1);
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
            return (float) (35);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
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