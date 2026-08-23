//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
44550  "ΨToxic Torrent"44551  "^ff5c00ΨToxic Torrent

^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff81^ffffff
^ffcb4aChannel　^ffffff0.4　^ffcb4aseconds
^ffcb4aCast　^ffffff0.9　^ffcb4aseconds
^ffcb4aCooldown　^ffffff30.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffDaggers

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Unleash a wave of toxins on all enemies in
front of you, dealing ^96f5ff7285^ffffff damage and poisoning
them for ^96f5ff30^ffffff seconds. The poison deals ^96f5ff300%%^ffffff of
weapon damage plus ^96f5ff9300^ffffff as Wood damage.

^a6caf0Costs ^ffffff30^a6caf0 Chi.

^d618e7Consumes all Hit Charges to increase effectiveness.

^ff0000Sanguine Glyph Effect:@1
^ff0000Lv1-4: Deals an additional ^96f5ff360%%^ff0000 of weapon damage as Wood damage.
Each Hit Charge increases damage by ^96f5ff60%%^ff0000 of weapon damage.
^ff0000Lv5-7: Deals an additional ^96f5ff540%%^ff0000 of weapon damage as Wood damage.
Each Hit Charge increases damage by ^96f5ff90%%^ff0000 of weapon damage.
^ff0000Lv8-9: Deals an additional ^96f5ff720%%^ff0000 of weapon damage as Wood damage.
Each Hit Charge increases damage by ^96f5ff120%%^ff0000 of weapon damage.
^ff0000Lv10: Deals an additional ^96f5ff900%%^ff0000 of weapon damage as Wood damage.
Each Hit Charge increases damage by ^96f5ff150%%^ff0000 of weapon damage.@1@2
Deals an additional ^96f5ff%d%%^ff0000 of weapon damage as Wood damage.
Each Hit Charge increases damage by ^96f5ff%d%%^ff0000 of weapon damage.@2


"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4455
#define __CPPGEN_GNET_SKILL4455
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4455:public Skill
    {
        public:
        enum
        { SKILL_ID = 4455 };
        Skill4455 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4455Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (20);
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
                float _glyph_value = get_glyph(skill->GetLevel (), 3.6, 5.4, 7.2, 9.0);
                int _charge_merc_count = skill->GetPlayer()->CountChargeMerc();
                float _glyph_plus_from_charge = get_glyph(skill->GetLevel (), 0.6, 0.9, 1.2, 1.5);
                
                skill->GetPlayer ()->SetDecmp (61);
                skill->GetPlayer ()->SpendChargeMerc(skill->GetPlayer()->CountChargeMerc());
                skill->SetPlus (7285);
                skill->SetRatio (_glyph_value + (_charge_merc_count * _glyph_plus_from_charge));
                skill->SetWooddamage (skill->GetAttack ());
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
        Skill4455Stub ():SkillStub (4455)
        {
            cls                 = 5;
#ifdef _SKILL_CLIENT
            name                = L"�񡤶���";
            nativename          = "�񡤶���";
            icon                = "���к�.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 30;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2903;
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
            effect              = "�̿�_����.sgc";
#endif
            range.type          = 4;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "����״̬Ч����ǿ2.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill4455Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (81);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 900;
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
            return (float) (10);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (140));
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
            return 100;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (30000);
            skill->GetVictim ()->SetAmount (skill->GetT0 () *
            (1 +
            0.01 * (skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () >
            0 ? skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () : 0)));
            skill->GetVictim ()->SetToxic (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            float _glyph_value = get_glyph(player->GetSkilllevel (4455), 3.6, 5.4, 7.2, 9.0);
            int _charge_merc_count = player->CountChargeMerc();
            float _glyph_plus_from_charge = get_glyph(player->GetSkilllevel (4455), 0.6, 0.9, 1.2, 1.5);
            return (float) ((3 + _glyph_value + (_charge_merc_count * _glyph_plus_from_charge)) * player->GetWeapondamage () + 9300);
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttackdegree ());
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
            return (float) (skill->GetPlayer ()->GetRange () + 5.5);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 33;
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