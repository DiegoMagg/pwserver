//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
19810  "○Imbued Tiger Form"19811  "^8080ff○Tiger Form
^96f5ff
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffffInstant
^ffcb4aCooldown　^ffffff2.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffAxe, Poleaxe, Hammer or Polehammer, Unarmed

^ffcb4aRequired Cultivation　^ffffffAware of the Void
Transform into your white tiger form,
increasing maximum Health by ^96f5ff50%% ^ffffffand speed
by ^96f5ff%d%%^ffffff. Inherit current Health by a certain percentage.

^a6caf0Shares a cooldown with Panda Form.
^a6caf0Used when inflicted with control effects.

^d618e7Demon version shields you for ^96f5ff6 ^d618e7seconds, reducing attackers' Critical Rate by ^96f5ff5%%^d618e7."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL981
#define __CPPGEN_GNET_SKILL981
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill981:public Skill
    {
        public:
        enum
        { SKILL_ID = 981 };
        Skill981 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill981Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (45 + (skill->GetLevel () - 1) * 1);
                skill->GetPlayer ()->SetDecelfap (150 + skill->GetLevel () * 8);
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
        Skill981Stub ():SkillStub (981)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"̫��";
            nativename          = "̫��";
            icon                = "̫��.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 158008;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 6;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "̫��.sgc";
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
        virtual ~ Skill981Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 45,46,47,48,49,50,51,52,53,54 };
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
            static int aarray[10] = { 415,420,425,430,435,440,445,450,455,460 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 560,1040,1680,2560,3720,5260,7300,10000,13620,18480 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (20);
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
            skill->GetLevel (),
            45 + (skill->GetLevel () - 1) * 1,
            150 + skill->GetLevel () * 8, 5 + skill->GetLevel (), 5 + skill->GetLevel () * 1, 5 + skill->GetLevel () * 1);
            
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
            skill->GetVictim ()->SetTime (5000 + skill->GetLevel () * 1000);
            skill->GetVictim ()->SetRatio (0.05 + skill->GetLevel () * 0.01 + skill->GetT0 () * 0.0025);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetSpeedup2 (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (5000 + skill->GetLevel () * 1000);
            skill->GetVictim ()->SetValue (50);
            skill->GetVictim ()->SetFasthpgen (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetValue (5);
            skill->GetVictim ()->SetInccritresistance (1);
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