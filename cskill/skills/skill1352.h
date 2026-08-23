//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
13520  "Battousai"13521  "^ffffffBattousai  (Level %d)

^ffcb4aRangeã€€^96f5ff%.1f^ffffffã€€^ffcb4a meters
^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff0.2  ^ffcb4a seconds
^ffcb4aCastã€€^ffffff1.3ã€€^ffcb4a seconds
^ffcb4aCooldownã€€^ffffff4.0  ^ffcb4a seconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffBlade or Sword

^ffcb4aRequired Cultivationã€€^ffffffAware of Principle
Swing your weapon in a dazzling flourish, dealing
110%% of base physical damage plus %d%% of weapon
damage plus ^96f5ff%.1f^ffffff as Metal damage. Increases Threat."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1352
#define __CPPGEN_GNET_SKILL1352
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1352:public Skill
    {
        public:
        enum
        { SKILL_ID = 1352 };
        Skill1352 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1352Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 200;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (15.7 + 5.6 * skill->GetLevel ()));
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
                return 1300;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (15.7 + 5.6 * skill->GetLevel ()));
                skill->SetPlus (3.4 * skill->GetLevel () * skill->GetLevel () + 110.4 * skill->GetLevel () + 368.2);
                skill->SetRatio (0.09 * skill->GetLevel ());
                skill->SetGolddamage (1.1 * skill->GetAttack ());
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
        Skill1352Stub ():SkillStub (1352)
        {
            cls                 = 8;
#ifdef _SKILL_CLIENT
            name                = L"Á÷¹â½£Æø";
            nativename          = "Á÷¹â½£Æø";
            icon                = "Á÷¹â½£¾¢.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 7;
            rank                = 2;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1126;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (1);
            }
#ifdef _SKILL_CLIENT
            effect              = "½£Áé_Á÷¹â½£¾¢.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(1351, 1));
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
        virtual ~ Skill1352Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 21,26,32,38,43,49,54,60,66,71 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1300;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 4000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 19,24,29,34,39,44,49,54,59,64 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 4600,7700,11800,17300,24600,34200,47000,64000,87000,118000 };
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
            return (float) (15 + 0.5 * skill->GetLevel ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            15 + 0.5 * skill->GetLevel (),
            15.7 + 5.6 * skill->GetLevel (),
            10 * skill->GetLevel (),
            3.4 * skill->GetLevel () * skill->GetLevel () * 1.1 + 110.4 * skill->GetLevel () * 1.1 + 368.2 * 1.1);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 450 * skill->GetLevel ();
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
            return (float) (25);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 9;
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