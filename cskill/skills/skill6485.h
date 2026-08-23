//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
64850  "Iron Stallion"64851  "^ffffffIron Stallion ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ Level %d

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff2.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff120.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffClubs

^ffcb4aRequired Cultivation ã€€^ffffffAware of Transcendence
Sweep thrice, dealing within ^96f5ff8^ffffff meters
^96f5ff230%%^ffffff base physical damage plus ^96f5ff%.1f^ffffff to enemies.
Each hit has a ^96f5ff50%%^ffffff chance of removing
^96f5ff1^ffffff beneficial effect from the target.

^a6caf0Costs ^ffffff2 ^a6caf0Sparks."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6485
#define __CPPGEN_GNET_SKILL6485
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6485:public Skill
    {
        public:
        enum
        { SKILL_ID = 6485 };
        Skill6485 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6485Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 200;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->GetPlayer()->SetDecmp(0.2 * ((9 * skill->GetLevel()) + 79.2));
                skill->GetPlayer()->SetPray(1);
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 1;
            }
            bool Skip(Skill *skill) const
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
                return 50;
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
                skill->GetPlayer ()->SetPerform (2);
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
        class State3 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 283;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->SetSection (1);
                skill->GetPlayer()->SetDecmp(0.2 * ((9 * skill->GetLevel()) + 79.2));
                skill->SetPlus(0.3 * (skill->GetLevel() == 1 ? 3081.9 : skill->GetLevel() == 2 ? 3791.3
                : skill->GetLevel() == 3   ? 4202.5
                : skill->GetLevel() == 4   ? 4631.3
                : skill->GetLevel() == 5   ? 5077.7
                : skill->GetLevel() == 6   ? 5541.7
                : skill->GetLevel() == 7   ? 6023.3
                : skill->GetLevel() == 8   ? 6522.5
                : skill->GetLevel() == 9   ? 7039.3
                : skill->GetLevel() == 10  ? 7573.7
                : 0));
                skill->SetRatio(0.3 * (2.3));
                skill->SetDamage(skill->GetAttack());
                skill->GetPlayer()->SetPerform(0);
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State4 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 683;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->SetSection (2);
                skill->GetPlayer()->SetDecmp(0.2 * ((9 * skill->GetLevel()) + 79.2));
                skill->SetPlus(0.3 * (skill->GetLevel() == 1 ? 3081.9 : skill->GetLevel() == 2 ? 3791.3
                : skill->GetLevel() == 3   ? 4202.5
                : skill->GetLevel() == 4   ? 4631.3
                : skill->GetLevel() == 5   ? 5077.7
                : skill->GetLevel() == 6   ? 5541.7
                : skill->GetLevel() == 7   ? 6023.3
                : skill->GetLevel() == 8   ? 6522.5
                : skill->GetLevel() == 9   ? 7039.3
                : skill->GetLevel() == 10  ? 7573.7
                : 0));
                skill->SetRatio(0.3 * (2.3));
                skill->SetDamage(skill->GetAttack());
                skill->GetPlayer()->SetPerform(0);
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State5 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 984;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->SetSection (3);
                skill->GetPlayer()->SetDecmp(0.2 * ((9 * skill->GetLevel()) + 79.2));
                skill->SetPlus(0.4 * (skill->GetLevel() == 1 ? 3081.9 : skill->GetLevel() == 2 ? 3791.3
                : skill->GetLevel() == 3   ? 4202.5
                : skill->GetLevel() == 4   ? 4631.3
                : skill->GetLevel() == 5   ? 5077.7
                : skill->GetLevel() == 6   ? 5541.7
                : skill->GetLevel() == 7   ? 6023.3
                : skill->GetLevel() == 8   ? 6522.5
                : skill->GetLevel() == 9   ? 7039.3
                : skill->GetLevel() == 10  ? 7573.7
                : 0));
                skill->SetRatio(0.4 * (2.3));
                skill->SetDamage(skill->GetAttack());
                skill->GetPlayer()->SetPerform(0);
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State6 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 0;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
        Skill6485Stub ():SkillStub (6485)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"¶ôÌúÂí";
            nativename          = "¶ôÌúÂí";
            icon                = "¶ôÌúÂí.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 6;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1501;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (69843);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÑýºïÄÐ_Ð¡¼¼ÄÜ3_Ê©·ÅÂä_»÷ÖÐ_01.att";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(6483, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
            statestub.push_back (new State4 ());
            statestub.push_back (new State5 ());
            statestub.push_back (new State6 ());
#endif
        }
        virtual ~ Skill6485Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 88,95,102,109,117,124,131,138,145,153 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 120000,120000,120000,120000,120000,120000,120000,120000,120000,120000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 59,62,65,68,71,74,77,80,83,86 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 87000,104000,125000,151000,181000,239000,327000,440000,586000,773000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius(Skill *skill) const
        {
            return (float)(8);
        }
        float GetAttackdistance(Skill *skill) const
        {
            return (float)(0);
        }
        float GetAngle(Skill *skill) const
        {
            return (float)(1 - 0.0111111 * (0));
        }
        float GetPraydistance(Skill *skill) const
        {
            return (float)(skill->GetPlayer()->GetRange() + 8);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction(Skill *skill, wchar_t *buffer, int length, wchar_t *format) const
        {
            return _snwprintf(buffer, length, format);
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity(Skill *skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPlayer ()->GetCls () == -1 ? 0 : 50));
            skill->GetVictim ()->SetClearbuffRandom (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool TakeEffect(Skill *skill) const
        {;
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetEffectdistance(Skill *skill) const
        {
            return (float)(skill->GetPlayer()->GetRange());
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed(Skill *skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate(Skill *skill) const
        {
            return (float)(1.0);
        }
#endif
    };
}
#endif