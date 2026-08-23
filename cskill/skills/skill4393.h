//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
43930  "Î¨Monsoon"43931  "^ff5c00Î¨Monsoon

^ffcb4aRangeã€€^96f5ff18^ffffff ã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff401^ffffff
^ffcb4aChannelã€€^ffffff1.5^ffcb4aã€€seconds
^ffcb4aCastã€€^ffffff1.0^ffcb4aã€€second
^ffcb4aCooldownã€€^ffffff10.0^ffcb4aã€€seconds
^ffcb4aChi Gainedã€€^ffffff15
^ffcb4aWeaponã€€ ^ffffffScythe, Unarmed
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Conjure a powerful windstorm to buffet all enemies
in a ^96f5ff20^ffffff-meter long, ^96f5ff4^ffffff-meter wide rectangle toward your
target. Deals base magic attack plus ^96f5ff190%%^ffffff of weapon damage
plus ^96f5ff6803^ffffff as Metal damage. Guaranteed to be a Critical attack.
Generates a Thunder Charge.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: Damage increased by ^96f5ff5%% while in Reaper Form.
^ffeaabLv5-7: Damage increased by ^96f5ff10%% while in Reaper Form.
^ffeaabLv8-9: Damage increased by ^96f5ff15%% while in Reaper Form.
^ffeaabLv10: Damage increased by ^96f5ff20%% while in Reaper Form.@1@2
^ffeaabDamage increased by ^96f5ff%d%% while in Reaper Form.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4393
#define __CPPGEN_GNET_SKILL4393
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4393:public Skill
    {
        public:
        enum
        { SKILL_ID = 4393 };
        Skill4393 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4393Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (80);
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
                return 1002;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.05, 0.1, 0.15, 0.2);
                
                skill->GetPlayer ()->SetDecmp (321);
                skill->SetPlus (6803);
                skill->SetRatio (1.7);
                skill->GetPlayer ()->SetAddball (5);
                skill->SetGolddamage (skill->GetMagicattack () + (skill->GetPlayer ()->GetForm () == 1 ? skill->GetMagicattack () * _glyph_value : 0));
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
        Skill4393Stub ():SkillStub (4393)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÍûÔÂÓ½";
            nativename          = "Éñ¡¤ÍûÔÂÓ½";
            icon                = "ÉñÍûÔÂÓ½°×.dds";
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
            showorder           = 1006;
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
            effect              = "ÔÂÏÉ_ÍûÔÂÓ½_»÷ÖÐ.sgc";
#endif
            range.type          = 1;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ÕýÃæ×´Ì¬Ð§¹ûÔöÇ¿2.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill4393Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (401);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1002;
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
            return (float) (4);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (20);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (18);
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
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 30);
            skill->GetVictim ()->SetTime (5050);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetDechurt (1);
            return true;
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
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
        }
#endif
    };
}
#endif