//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
20  "Draw Blood"21  "^ffffffDraw Blood  (Level %d)

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff8.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff5
^ffcb4aWeaponã€€^ffffffMelee Weapon

^ffcb4aRequired Cultivationã€€^ffffffSpiritual Initiate
Inflict a bloody wound, dealing base physical
damage and causing the target to bleed for
^96f5ff15^ffffff seconds, suffering ^96f5ff%.1f^ffffff physical damage."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2
#define __CPPGEN_GNET_SKILL2
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2:public Skill
    {
        public:
        enum
        { SKILL_ID = 2 };
        Skill2 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * (-2.2 + 5.6 * skill->GetLevel ()));
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
                return 700;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (-2.2 + 5.6 * skill->GetLevel ()));
                skill->SetPlus (0);
                skill->SetRatio (0);
                skill->SetDamage (skill->GetAttack ());
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
        Skill2Stub ():SkillStub (2)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"´çÁ¦";
            nativename          = "´çÁ¦";
            icon                = "´çÁ¦.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 5;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1102;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (292);
            }
#ifdef _SKILL_CLIENT
            effect              = "´çÁ¦.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(1, 1));
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
        virtual ~ Skill2Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 3,9,14,20,25,31,37,42,48,53 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 700;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 8000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 3,8,13,18,23,28,33,38,43,48 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 100,800,2100,4100,7000,10900,16100,23000,32000,44100 };
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
            -2.2 + 5.6 * skill->GetLevel (), 5.9 * skill->GetLevel () * skill->GetLevel () + 126.7 * skill->GetLevel () + 40.5);
            
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
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetAmount (5.9 * skill->GetLevel () * skill->GetLevel () + 126.7 * skill->GetLevel () + 40.5);
            skill->GetVictim ()->SetBleeding (1);
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
            return (float) (11.7);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 3;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.2 + 0.05 * skill->GetLevel ());
        }
#endif
    };
}
#endif