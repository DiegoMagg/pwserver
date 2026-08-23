//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
13460  "Soulsever Minuet"13461  "^ffffffSoulsever Minuet  (Level %d)

^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.3 ^ffcb4a seconds
^ffcb4aCastã€€^ffffff0.7ã€€^ffcb4a seconds
^ffcb4aCooldownã€€^ffffff8.0ã€€^ffcb4a seconds
^ffcb4aWeaponã€€^ffffffBlade or Sword

^ffcb4aRequired Cultivationã€€^ffffffAware of Coalescence
Draw upon the power of the spirit realm,
giving your attacks the power to cut into
your enemies' souls for ^96f5ff10^ffffff minutes. Each
attack you make during this time has a ^96f5ff%d%%^ffffff
chance to apply the Spirit Bore status for ^96f5ff30^ffffff
seconds, causing your ^96f5ffGemini Slash^ffffff to deal an
additional ^96f5ff%.1f^ffffff Metal damage and reduce the
target's Attack and Defense Levels by ^96f5ff%d^ffffff for ^96f5ff3^ffffff minutes."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1346
#define __CPPGEN_GNET_SKILL1346
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1346:public Skill
    {
        public:
        enum
        { SKILL_ID = 1346 };
        Skill1346 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1346Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 267;
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
                return 733;
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
        Skill1346Stub ():SkillStub (1346)
        {
            cls                 = 8;
#ifdef _SKILL_CLIENT
            name                = L"ÅÍÁú½£¾÷";
            nativename          = "ÅÍÁú½£¾÷";
            icon                = "ÅÍÁú½£¾÷.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 5;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1116;
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
            effect              = "½£Áé_ÅÍÁú½£¾÷.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(1342, 1));
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
        virtual ~ Skill1346Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 15,20,25,30,35,40,45,50,55,60 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 733;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 8000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 49,53,57,61,65,69,73,77,81,85 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 47000,60200,76900,98300,125000,160000,215000,327000,484000,705000 };
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
            skill->GetLevel (),
            10 + 5 * skill->GetLevel (),
            30 + 2 * skill->GetLevel (),
            1.5 * 5.7 * skill->GetLevel () * skill->GetLevel () + 1.5 * 238.5 * skill->GetLevel () + 1.5 * 1960,
            skill->GetLevel ());
            
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
            skill->GetVictim ()->SetProbability (1.0 * 30 + 2 * skill->GetLevel ());
            skill->GetVictim ()->SetTime (600000);
            skill->GetVictim ()->SetRatio (1357);
            skill->GetVictim ()->SetAmount (skill->GetLevel ());
            skill->GetVictim ()->SetValue (1367);
            skill->GetVictim ()->SetAttackattachstate3 (1);
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