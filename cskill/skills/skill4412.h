//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
44120  "Î¨Flame Tsunami"44121  "^ff5c00Î¨Ion Spikeã€€ã€€ã€€

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aChannelã€€^ffffff0.4ã€€^ffcb4ameters
^ffcb4aCastã€€^ffffff0.9ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff120.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffMelee, Unarmed
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Deals damage to all targets in a ^96f5ff12^ffffff meter line. Base physical damage plus
^96f5ff200%%^ffffff of weapon damage plus ^96f5ff7200^ffffff.
Never misses.

Different weapon types have different effects.
Axe and Hammer: Stuns the target for ^96f5ff5^ffffff seconds.
Polearm: The range is increased to ^96f5ff20^ffffff meters.
Deals damage to all opponents in a ^96f5ff22^ffffff meter line.
Blade and Sword: Deals an additional ^96f5ff200%%^ffffff of weapon damage.
Other weapons: Same as Axe and Hammer.

I'm the master of myself."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4412
#define __CPPGEN_GNET_SKILL4412
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4412:public Skill
    {
        public:
        enum
        { SKILL_ID = 4412 };
        Skill4412 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4412Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0);
                skill->SetPlus (7200);
                skill->SetRatio (2 + (skill->GetPlayer ()->GetCurWeapon () == 1 ? 2 : 0));
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
        Skill4412Stub ():SkillStub (4412)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÌìÔªÄæ×ª";
            nativename          = "Éñ¡¤ÌìÔªÄæ×ª";
            icon                = "ÉñÌìÔªÄæ×ª.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
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
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(1817, 1));
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
        virtual ~ Skill4412Stub ()
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
            static int aarray[10] = { 56633,56633,56633,56633,56633,56633,56633,56633,56633,56633 };
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
            //skill->GetVictim ()->SetProbability (1.0 * ((int)skill->GetT0 () != 1 || (int)skill->GetT0 () != 5) ? 100 : 0);
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPerformerCurWeapon() == 1 ? 0 : skill->GetPerformerCurWeapon() == 5 ? 0 : 100));
            skill->GetVictim ()->SetTime (5000);
            skill->GetVictim ()->SetDizzy (1);
            
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