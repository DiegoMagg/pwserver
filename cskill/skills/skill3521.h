//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
35210  "ΨBlood Vow"35211  "^ff5c00ΨBlood Vow

^ffcb4aRange　^ffffffRanged Attack
^ffcb4aChannel　Charge
^ffcb4aCast　^ffffff0.6　^ffcb4aseconds
^ffcb4aCooldown　^ffffff2　^ffcb4aminutes
^ffcb4aWeapon　^ffffffRanged Weapons
^ffcb4aGlyph Bonus　^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Infuse a projectile with your own magical blood, then fire it
at an unsuspecting foe. Deals base physical damage plus ^96f5ff150%% ^ffffffof
weapon damage plus ^96f5ff4444^ffffff. Wounds the target for ^96f5ff30 ^ffffffseconds,
reducing maximum Health by ^96f5ff18%% ^ffffffand increasing the damage taken
by the target by ^96f5ff25%%^ffffff. This effect can coexist with Heaven's Flame.
This effect will cancel Extreme Poison.
After ^96f5ff9 ^ffffffseconds, the wound deals an additional
^96f5ff150%% ^ffffffof base physical damage plus ^96f5ff4444 ^ffffffas Metal damage. Never misses.

Costs ^ffffff1 ^a6caf0Spark.

^ffeaabArgent Glyph Effect:@1
Charge your weapon for up to ^96f5ff2.0^ffeaab seconds.
^ffeaabLv1-4: Increases damage by up to ^96f5ff20%% ^ffeaabof weapon damage
and reduces maximum Health by up to ^96f5ff20%%^ffeaab.
^ffeaabLv5-7: Increases damage by up to ^96f5ff24%% ^ffeaabof weapon damage
and reduces maximum Health by up to ^96f5ff24%%^ffeaab.
^ffeaabLv8-9: Increases damage by up to ^96f5ff28%% ^ffeaabof weapon damage
and reduces maximum Health by up to ^96f5ff28%%^ffeaab.
^ffeaabLv10: Increases damage by up to ^96f5ff32%% ^ffeaabof weapon damage
and reduces maximum Health by up to ^96f5ff32%%^ffeaab.@1@2
Charge your weapon for up to ^96f5ff2.0 ^ffeaabseconds to increase the damage by
up to ^96f5ff%d%% ^ffeaabof weapon damage and reduce maximum Health by up to ^96f5ff%d%%^ffeaab.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3521
#define __CPPGEN_GNET_SKILL3521
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3521:public Skill
    {
        public:
        enum
        { SKILL_ID = 3521 };
        Skill3521 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3521Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 2000;
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
                return 600;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.2, 0.24, 0.28, 0.32);
                
                skill->SetRatio (1.5 + (skill->GetCharging () >= 2000 ? _glyph_value : 0));
                skill->SetPlus (4444);
                //skill->SetDamage (skill->GetAttack ());
                skill->SetDamage (skill->GetCharging () >= 2000 ? skill->GetAttack () : skill->GetAttack () * 0.2);
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
        Skill3521Stub ():SkillStub (3521)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"��Ѫʸ";
            nativename          = "��Ѫʸ";
            icon                = "��Ѫʸ��.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 100;
            arrowcost           = 1;
            apgain              = 0;
            attr                = 7;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 3;
            showorder           = 2556;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (13);
            }
#ifdef _SKILL_CLIENT
            effect              = "Ѫ��.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
            gfxtarget           = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "����״̬Ч����ǿ2.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3521Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 600;
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
            static int aarray[10] = { 4000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 3000000,3000000,3000000,3000000,3000000,3000000,3000000,3000000,3000000,3000000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (8 + 0.4 * skill->GetLevel ());
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
            
            float _glyph_value = get_glyph(skill->GetLevel (), 0.2, 0.24, 0.28, 0.32);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (30000);
            skill->GetVictim ()->SetRatio (0.18 + (skill->GetT2 () >= 2000 ? _glyph_value : 0));
            skill->GetVictim ()->SetDechp (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (30000);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetDeeppoision (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetAmount (skill->GetT0 () *
            (1 +
            0.01 * (skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () >
            0 ? skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () : 0)));
            skill->GetVictim ()->SetThunder (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (1.5 * player->GetAttack () + 4444);
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttackdegree ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent2 (PlayerWrapper * player) const
        {
            return (float) (player->GetCharging ());
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
            return (float) (skill->GetPlayer ()->GetRange () + 10);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 12;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (3);
        }
#endif
    };
}
#endif