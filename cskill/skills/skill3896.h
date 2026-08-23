//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38960  "Î¨Ferocious Leap"38961  "^ff5c00Î¨Ferocious Leap

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff3.0ã€€^ffcb4asecond
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aWeaponã€€^ffffffMelee weapon
^ffcb4aGlyph Bonusã€€^ff5c00Martial

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Leap at your foe with an animalistic fury,
dealing base physical damage plus^96f5ff2825^ffffff.

Different weapon types have different effects:
Axe and Hammers: In ^96f5ff3^ffffff seconds, deals
^96f5ff350%%^ffffffof weapon damage plus ^96f5ff%d^ffffffphysical damage.
Polearm: Increases the range to ^96f5ff20^ffffffmeters. Deals ^96f5ff100%%^ffffff
of weapon damage.
Blades and Swords: Deals ^96f5ff200%%^ffffff of weapon damage plus^96f5ff1839^ffffff.
Other weapons: Same as Axe and Hammers.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff20%%^ffcb4a of weapon damage.
^ffcb4aLv5-7: Deals an additional ^96f5ff30%%^ffcb4a of weapon damage.
^ffcb4aLv8-9: Deals an additional ^96f5ff40%%^ffcb4a of weapon damage.
^ffcb4a Lv10: Deals an additional ^96f5ff50%%^ffcb4a of weapon damage.@1@2
^ffcb4aDeals an additional ^96f5ff%d%%^ffcb4a of weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3896
#define __CPPGEN_GNET_SKILL3896
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3896:public Skill
    {
        public:
        enum
        { SKILL_ID = 3896 };
        Skill3896 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3896Stub:public SkillStub
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.2, 0.3, 0.4, 0.5);
                
                skill->GetPlayer ()->SetDecmp (100);
                //skill->SetPlus (skill->GetPlayer ()->GetCurweapon () != 1 ? 2825 : 1839);
                //skill->SetRatio (_glyph_value + (skill->GetPlayer ()->GetCurweapon () == 1 ? 2 : skill->GetPlayer ()->GetCurweapon () == 5 ? 1 : 0));
                //skill->SetRatio (skill->GetPlayer ()->GetCurweapon () == 1 ? (2 + _glyph_value) : skill->GetPlayer ()->GetCurweapon () == 5 ? (1 + _glyph_value) : _glyph_value);
                //printf("%f \n", (1.0 * skill->GetRatio()));
                //skill->SetDamage (skill->GetAttack ());
                switch(skill->GetPlayer ()->GetCurweapon ())
                {
                    case 1: //espada
                        skill->SetPlus(4664);
                        skill->SetRatio(2+_glyph_value);
                        skill->SetDamage(skill->GetAttack());
                    break;
                    case 5: //lanca
                        skill->SetPlus(2825);
                        skill->SetRatio(1+_glyph_value);
                        skill->SetDamage(skill->GetAttack());
                    break;
                    case 9: //machado
                    case 182: //punho
                    default:
                        skill->SetPlus(2825);
                        skill->SetRatio(_glyph_value);
                        skill->SetDamage(skill->GetAttack());
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
        Skill3896Stub ():SkillStub (3896)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤»¢±À";
            nativename          = "Éñ¡¤»¢±À";
            icon                = "Éñ¡¤»¢±À»Æ.dds";
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
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
            feature             = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "Ö±½ÓÉËº¦Ôö¼Ó1.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3896Stub ()
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