//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
34670  "Î¨Moonblade"34671  "^ff5c00Î¨Moonbladeã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€

^ffcb4aRangeã€€^96f5ff27^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff276^ffffff
^ffcb4aChannelã€€^ffffff1.1^ffcb4aã€€seconds
^ffcb4aCastã€€^ffffff2.1^ffcb4aã€€second
^ffcb4aCooldownã€€^ffffff15.0^ffcb4aã€€seconds
^ffcb4aWeaponã€€^ffffffScythe, Unarmed
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Conjure four magical moonblades to continuously attack your enemy,
dealing base magic damage plus ^96f5ff250%%^ffffff of weapon
damage plus ^96f5ff10859^ffffff as Metal and Water damage. The first
attack has a ^96f5ff25%%^ffffff chance to increase the damage taken
by the target by ^96f5ff30%%^ffffff for ^96f5ff5^ffffff seconds. The
fourth attack has a ^96f5ff25%%^ffffff chance to
restore HP equals to ^96f5ff12%%^ffffff of your base magic attack plus ^96f5ff1303^ffffff.
This effect can coexist with Heaven's Flame.
This effect will cancel Extreme Poison.

While in Reaper Form,
the cooldown is reduced to ^96f5ff6^ffffff seconds
A ^96f5ff100%%^ffffff chance to trigger the first attack effect.
A ^96f5ff100%%^ffffff chance to trigger the fourth healing effect.

^a6caf0Costs ^ffffff50^a6caf0 Chi.

^ffa4a9Can be cast while moving.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: Deals an additional ^96f5ff120%%^ffeaab of weapon damage while in Reaper Form.
^ffeaabLv5-7: Deals an additional ^96f5ff180%%^ffeaab of weapon damage while in Reaper Form.
^ffeaabLv8-9: Deals an additional ^96f5ff240%%^ffeaab of weapon damage while in Reaper Form.
^ffeaabLv10: Deals an additional ^96f5ff300%%^ffeaab of weapon damage while in Reaper Form.@1@2
^ffeaabDeals an additional ^96f5ff%d%% of weapon damage while in Reaper Form.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3467
#define __CPPGEN_GNET_SKILL3467
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3467:public Skill
    {
        public:
        enum
        { SKILL_ID = 3467 };
        Skill3467 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3467Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1101;
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
                skill->GetPlayer ()->SetDecmp (276);
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
                skill->GetPlayer ()->SetPerform (2);
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
                return 801;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 1.2, 1.8, 2.4, 3);
                
                skill->SetSection (1);
                skill->SetPlus (10859);
                skill->SetRatio (2.5 + (skill->GetPlayer ()->GetForm () == 1 ? _glyph_value : 0));
                skill->SetWaterdamage (0.05 * skill->GetMagicattack ());
                skill->SetGolddamage (0.05 * skill->GetMagicattack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State4:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 268;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 1.2, 1.8, 2.4, 3);
                
                skill->SetSection (2);
                skill->SetPlus (10859);
                skill->SetRatio (2.5 + (skill->GetPlayer ()->GetForm () == 1 ? _glyph_value : 0));
                skill->SetWaterdamage (0.1 * skill->GetMagicattack ());
                skill->SetGolddamage (0.1 * skill->GetMagicattack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State5:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 301;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 1.2, 1.8, 2.4, 3);
                
                skill->SetSection (3);
                skill->SetPlus (10859);
                skill->SetRatio (2.5 + (skill->GetPlayer ()->GetForm () == 1 ? _glyph_value : 0));
                skill->SetWaterdamage (0.15 * skill->GetMagicattack ());
                skill->SetGolddamage (0.15 * skill->GetMagicattack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State6:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 701;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 1.2, 1.8, 2.4, 3);
                
                skill->SetSection (4);
                skill->SetPlus (10859);
                skill->SetRatio (2.5 + (skill->GetPlayer ()->GetForm () == 1 ? _glyph_value : 0));
                skill->SetWaterdamage (0.2 * skill->GetMagicattack ());
                skill->SetGolddamage (0.2 * skill->GetMagicattack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State7:public SkillStub::State
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
        Skill3467Stub ():SkillStub (3467)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÔÂ»ªÂÒÎè";
            nativename          = "Éñ¡¤ÔÂ»ªÂÒÎè";
            icon                = "Éñ¡¤ÔÂ»¨ÂÒÎè°×.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 50;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1024;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
#ifdef _SKILL_CLIENT
            effect              = "ÔÂÏÉ_ÔÂ»ªÂÒÎè_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            is_movingcast       = true;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ÕýÃæ×´Ì¬Ð§¹ûÔöÇ¿2.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
            statestub.push_back (new State4 ());
            statestub.push_back (new State5 ());
            statestub.push_back (new State6 ());
            statestub.push_back (new State7 ());
#endif
        }
        virtual ~ Skill3467Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (276);
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[2][10] = { {15000,15000,15000,15000,15000,15000,15000,15000,15000,15000} , {6000,6000,6000,6000,6000,6000,6000,6000,6000,6000} };
            return aarray[skill->GetPlayer ()->GetForm ()][skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 30000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
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
            return (float) (27 + skill->GetPlayer ()->GetPrayrangeplus ());
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
            skill->GetVictim ()->SetProbability (1.0 * skill->GetSection () == 1 ?
            skill->GetT0 () == 1 ?
            skill->GetT1 () == 0 ? 100 :
            skill->GetT1 () >= 10 ? 100 : 25 : 25 : 0);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetDeeppoision (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * skill->GetSection () == 4 ?
            skill->GetT0 () == 1 ?
            skill->GetT1 () == 2 ? 100 :
            skill->GetT1 () == 7 ? 100 : 25 : 25 : 0);
            skill->GetVictim ()->SetValue (0.1 * skill->GetT2 () + 1303);
            skill->GetVictim ()->SetHeal (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetForm ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (int) (player->GetBalls ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent2 (PlayerWrapper * player) const
        {
            return (int) (player->GetMagicattack ());
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
            return (float) (36.5 + skill->GetPlayer ()->GetPrayrangeplus ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
        }
#endif
    };
}
#endif