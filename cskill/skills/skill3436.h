//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
34360  "Î¨Thunderstrike"34361  "^ff5c00Î¨Thunderstrike

^ffcb4aRangeã€€^96f5ff27^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff414^ffffff
^ffcb4aChannelã€€^ffffff2.0^ffcb4aã€€seconds
^ffcb4aCastã€€^ffffff0.8^ffcb4aã€€second
^ffcb4aCooldownã€€^ffffff10.0^ffcb4aã€€seconds
^ffcb4aChi Gainedã€€^ffffff15
^ffcb4aWeaponã€€^ffffffScythe, Unarmed
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Call forth a mighty thunderstorm against all enemies
within ^96f5ff10^ffffff meters, dealing base magic damage plus ^96f5ff220%%^ffffff
of weapon damage plus ^96f5ff7190^ffffff as Metal damage. Causes
Internal Bleeding for ^96f5ff30^ffffff seconds; if afflicted
enemies drop below ^96f5ff25%%^ffffff of their maximum Health,
they will take an additional ^96f5ff25%%^ffffff base magic attack
plus ^96f5ff10390^ffffff as Metal damage. Generates a Thunder Charge.

^ff0000Sanguine Glyph Effect:@1
Decreases the threshold for Internal Bleeding if you have ^96f5ff2 Thunder Charges and 1 Ice Charge^ff0000.
^ff0000Lv1-4: Internal Bleeding triggers below ^96f5ff50%%^ff0000 of maximum Health.
^ff0000Lv5-7: Internal Bleeding triggers below ^96f5ff60%%^ff0000 of maximum Health.
^ff0000Lv8-9: Internal Bleeding triggers below ^96f5ff70%%^ff0000 of maximum Health.
^ff0000Lv10: Internal Bleeding triggers below ^96f5ff80%%^ff0000 of maximum Health.@1@2
If you have ^96f5ff2 Thunder Charges and 1 Ice Charge^ff0000,
Internal Bleeding triggers below ^96f5ff%d%%^ff0000 of maximum Health.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3436
#define __CPPGEN_GNET_SKILL3436
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3436:public Skill
    {
        public:
        enum
        { SKILL_ID = 3436 };
        Skill3436 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3436Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 2001;
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
                skill->GetPlayer ()->SetDecmp (83);
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
                skill->GetPlayer ()->SetDecmp (331);
                skill->SetPlus (7190);
                skill->SetRatio (2.2);
                skill->GetPlayer ()->SetAddball (5);
                skill->SetGolddamage (skill->GetMagicattack ());
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
        Skill3436Stub ():SkillStub (3436)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤À×öªÍò¾û";
            nativename          = "Éñ¡¤À×öªÍò¾û";
            icon                = "Éñ¡¤À×öªÍò¾ûºì.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 15;
            attr                = 2;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1009;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44879);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÔÂÏÉ_À×öªÍò¾û_»÷ÖÐ.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "¸ºÃæ×´Ì¬Ð§¹ûÔöÇ¿1.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3436Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (414);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 801;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 10000;
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
            return (float) (10);
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
            int _glyph_value = get_glyph(skill->GetLevel (), 50, 60, 70, 80);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetPerformerCurBalls() == 11 ? 100 : 0);
            skill->GetVictim ()->SetTime (31000);
            skill->GetVictim ()->SetRatio (skill->GetPerformerCurBalls() == 11 ? _glyph_value : 25);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (0.25 * skill->GetT0 () + 10390);
            skill->GetVictim ()->SetInternalinjury (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetMagicattack ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (int) (player->GetBalls ());
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
            return (float) (38 + skill->GetPlayer ()->GetPrayrangeplus ());
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