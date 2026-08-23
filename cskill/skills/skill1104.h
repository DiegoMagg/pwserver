//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
11040  "Empowered Vigor"11041  "^ffffffEmpowered Vigorã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€Level %d

^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.8ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff2.2ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffSoulsphere

^ffcb4aRequired Cultivationã€€^ffffffAware of Discord
Empower the target's soul to improve their healing ability.
Immediately end the cooldown of the target's Guardian Charms.

Empowered Vigor shares a ^96f5ff90^ffffff second cooldown with Diminished Vigor."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1104
#define __CPPGEN_GNET_SKILL1104
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1104:public Skill
    {
        public:
        enum
        { SKILL_ID = 1104 };
        Skill1104 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1104Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 3500;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (200 + 25 * skill->GetLevel ()));
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 25 - 2 * skill->GetLevel ();
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
                return 1000;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (200 + 25 * skill->GetLevel ()));
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
        Skill1104Stub ():SkillStub (1104)
        {
            cls                 = 2;
#ifdef _SKILL_CLIENT
            name                = L"ÉúÃüÕÀ·Å";
            nativename          = "ÉúÃüÕÀ·Å";
            icon                = "×£¸£¼ÓÉî.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 4;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1715;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (25333);
            }
#ifdef _SKILL_CLIENT
            effect              = "Î×Ê¦_¾£¼¬¹â»·.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 1;
            commoncooldowntime  = 90000;
            pre_skills.push_back (std::pair < ID, int >(1129, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill1104Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 225,250,275,300,325,350,375,400,425,450 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 2200;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 90000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 44,48,52,56,60,64,68,72,76,80 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 34200,44100,56600,72400,92400,118000,151000,192000,295000,440000 };
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
            return (float) (19.5 + 0.9 * skill->GetLevel ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            19.5 + 0.9 * skill->GetLevel (),
            200 + 25 * skill->GetLevel (), 10 + skill->GetLevel (), 15 + 1.5 * skill->GetLevel (), 0.3 * skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (91000);
            skill->GetVictim ()->SetRatio (0.1 + 0.01 * skill->GetLevel ());
            skill->GetVictim ()->SetAmount (0.15 + 0.015 * skill->GetLevel ());
            skill->GetVictim ()->SetValue (300 * skill->GetLevel ());
            skill->GetVictim ()->SetDeepenbless (1);
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
            return (float) (19.5 + 0.9 * skill->GetLevel () + 5.5 * 3);
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