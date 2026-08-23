//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39230  "Î¨River Avalanche"39231  "^ff5c00Î¨River Avalanche

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.4ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.2ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff5.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffMelee weapon
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Deals base physical attack plus ^96f5ff170%%^ffffff of
weapon damage plus ^96f5ff4664^ffffff physical damage. Increases your Threat.

Different weapon types have different effects.
Axe and Hammer: Has ^96f5ff55%%^ffffffchance to stun the target for ^96f5ff3^ffffff seconds.
Polearm: Increases the range to ^96f5ff20^ffffffmeters. Deals an additional ^96f5ff50%%^ffffff
of weapon damage.
Blades and Swords: Deals an additional ^96f5ff200%%^ffffff of weapon damage. Reduces the casting time to ^96f5ff1^ffffff second.
Other weapons: Same as Axe and Hammer.

^ff0000Sanguine Glyph Effect:@1
^ff0000Costs^96f5ff50%%^ff0000of current Chi. Every point of Chi increases Accuracy by ^96f5ff10%%^ff0000.
^ff0000Lv1-4: For every ^96f5ff100^ff0000Chi spent, deals an additional ^96f5ff125%%^ff0000of weapon damage.
^ff0000Lv5-7: For every^96f5ff100^ff0000Chi spent, deals an additional ^96f5ff150%%^ff0000of weapon damage.
^ff0000Lv8-9: For every^96f5ff100^ff0000Chi spent, deals an additional ^96f5ff175%%^ff0000of weapon damage.
^ff0000 Lv10: For every^96f5ff100^ff0000Chi spent, deals an additional ^96f5ff200%%^ff0000of weapon damage.@1@2
^ff0000Costs ^96f5ff50%%^ff0000 Chi. Every point of Chi increase Accuracy by^96f5ff10%%^ff0000.
For every ^96f5ff100^ff0000Chi spent, deals ^96f5ff%d%%^ff0000 damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3923
#define __CPPGEN_GNET_SKILL3923
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3923:public Skill
    {
        public:
        enum
        { SKILL_ID = 3923 };
        Skill3923 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3923Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (30);
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
                return skill->GetPlayer ()->GetCurweapon () == 1 ? 1000 : 1200;
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
                
                
                /*skill->GetPlayer ()->SetDecmp (170);
                skill->SetPlus (4664);
                //skill->SetRatio (_res + (1.7 + (skill->GetPlayer ()->GetCurWeapon () == 5 ? 0.5 : skill->GetPlayer ()->GetCurWeapon () == 1 ? 2 : 0)));
                skill->SetRatio (1.7 + (skill->GetPlayer ()->GetCurWeapon () == 5 ? (0.5 + _res) : skill->GetPlayer ()->GetCurWeapon () == 1 ? (2 + _res) : _res));
                skill->SetDamage (skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (1);*/
                
                skill->GetPlayer ()->SetDecmp (170);
                //skill->SetPlus (4664);
                //skill->SetRatio (1.7 + skill->GetPlayer ()->GetCurWeapon () == 5 ? 0.5 : skill->GetPlayer ()->GetCurWeapon () == 1 ? 2 : 0);
                //skill->SetDamage (skill->GetAttack () + (_res * skill->GetAttack()));
                float _glyph_value = get_glyph(skill->GetLevel (), 1.25, 1.5, 1.75, 2);
                int _get_ap = skill->GetPlayer()->GetAp();
                int _ap_result = _get_ap / 100;
                float _multiplier_damage = _ap_result * _glyph_value;
                switch(skill->GetPlayer ()->GetCurweapon ())
                {
                    case 1: //espada
                        skill->SetPlus (4664);
                        skill->SetRatio (3.7);
                        skill->SetDamage((1+_multiplier_damage)*skill->GetAttack());
                    break;
                    case 5: //lanca
                        skill->SetPlus (4664);
                        skill->SetRatio (2.2);
                        skill->SetDamage((1+_multiplier_damage)*skill->GetAttack());
                    break;
                    case 9: //machado
                    case 182: //punho
                    default:
                        skill->SetPlus (4664);
                        skill->SetRatio (1.7);
                        skill->SetDamage((1+_multiplier_damage)*skill->GetAttack());
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
        Skill3923Stub ():SkillStub (3923)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤¶ÏË®Áè·ç";
            nativename          = "Éñ¡¤¶ÏË®Áè·ç";
            icon                = "Éñ¡¤¶ÏË®Áè·çºì.dds";
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
            showorder           = 1104;
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
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "Éñ_¶ÏË®Áè·ç_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
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
        virtual ~ Skill3923Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (150);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1200;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 5000;
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
            return (float) ( ( skill->GetPlayer ()->GetCurweapon () == 5 ? (20 + skill->GetPlayer ()->GetRange ()) : skill->GetPlayer ()->GetRange ()));
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 150);
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return skill->GetT0 () + 22500;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPerformerCurWeapon() == 1 ? 0 : skill->GetPerformerCurWeapon() == 5 ? 0 : 55));
            skill->GetVictim ()->SetTime (4000);
            skill->GetVictim ()->SetDizzy (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (8000);
            skill->GetVictim ()->SetAssault (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            int _get_ap = (skill->GetPlayer()->GetAp() * 0.5);
            
            skill->GetVictim()->SetProbability(1.0 * 100);
            skill->GetVictim()->SetTime(3100);
            skill->GetVictim()->SetRatio(0.1 * _get_ap);
            skill->GetVictim()->SetIncaccuracy(1);
            
            skill->GetVictim()->SetProbability(1.0 * 100);
            skill->GetVictim()->SetValue(-_get_ap);
            skill->GetVictim()->SetAp(1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetMaxhp ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            int res = 0;
            res = player->GetCurWeapon();
            
            return res;
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
            return (float) ( 3 + ( skill->GetPlayer ()->GetCurweapon () == 5 ? (25 + skill->GetPlayer ()->GetRange ()) : skill->GetPlayer ()->GetRange ()));
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 15;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (2);
        }
#endif
    };
}
#endif