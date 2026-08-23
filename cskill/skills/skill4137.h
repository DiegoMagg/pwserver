//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
41370  "Î¨Relentless Drift"41371  "^ff5c00Î¨Relentless Drift

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

^ffcb4aGolden Glyph Effect:@1
Stuns the target for ^96f5ff2 ^ffcb4aseconds.
^ffcb4aLv1-4: Deals an additional ^96f5ff15%% ^ffcb4aof Weapon Attack plus ^96f5ff1200^ffcb4a.
^ffcb4aLv5-7: Deals an additional ^96f5ff20%% ^ffcb4aof Weapon Attack plus ^96f5ff1800^ffcb4a.
^ffcb4aLv8-9: Deals an additional ^96f5ff25%% ^ffcb4aof Weapon Attack plus ^96f5ff2400^ffcb4a.
^ffcb4aLv10: Deals an additional ^96f5ff30%% ^ffcb4aof Weapon Attack plus ^96f5ff3000^ffcb4a.@1@2
Stuns the target for ^96f5ff2 ^ffcb4aseconds.
Deals an additional ^96f5ff%d%% ^ffcb4aof Weapon Attack plus ^96f5ff%d^ffcb4a.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4137
#define __CPPGEN_GNET_SKILL4137
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4137:public Skill
    {
        public:
        enum
        { SKILL_ID = 4137 };
        Skill4137 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4137Stub:public SkillStub
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
        Skill4137Stub ():SkillStub (4137)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÎÞÇéÓÎ";
            nativename          = "Éñ¡¤ÎÞÇéÓÎ";
            icon                = "Éñ¡¤ÎÞÇéÓÎºì»Æ.dds";
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
            gfxfilename         = "Ö±½ÓÉËº¦Ôö¼Ó1.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill4137Stub ()
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
            return (float) (0);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (28);
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
            skill->GetVictim ()->SetValue (4137);
            skill->GetVictim ()->SetDeathresetcd (1);
            
            float _glyph_value = get_glyph(skill->GetLevel (), 0.15, 0.2, 0.25, 0.3);
            int _glyph_value_2 = get_glyph(skill->GetLevel (), 1200, 1800, 2400, 3000);
            
            skill->GetVictim ()->SetValue ((0.3 + _glyph_value) * skill->GetT0 () + (2148 + _glyph_value_2));
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
            return (float) (28 + 0.9 * 5.5);
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