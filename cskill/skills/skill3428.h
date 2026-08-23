//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
34280  "Î¨Deafening Thunder"34281  "^ff5c00Î¨Deafening Thunder

^ffcb4aRangeã€€^96f5ff9^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff355^ffffff
^ffcb4aChannelã€€^ffffff1.5^ffcb4aã€€seconds
^ffcb4aCastã€€^ffffff1.0^ffcb4aã€€second
^ffcb4aCooldownã€€^ffffff10.0^ffcb4aã€€seconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffScythe, Unarmed
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Split the air with your scythe, blasting all enemies within
^96f5ff15^ffffff meters with a deafening clap of thunder. Deals base magic
damage plus ^96f5ff170%%^ffffff of weapon damage plus ^96f5ff6803^ffffff as Metal damage.
Guaranteed to be a Critical attack. Generates a Thunder Charge.

^00ff00Verdant Glyph Effect:@1
^00ff00Deals additional damage to non-player targets
^00ff00Lv1-4: Deals an additional ^96f5ff40%%^00ff00 of weapon damage to non-player targets.
^00ff00Lv5-7: Deals an additional ^96f5ff60%%^00ff00 of weapon damage to non-player targets.
^00ff00Lv8-9: Deals an additional ^96f5ff80%%^00ff00 of weapon damage to non-player targets.
^00ff00Lv10: Deals an additional ^96f5ff100%%^00ff00 of weapon damage to non-player targets.@1@2
^00ff00Deals an additional ^96f5ff%d%%^00ff00 of weapon damage to non-player targets.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3428
#define __CPPGEN_GNET_SKILL3428
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3428:public Skill
    {
        public:
        enum
        { SKILL_ID = 3428 };
        Skill3428 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3428Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1450;
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
                skill->GetPlayer ()->SetDecmp (71);
                skill->GetPlayer ()->SetForceCriticalAttack (1);
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
                return 1001;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.4, 0.6, 0.8, 1);
                
                skill->GetPlayer ()->SetDecmp (284);
                skill->SetPlus (6803);
                skill->SetRatio (1.7 + (skill->GetTarget ()->GetCls () == -1 ? _glyph_value : 0));
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
        Skill3428Stub ():SkillStub (3428)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÃùÒôÓ½";
            nativename          = "Éñ¡¤ÃùÒôÓ½";
            icon                = "Éñ¡¤ÃùÒôÓ½ÂÌ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 2;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1005;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (44879);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÔÂÏÉ_ÃùÒ÷Ó½_»÷ÖÐ.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "Ö±½ÓÉËº¦Ôö¼Ó2.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3428Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (355);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1001;
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
            return (float) (15);
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
            return (float) (12);
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
            skill->GetVictim ()->SetTime (11001);
            skill->GetVictim ()->SetRatio (skill->GetT0 () == 11 ? 0.54 : 0.25);
            skill->GetVictim ()->SetSlowattack (1);
            skill->GetVictim ()->SetProbability (1.0 * -1);
            skill->GetVictim ()->SetTime (7001);
            skill->GetVictim ()->SetRatio (skill->GetT0 () == 11 ? 0.25 : 0.14);
            skill->GetVictim ()->SetSlowpray (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetBalls ());
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
            return (float) (10);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 0;
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