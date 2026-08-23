//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69430  "Î¨Star Smite"69431  "^ff5c00Î¨Star Smite

^ffcb4aRangeã€€^96f5ff8^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff165^ffffff
^ffcb4aChannelã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.8ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ff5c0015ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff30
^ffcb4aWeaponã€€^ffffffPolearm, Blade and Sword,^ff5c00A/H
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Throw your weapon at all targets in a ^96f5ff25^ffffff meters
line, dealing base physical damage plus ^96f5ff5115^ffffff and
knocking non-player targets back ^96f5ff18^ffffff meters.
Interrupts targets' channeling and reduces their Evasion by ^96f5ff50%^ffffff
Never misses.

Polearms: Increase the range to ^96f5ff20^ffffff meters,
and deals an additional ^96f5ff100%%^ffffff of weapon damage.
Blades and Swords: Deal melee damage plus ^96f5ff300%%^ffffff of weapon damage.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: When using Axe and Hammer, stuns target for ^96f5ff2^00ff00 seconds.
^00ff00Lv5-7: When using Axe and Hammer, stuns target for ^96f5ff3^00ff00 seconds.
^00ff00Lv8-9: When using Axe and Hammer, stuns target for ^96f5ff4^00ff00 seconds.
^00ff00Lv10: When using Axe and Hammer, stuns target for ^96f5ff5^00ff00 seconds.@1@2
When using Axe and Hammer, stuns target for ^96f5ff%d^00ff00 seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6943
#define __CPPGEN_GNET_SKILL6943
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6943:public Skill
    {
        public:
        enum
        { SKILL_ID = 6943 };
        Skill6943 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6943Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (33);
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
                return 800;
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
                skill->GetPlayer ()->SetDecmp (132);
                skill->SetPlus (5115);
                skill->SetRatio (skill->GetPlayer ()->GetCurweapon () == 5 ? 1 : skill->GetPlayer ()->GetCurweapon () == 1 ? 3 : 0);
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
        Skill6943Stub ():SkillStub (6943)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÅüÐÇÕ¶ÔÂ";
            nativename          = "Éñ¡¤ÅüÐÇÕ¶ÔÂ";
            icon                = "ÉñÅüÐÇÕ¶ÔÂÂÌ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 30;
            attr                = 7;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1116;
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
#ifdef _SKILL_CLIENT
            effect              = "1Á÷ÐÇ¸ÏÔÂ.sgc";
#endif
            range.type          = 1;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2370, 1));
            pre_skills.push_back (std::pair < ID, int >(2371, 1));
            runes_attr          = 3;
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
        virtual ~ Skill6943Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (165);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 800;
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
            static int aarray[10] = { 72324,72324,72324,72324,72324,72324,72324,72324,72324,72324 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (4);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (25);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) ( ( skill->GetPlayer ()->GetCurweapon () == 5 ? (16 + skill->GetPlayer ()->GetRange ()) : skill->GetPlayer ()->GetRange () + 5));
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
            skill->GetVictim ()->SetValue (18);
            skill->GetVictim ()->SetRepel (1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetSlowpray (1);*/
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetDecdodge (1);
            
            int _glyph_value = get_glyph(skill->GetLevel (), 2100, 3100, 4100, 5100);
            
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPerformerCurWeapon () == 9 ? 100 : 0));
            skill->GetVictim ()->SetTime (_glyph_value);
            skill->GetVictim ()->SetDizzy (1);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
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
        float GetTalent1 (PlayerWrapper * player) const
        {
            return  0;
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
            return (float) ( ( skill->GetPlayer ()->GetCurweapon () == 5 ? (25 + skill->GetPlayer ()->GetRange ()) : skill->GetPlayer ()->GetRange () + 15));
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
            return (float) (1.7);
        }
#endif
    };
}
#endif