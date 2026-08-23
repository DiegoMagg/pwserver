//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69620  "Î¨Apex Armo"69621  "^ff5c00Î¨Apex Armo

^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff3.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Magic instrument
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Methods were developed by Advanced Wizards to unite three as one.
For weapons, gains an additional ^96f5ff120%%^ffffffWater, Fire, and Earth Defense
plus an additional ^96f5ff120%%^ffffff of physical damage. Every ^96f5ff3^ffffff seconds,
gains ^96f5ff11^ffffff Chi and increases the Critical Rate by ^96f5ff11%%^ffffff for ^96f5ff15^ffffff minutes."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL962
#define __CPPGEN_GNET_SKILL962
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill962:public Skill
    {
        public:
        enum
        { SKILL_ID = 962 };
        Skill962 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill962Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfap (50 + 32 * (skill->GetLevel () - 1));
                skill->SetDamage ((3 + (skill->GetLevel () - 1) * 13 + skill->GetT0 ()) * 10.2);
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
        Skill962Stub ():SkillStub (962)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"´ó·çÖä";
            nativename          = "´ó·çÖä";
            icon                = "´ó·çÖä.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 50032;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 0;
            allow_air           = 1;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "´ó·çÖä.sgc";
#endif
            range.type          = 2;
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
        virtual ~ Skill962Stub ()
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
            return 15000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 2000006,2000011,2000016,2000021,2000026,2000031,2000036,2000041,2000046,2000051 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 80,300,640,1160,1840,2780,4000,5620,7780,10640 };
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
            return (float) (15);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            35 + (skill->GetLevel () - 1) * 3,
            50 + 32 * (skill->GetLevel () - 1), (3 + (skill->GetLevel () - 1) * 13) * 10.2, 6 + skill->GetLevel () * 0.5);
            
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
            skill->GetVictim ()->SetTime (6000 + skill->GetLevel () * 500);
            skill->GetVictim ()->SetRatio (0.05 + skill->GetT0 () * 0.002);
            skill->GetVictim ()->SetSlowfly (1);
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
            return 10;
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