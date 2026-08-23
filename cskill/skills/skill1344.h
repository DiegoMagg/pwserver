//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
13440  "Northern Sky Waltz"13441  "^ffffffNorthern Sky Waltz  (Level %d)

^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.2 ^ffcb4a seconds
^ffcb4aCastã€€^ffffff0.8ã€€^ffcb4a seconds
^ffcb4aCooldownã€€^ffffff8.0ã€€^ffcb4a seconds
^ffcb4aWeaponã€€^ffffffBlade or Sword

^ffcb4aRequired Cultivationã€€^ffffffSpiritual Adept
Call upon the freezing winds of the northern reaches,
empowering your attacks for ^96f5ff10^ffffff minutes. Each attack
you make during this time has a ^96f5ff%d%%^ffffff chance to apply
the Eye of the Northern Sky status for ^96f5ff10^ffffff seconds,
causing your ^96f5ffStaggering Strike^ffffff to deal an
additional ^96f5ff%.1f^ffffff damage, freeze the target for ^96f5ff3^ffffff seconds,
and reduce the target's Defense Level by ^96f5ff%d^ffffff for ^96f5ff8^ffffff seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1344
#define __CPPGEN_GNET_SKILL1344
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1344:public Skill
    {
        public:
        enum
        { SKILL_ID = 1344 };
        Skill1344 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1344Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.5 * (10 + 5 * skill->GetLevel ()));
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
                return 800;
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
                skill->GetPlayer ()->SetDecmp (0.5 * (10 + 5 * skill->GetLevel ()));
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
        Skill1344Stub ():SkillStub (1344)
        {
            cls                 = 8;
#ifdef _SKILL_CLIENT
            name                = L"ÐþÎä½£¾÷";
            nativename          = "ÐþÎä½£¾÷";
            icon                = "ÐþÎä½£¾÷.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 1;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1111;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 1;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (1);
            }
#ifdef _SKILL_CLIENT
            effect              = "½£Áé_ÐþÎä½£¾÷.sgc";
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
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill1344Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 15,20,25,30,35,40,45,50,55,60 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 800;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 8000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 13,18,23,28,33,38,43,48,53,58 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 2100,4100,7000,10900,16100,23000,32000,44100,60200,81800 };
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
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            10 + 5 * skill->GetLevel (),
            10 + 2 * skill->GetLevel (),
            1.5 * 4.3 * skill->GetLevel () * skill->GetLevel () + 1.5 * 72.2 * skill->GetLevel () + 1.5 * 55,
            10 + skill->GetLevel ());
            
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
            skill->GetVictim ()->SetProbability (1.0 * 10 + 2 * skill->GetLevel ());
            skill->GetVictim ()->SetTime (600000);
            skill->GetVictim ()->SetRatio (1351);
            skill->GetVictim ()->SetAmount (skill->GetLevel ());
            skill->GetVictim ()->SetValue (1365);
            skill->GetVictim ()->SetAttackattachstate1 (1);
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
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
        }
#endif
    };
}
#endif