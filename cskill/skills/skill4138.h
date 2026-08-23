//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
41380  "Î¨Relentless Drift"41381  "^ff5c00Î¨Relentless Drift

^ffcb4aRangeã€€ ^96f5ff28^ffffffã€€ ^ffcb4ameters
^ffcb4aManaã€€^96f5ff120^ffffff
^ffcb4aCastã€€^ffffff0.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffSaber
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Charge toward your enemy with a relentless attack,
dealing ^96f5ff30%% ^ffffffof base physical damage plus ^96f5ff2148 ^ffffffPhysical damage, and
stunning the target for ^96f5ff2 ^ffffffseconds. If the target dies within ^96f5ff20^ffffff
seconds, the cooldown will be instantly reset.

^00ff00Verdant Glyph Effect:@1
Stuns the target for ^96f5ff2 ^00ff00seconds.
^00ff00LV1-4: Cast Range is increased to ^96f5ff4 ^00ff00meters.
^00ff00LV5-7: Cast Range is increased to ^96f5ff6 ^00ff00meters.
^00ff00LV8-9: Cast Range is increased to ^96f5ff8 ^00ff00meters.
^00ff00LV10: Cast Range is increased to ^96f5ff10 ^00ff00meters.@1@2
Stuns the target for ^96f5ff2 ^00ff00seconds. Cast Range is increased to ^96f5ff%d ^00ff00meters@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4138
#define __CPPGEN_GNET_SKILL4138
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4138:public Skill
    {
        public:
        enum
        { SKILL_ID = 4138 };
        Skill4138 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4138Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * 120);
                skill->GetPlayer ()->SetPray (1);
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
        class State2:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (0.8 * 120);
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
        Skill4138Stub ():SkillStub (4138)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÎÞÇéÓÎ";
            nativename          = "Éñ¡¤ÎÞÇéÓÎ";
            icon                = "Éñ¡¤ÎÞÇéÓÎºìÂÌ.dds";
#endif
            max_level           = 1;
            type                = 8;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1007;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44878);
            }
#ifdef _SKILL_CLIENT
            effect              = "Ò¹Ó°_ÎÞÇéÓÎ_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
            feature             = 1001;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "Ê©·Å¾àÀëÔö¼Ó.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill4138Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (120);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 701;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
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
            return (float) (0 + 10);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            int _glyph_value = get_glyph(skill->GetLevel (), 4, 6, 8, 10);
            return (float) (28 + _glyph_value);
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
            return 1000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (2701);
            skill->GetVictim ()->SetDizzy (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (20701);
            skill->GetVictim ()->SetRatio (100);
            skill->GetVictim ()->SetAmount (0);
            skill->GetVictim ()->SetValue (4138);
            skill->GetVictim ()->SetDeathresetcd (1);
            
            skill->GetVictim ()->SetValue (0.3 * skill->GetT0 () + 2148);
            skill->GetVictim ()->SetPhysichurt (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttack ());
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
            return (float) ((28 + 0.9 * 5.5) + 10);
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