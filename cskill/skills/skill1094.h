//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10940  "Bloodpaint"10941  "^ffffffBloodpaint (Level %d)

^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1.8ã€€ ^ffcb4aseconds
^ffcb4aCastã€€^ffffff2.4ã€€ ^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff15.0ã€€ ^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffDaggers

^ffcb4aRequired Cultivationã€€^ffffffAware of Harmony
Channel shadowy magic into a vampiric aura that
empowers all allies within ^96f5ff10 ^ffffffmeters. While
empowered, the targets will be healed for
^96f5ff2%% ^ffffffof all damage dealt by their melee
attacks. Increase skill damage against monsters by ^96f5ff%d%%^ffffff. Lasts ^96f5ff%d ^ffffffseconds.

^a6caf0Only effective on Blademaster, Barbarian, Assassin, Seeker,
Duskblade, Edgerunner, and Wildwalker.
^a6caf0Only effective on melee weapons."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1094
#define __CPPGEN_GNET_SKILL1094
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1094:public Skill
    {
        public:
        enum
        { SKILL_ID = 1094 };
        Skill1094 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1094Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1800;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (56 + 35 * skill->GetLevel ()));
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
                return 2400;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (56 + 35 * skill->GetLevel ()));
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
        Skill1094Stub ():SkillStub (1094)
        {
            cls                 = 5;
#ifdef _SKILL_CLIENT
            name                = L"ÊÈÑªÖä";
            nativename          = "ÊÈÑªÖä";
            icon                = "ÎüÑª¹â»·.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 3;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1612;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (23749);
            }
#ifdef _SKILL_CLIENT
            effect              = "´Ì¿Í_ÎüÑª¹â»·.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(1098, 1));
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
        virtual ~ Skill1094Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 91,126,161,196,231,266,301,336,371,406 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 2400;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 34,39,44,49,54,59,64,69,74,79 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 17300,24600,34200,47000,64000,87000,118000,160000,239000,399000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (10);
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 56 + 35 * skill->GetLevel (), 900 + 90 * skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (900000 + 90000 * skill->GetLevel ());
            skill->GetVictim ()->SetRatio (0.02);
            skill->GetVictim ()->SetInchpsteal (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (1800000);
            skill->GetVictim ()->SetRatio (0.2);
            skill->GetVictim ()->SetEnhanceskilldamage3 (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (1800000);
            skill->GetVictim ()->SetRatio (0.2);
            skill->GetVictim ()->SetEnhanceskilldamage3 (1);
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
            return (float) (0);
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
            return (float) (0);
        }
#endif
    };
}
#endif