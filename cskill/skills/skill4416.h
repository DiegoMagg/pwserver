//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
44160  "Î¨Flame Tsunami"44161  "^ff5c00Î¨Flame Tsunamiã€€ã€€ã€€

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aChannelã€€^ffffff0.4ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.9ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff120.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffMelee, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Deals base physical damage to all targets in a ^96f5ff12^ffffff meter line.
Deals an additional ^96f5ff200%%^ffffff of weapon damage plus ^96f5ff7200^ffffff.
Never misses.

Different weapon type have different effects.
Axe and Hammer: Stuns the target for ^96f5ff5^ffffff seconds.
Polearm: The range is increased to ^96f5ff20^ffffff meters. Deals damage to targets in a ^96f5ff22^ffffff meter line.
Blade and Sword: Deals an additional ^96f5ff200%%^ffffff of weapon damage.
Other weapons: Same as Axe and Hammer.




^ff0000Sanguine Glyph Effect@1
^ff0000Lv1-4: For every ^96f5ff100^ff0000 Chi spent,  deals ^96f5ff125%%^ff0000 of base damage.
^ff0000Lv5-7: For every ^96f5ff100^ff0000Chi spent, deals ^96f5ff150%%^ff0000 of base damage
^ff0000Lv8-9: For every ^96f5ff100^ff0000Chi spent, deals ^96f5ff175%%^ff0000 of base damage
^ff0000 Lv10: For every ^96f5ff100^ff0000Chi spent, deals ^96f5ff200%%^ff0000 of weapon damage@1@2
^ff0000Costs  ^96f5ff50%%^ff0000 of current Chi, for every ^96f5ff100^ff0000 Chi spent, deals
^96f5ff%d%%^ff0000 of weapon damage@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4416
#define __CPPGEN_GNET_SKILL4416
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4416:public Skill
    {
        public:
        enum
        { SKILL_ID = 4416 };
        Skill4416 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4416Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (0);
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
                return 850;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 1.25, 1.5, 1.75, 2);
                //int _get_ap = (skill->GetPlayer()->GetAp() * 0.5);
                int _get_ap = skill->GetPlayer()->GetAp();
                int _ap_result = _get_ap / 100;
                //float _res = 1.0 * (_ap_result * _glyph_value);
                float _res = _ap_result * _glyph_value;
                
                /*skill->GetPlayer ()->SetDecmp (0);
                skill->SetPlus (7200);
                //skill->SetRatio (_res + (2 + skill->GetPlayer ()->GetCurWeapon () == 1 ? 2 : 0));
                skill->SetRatio (_res + ((2 + _res) + skill->GetPlayer ()->GetCurWeapon () == 1 ? (2 + _res) : _res));
                skill->SetDamage (skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (1);*/
                
                skill->GetPlayer ()->SetDecmp (0);
                skill->SetPlus (7200);
                //skill->SetRatio (_res + ((2 + _res) + skill->GetPlayer ()->GetCurWeapon () == 1 ? (2 + _res) : _res));
                skill->SetRatio (2 + (skill->GetPlayer ()->GetCurWeapon () == 1 ? 2 : 0));
                skill->SetDamage (skill->GetAttack () + (_res * skill->GetAttack ()));
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
        Skill4416Stub ():SkillStub (4416)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÌìÔªÄæ×ª";
            nativename          = "Éñ¡¤ÌìÔªÄæ×ª";
            icon                = "ÉñÌìÔªÄæ×ªºì.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2903;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÎäÏÀ_ËéÂ­.sgc";
#endif
            range.type          = 1;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill4416Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 850;
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
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 11208,11208,11208,11208,11208,11208,11208,11208,11208,11208 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (3);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetCurweapon () == 5 ? 22 : 12);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) ( ( skill->GetPlayer ()->GetCurweapon () == 5 ? (16 + skill->GetPlayer ()->GetRange ()) : skill->GetPlayer ()->GetRange ()));
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
            return 100;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPerformerCurWeapon() == 1 ? 0 : skill->GetPerformerCurWeapon() == 5 ? 0 : 100));
            skill->GetVictim ()->SetTime (5000);
            skill->GetVictim ()->SetDizzy (1);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            int _get_ap = (skill->GetPlayer()->GetAp() * 0.5);
            
            skill->GetVictim()->SetProbability(1.0 * 100);
            skill->GetVictim()->SetValue(-_get_ap);
            skill->GetVictim()->SetAp(1);
            
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
            return (float) ( ( skill->GetPlayer ()->GetCurweapon () == 5 ? (25 + skill->GetPlayer ()->GetRange ()) : skill->GetPlayer ()->GetRange () + 8));
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 9;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1);
        }
#endif
    };
}
#endif