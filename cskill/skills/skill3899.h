//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38990  "Î¨Ferocious Leap"38991  "^ff5c00Î¨Ferocious Leap

^ffcb4aCastã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff3.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aWeaponã€€^ffffffMelee Weapon
^ffcb4aGlyphã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Leap at your foe with an animalistic fury,
dealing base physical damage plus^96f5ff2825^ffffff physical damage.

Different weapon types have different effects.
Axe and Hammer: In ^96f5ff3^ffffff seconds, deals
^96f5ff350%%^ffffffof weapon damage plus ^96f5ff%d^ffffffof physical damage.
Polearm: Increases range to ^96f5ff20^ffffffmeters. Deals ^96f5ff100%%^ffffff
of weapon damage.
Blades and Swords: Deals ^96f5ff200%%^ffffffof weapon damage plus^96f5ff1839^ffffff.
Other weapons: Same as Axe and Hammer.

^ff0000Sanguine Glyph Effect:@1
^ff0000Costs ^96f5ff50%%^ff0000 of current Chi. Every point of Chi increases Accuracy by^96f5ff10%%^ff0000.
^ff0000Lv1-4: For every ^96f5ff100^ff0000 Chi spent, deals ^96f5ff125%%^ff0000 of damage.
^ff0000Lv 5-7: For every ^96f5ff100^ff0000Chi spent, deals ^96f5ff150%%^ff0000 of damage.
^ff0000Lv8-9: For every ^96f5ff100^ff0000Chi spent, deals ^96f5ff175%%^ff0000 of damage.
^ff0000 Lv10: For every ^96f5ff100^ff0000Chi spent, deals ^96f5ff200%%^ff0000 of damage. @1@2
^ff0000Costs ^96f5ff50%%^ff0000of current Chi. Every point of Chi increases Accuracy by^96f5ff10%%^ff0000ï¼?
For every ^96f5ff100^ff0000Chi spent, deals ^96f5ff%d%%^ff0000of damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3899
#define __CPPGEN_GNET_SKILL3899
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3899:public Skill
    {
        public:
        enum
        { SKILL_ID = 3899 };
        Skill3899 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3899Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (25);
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
                return 1000;
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
                //float _glyph_value = get_glyph(skill->GetLevel (), 1.25, 1.5, 1.75, 2);
                //int _get_ap = (skill->GetPlayer()->GetAp() * 0.5);
                //int _get_ap = skill->GetPlayer()->GetAp();
                //int _ap_result = _get_ap / 100;
                //float _res = _ap_result * _glyph_value;
                
                /*skill->GetPlayer ()->SetDecmp (100);
                skill->SetPlus (skill->GetPlayer ()->GetCurweapon () != 1 ? 2825 : 1839);
                //skill->SetRatio (_res + (skill->GetPlayer ()->GetCurweapon () == 1 ? 2 : skill->GetPlayer ()->GetCurweapon () == 5 ? 1 : 0));
                skill->SetRatio (skill->GetPlayer ()->GetCurweapon () == 1 ? (2 + _res) : skill->GetPlayer ()->GetCurweapon () == 5 ? (1 + _res) : _res);
                skill->SetDamage (skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (1);*/
                
                
                //skill->SetPlus (skill->GetPlayer ()->GetCurweapon () != 1 ? 2825 : 1839);
                //skill->SetRatio (skill->GetPlayer ()->GetCurweapon () == 1 ? 2 : skill->GetPlayer ()->GetCurweapon () == 5 ? 1 : 0);
                //skill->SetDamage (skill->GetAttack () + (_res * skill->GetAttack ()));
                skill->GetPlayer ()->SetDecmp (100);
                float _glyph_value = get_glyph(skill->GetLevel (), 1.25, 1.5, 1.75, 2);
                int _get_ap = skill->GetPlayer()->GetAp();
                int _ap_result = _get_ap / 100;
                float _multiplier_damage = _ap_result * _glyph_value;
                switch(skill->GetPlayer ()->GetCurweapon ())
                {
                    case 1: //espada
                        skill->SetPlus(4664);
                        skill->SetRatio(2);
                        skill->SetDamage((1+_multiplier_damage) * skill->GetAttack());
                    break;
                    case 5: //lanca
                        skill->SetPlus(2825);
                        skill->SetRatio(1);
                        skill->SetDamage((1+_multiplier_damage) * skill->GetAttack());
                    break;
                    case 9: //machado
                    case 182: //punho
                    default:
                        skill->SetPlus(2825);
                        skill->SetDamage((1+_multiplier_damage) * skill->GetAttack());
                        break;
                }
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
        Skill3899Stub ():SkillStub (3899)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤»¢±À";
            nativename          = "Éñ¡¤»¢±À";
            icon                = "Éñ¡¤»¢±Àºì.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1101;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (9);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÎäÏÀ_»¢»÷¸Ä.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
            feature             = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ÏûºÄÔªÆøÔì³ÉÉËº¦.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3899Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (125);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 3000,3000,3000,3000,3000,3000,3000,3000,3000,3000 };
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
            return (float) ( ( skill->GetPlayer ()->GetCurweapon () == 5 ? (skill->GetPlayer()->GetRange () + 16 + skill->GetPlayer ()->GetCurweaponRange ()) : (skill->GetPlayer()->GetRange () + skill->GetPlayer ()->GetCurweaponRange ())));
            //return (float) ((skill->GetPlayer()->GetCurWeapon() == 5 ? (20 + skill->GetPlayer()->GetRange()) : skill->GetPlayer()->GetRange()));
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
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetT2() == 1 ? 0 : skill->GetT2() == 5 ? 0 : 100));
            skill->GetVictim ()->SetTime (3000);
            skill->GetVictim ()->SetAmount (skill->GetT1 () *
            (1 +
            0.01 * (skill->GetT0 () - skill->GetPlayer ()->GetDefenddegree () >
            0 ? skill->GetT0 () - skill->GetPlayer ()->GetDefenddegree () : 0)));
            skill->GetVictim ()->SetBleeding (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            int _get_ap = (skill->GetPlayer()->GetAp() * 0.5);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (3100);
            skill->GetVictim ()->SetRatio (0.1 * _get_ap);
            skill->GetVictim ()->SetIncaccuracy (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (-_get_ap);
            skill->GetVictim ()->SetAp (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttackdegree ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (3.5 * player->GetEquipattack () + 4697);
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent2 (PlayerWrapper * player) const
        {
            return (float) (player->GetCurweapon ());
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
            return (float) (13.3 + ( skill->GetPlayer ()->GetCurweapon () == 5 ? (skill->GetPlayer()->GetRange () + 26 + skill->GetPlayer ()->GetCurweaponRange ()) : (5 + skill->GetPlayer()->GetRange () + skill->GetPlayer ()->GetCurweaponRange ())));
            //return (float) ((skill->GetPlayer()->GetCurWeapon() == 5 ? (20 + skill->GetPlayer()->GetRange()) : skill->GetPlayer()->GetRange()));
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 2;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.8);
        }
#endif
    };
}
#endif