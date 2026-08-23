//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39020  "Î¨Ocean's Edge"39021  "^ff5c00Î¨Ocean's Edge

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff3.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffMelee weapon
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Slash an opponent with your magic-imbued weapon,
dealing base physical damage plus ^96f5ff2800^ffffff physical damage.

Different weapon types have different effects.
Axe and Hammer: Slows the target by^96f5ff60%%^ffffff. Lasts ^96f5ff10^ffffffseconds. Has ^96f5ff20%%^ffffff chance to freeze the target for ^96f5ff3^ffffff seconds.
Polearm: Increases the range to ^96f5ff20^ffffffmeters. Deals ^96f5ff150%%^ffffff
of weapon damage.
Blades and Swords: Deals an additional ^96f5ff310%%^ffffff of weapon damage plus ^96f5ff1864^ffffff.
Other weapons: Same as Axe and Hammer.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff60%%^ffcb4a of weapon damage plus ^96f5ff2208^ffcb4a.
^ffcb4aLv5-7: Deals an additional ^96f5ff80%%^ffcb4a of weapon damage plus ^96f5ff3312^ffcb4a.
^ffcb4aLv8-9: Deals an additional ^96f5ff100%%^ffcb4a of weapon damage plus ^96f5ff4416^ffcb4a.
^ffcb4a Lv10: Deals an additional ^96f5ff120%%^ffcb4a of weapon damage plus ^96f5ff5520^ffcb4a.@1@2
^ffcb4aDeals an additional ^96f5ff%d%%^ffcb4a of weapon damage plus ^96f5ff%d^ffcb4a.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3902
#define __CPPGEN_GNET_SKILL3902
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3902:public Skill
    {
        public:
        enum
        { SKILL_ID = 3902 };
        Skill3902 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3902Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (28);
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
                
                float _glyph_value = get_glyph(skill->GetLevel (), 0.6, 0.8, 1, 1.2);
                int _glyph_value_2 = get_glyph(skill->GetLevel (), 2208, 3312, 4416, 5520);
                
                skill->GetPlayer ()->SetDecmp (112);
                /*
                skill->SetPlus (_glyph_value_2 + (2800 + skill->GetPlayer ()->GetCurweapon () == 1 ? 1864 : 0));
                //skill->SetRatio (_glyph_value + (skill->GetPlayer ()->GetCurweapon () == 5 ? 1.5 : skill->GetPlayer ()->GetCurweapon () == 1 ? 3.1 : 0));
                skill->SetRatio (skill->GetPlayer ()->GetCurweapon () == 5 ? (1.5 + _glyph_value) : skill->GetPlayer ()->GetCurweapon () == 1 ? (3.1 + _glyph_value) : _glyph_value);
                skill->SetDamage (skill->GetAttack ());
                */
                switch(skill->GetPlayer ()->GetCurweapon ())
                {
                    case 1: //espada
                        skill->SetPlus(4664+_glyph_value_2);
                        skill->SetRatio(3.1+_glyph_value);
                        skill->SetDamage(skill->GetAttack());
                    break;
                    case 5: //lanca
                        skill->SetPlus(2800+_glyph_value_2);
                        skill->SetRatio(1.5+_glyph_value);
                        skill->SetDamage(skill->GetAttack());
                    break;
                    case 9: //machado
                    case 182: //punho
                    default:
                        skill->SetPlus(2800+_glyph_value_2);
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
        Skill3902Stub ():SkillStub (3902)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤¶ÏÑÒÕ¶";
            nativename          = "Éñ¡¤¶ÏÑÒÕ¶";
            icon                = "Éñ¡¤¶ÏÑÒÕ¶ºì»Æ.dds";
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
            showorder           = 1106;
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
            effect              = "1¶ÏÑÒÕ¶.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
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
        virtual ~ Skill3902Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (140);
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
            static int aarray[10] = { 1500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000 };
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
            return (float) ( ( skill->GetPlayer ()->GetCurweapon () == 5 ? (skill->GetPlayer()->GetRange () + 16 + skill->GetPlayer ()->GetCurweaponRange ()) : (skill->GetPlayer()->GetRange () + skill->GetPlayer ()->GetCurweaponRange ())));
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) ( ( skill->GetPlayer ()->GetCurweapon () == 5 ? (skill->GetPlayer()->GetRange () + 16 + skill->GetPlayer ()->GetCurweaponRange ()) : (skill->GetPlayer()->GetRange () + skill->GetPlayer ()->GetCurweaponRange ())));
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, const wchar_t * buffer, int length, const wchar_t * format) const
        {
            return 0;
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
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPerformerCurWeapon () == 9 ? 60 : 0));
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetSlow (1);
            
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPerformerCurWeapon () == 9 ? 20 : 0));
            skill->GetVictim ()->SetTime (3500);
            skill->GetVictim ()->SetFix (1);
            //skill->GetVictim ()->SetShowicon (1);
            //skill->GetVictim ()->SetGeloAtiradora (1);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
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
            return (float) (14.9 + ( skill->GetPlayer ()->GetCurweapon () == 5 ? (skill->GetPlayer()->GetRange () + 16 + skill->GetPlayer ()->GetCurweaponRange ()) : (skill->GetPlayer()->GetRange () + skill->GetPlayer ()->GetCurweaponRange ())));
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 6;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (2.5);
        }
#endif
    };
}
#endif