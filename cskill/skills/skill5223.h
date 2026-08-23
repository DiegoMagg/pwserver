//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
52230  "Î¨Shield of Halo"52231  "^ff5c00Î¨Shield of Halo

^ffcb4aManaã€€^96f5ff158.7^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff90ã€€^ffcb4asecond(s)
^ffcb4aWeaponã€€^ffffffSword Shield, Unarmed
^ffcb4aGlyph Bonus    ^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€ã€€^ffffffCelestial Saint
Summons a shield wall around yourself, dealing damage once
per ^96f5ff2 ^ffffffseconds to targets within
^96f5ff12^ffffff meters equal to your base Physical Attack plus
^96f5ff8255^ffffff. Lasts ^96f5ff10^ffffff seconds.
This skill never lands a Critical Hit, but has twice the Critical Hit Rate to
deal ^96f5ffx1.5 ^ffffffdamage.

^FFFF00Used when inflicted with control effects.
^a6caf0Requires ^ffffff100^a6caf0  Shield Energy.

^ff0000Sanguine Glyph Effect:@1
^ff0000LV1-4: Required Shield Energy is reduced by ^96f5ff10^ff0000.
^ff0000LV5-7: Required Shield Energy is reduced by ^96f5ff15^ff0000.
^ff0000LV8-9: Required Shield Energy is reduced by ^96f5ff20^ff0000.
^ff0000LV10: Required Shield Energy is reduced by ^96f5ff25^ff0000. @1@2
Required Shield Energy is reduced by ^96f5ff%d^ff0000. @2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5223
#define __CPPGEN_GNET_SKILL5223
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5223:public Skill
    {
        public:
        enum
        { SKILL_ID = 5223 };
        Skill5223 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5223Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (0.2 * (158.7));
                skill->GetPlayer ()->SetPerform (1);
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
        Skill5223Stub ():SkillStub (5223)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Áé¶Ü-»·Îè";
            nativename          = "Éñ¡¤Áé¶Ü-»·Îè";
            icon                = "ÉñÁé¶Ü»·Îèºì.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 7;
            {
                restrict_weapons.push_back (59830);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5155, 1));
            pre_skills.push_back (std::pair < ID, int >(5156, 1));
            runes_attr          = 1;
            feature             = 1203;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ÏûºÄÔªÆø¼õÉÙ.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5223Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (158);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 90000,90000,90000,90000,90000,90000,90000,90000,90000,90000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
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
            return (float) (skill->GetPlayer ()->GetRange ());
        }
        int GetCostShieldEnergy (Skill * skill) const
        {
            int _glyph_value = get_glyph(skill->GetLevel (), 10, 15, 20, 25);
            return 100 - _glyph_value;
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            158.7,
            1429 + (181.3 * skill->GetLevel () - 181.3) + (skill->GetLevel () > 5 ? 31 * skill->GetLevel () - 31 : 0));
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 500 + 10 * skill->GetLevel ();
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (11000); // Time
            skill->GetVictim ()->SetRatio (12); // Range
            skill->GetVictim ()->SetAmount (12);
            skill->GetVictim ()->SetValue (18002);
            skill->GetVictim ()->SetShieldNew2 (1);
            
            
            // Define Icon / Gfx Buff
            skill->GetVictim ()->SetTime (11000); // Time
            skill->GetVictim ()->SetRatio (0); // Icon
            skill->GetVictim ()->SetAmount (189); // Buff
            skill->GetVictim ()->SetValue (1); // 2 or 1
            skill->GetVictim ()->SetInsertvstate (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetPureattack () + 8255);
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) ((player->GetAttackdegree () * 0.011 + 1.1) * (player->GetRand () < player->GetCrit () * 2 ? 1.5 : 1) * 1000);
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
            return (float) (0);
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