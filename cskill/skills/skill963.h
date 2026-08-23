//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69630  "ΨApex Armo"69631  "^ff5c00ΨApex Armo

^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.2　^ffcb4aseconds
^ffcb4aCast　^ffffff0.3　^ffcb4aseconds
^ffcb4aCooldown　^ffffff3.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffUnarmed, Magic instrument
^ffcb4aGlyph Bonus　^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Methods were developed by Advanced Wizards to unite three as one.
For weapons, gains an additional ^96f5ff120%%^ffffffWater, Fire, and Earth Defense
plus an additional ^96f5ff120%%^ffffff of physical damage. Every ^96f5ff3^ffffff seconds,
gains ^96f5ff11^ffffff Chi and increases the Critical Rate by ^96f5ff11%%^ffffff for ^96f5ff15^ffffff minutes.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Gain extra ^96f5ff60%%^ffcb4a Metal Defense from Gear.
^ffcb4aLv5-7: Gain extra ^96f5ff80%%^ffcb4a Metal Defense from Gear.
^ffcb4aLv8-9:Gain extra ^96f5ff100%%^ffcb4a Metal Defense from Gear.
^ffcb4aLv10: Gain extra ^96f5ff120%%^ffcb4a Metal Defense from Gear.@1@2
^ffcb4aGain extra ^96f5ff%d%%^ffcb4a Metal Defense from Gear.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL963
#define __CPPGEN_GNET_SKILL963
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill963:public Skill
    {
        public:
        enum
        { SKILL_ID = 963 };
        Skill963 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill963Stub:public SkillStub
    {
        public:
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
                skill->GetPlayer ()->SetDecelfmp (35 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (150 + 10 * (skill->GetLevel () - 1));
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
        Skill963Stub ():SkillStub (963)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"�ط��";
            nativename          = "�ط��";
            icon                = "�ط��.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 150010;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "�ط��.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 0));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill963Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 35,38,41,44,47,50,53,56,59,62 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 3000013,3000018,3000023,3000028,3000033,3000038,3000043,3000048,3000053,3000058 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 420,820,1400,2180,3220,4600,6400,8820,12040,16360 };
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
            return (float) (0);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (), 35 + (skill->GetLevel () - 1) * 3, 150 + 10 * (skill->GetLevel () - 1), 5 + skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (8000 + skill->GetT1 () * 20);
            skill->GetVictim ()->SetRatio (0.05 + skill->GetLevel () * 0.01 + skill->GetT1 () * 0.00125);
            skill->GetVictim ()->SetDechurt (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (8000 + skill->GetT1 () * 20);
            skill->GetVictim ()->SetRatio (0.10);
            skill->GetVictim ()->SetFastattack (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (8000 + skill->GetT1 () * 20);
            skill->GetVictim ()->SetRatio (0.10);
            skill->GetVictim ()->SetIncdodge (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfstr ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfagi ());
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
            return (float) (40);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 20;
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