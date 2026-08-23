//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
64660  "Golden Convolution"64661  "^ffffffGolden Convolutionã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€Level %d

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4asecond
^ffcb4aCastã€€^ffffff1.5ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff60.0ã€€^ffcb4aseconds

^ffcb4aWeaponã€€^ffffffClubs

^ffcb4aRequired Cultivationã€€^ffffffAware of Harmony
Fight like a dragon. Deals base attack damage plus
^96f5ff%.1f^ffffff physical damage, paralyzing target for ^96f5ff4^ffffff seconds.

^a6caf0Costs ^ffffff1 ^a6caf0Spark."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6466
#define __CPPGEN_GNET_SKILL6466
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6466:public Skill
    {
        public:
        enum
        { SKILL_ID = 6466 };
        Skill6466 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6466Stub:public SkillStub
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
                skill->GetPlayer()->SetDecmp(0.2 * ((9 * skill->GetLevel()) + 10.8));
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
        class State2 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 1500;
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
                skill->GetPlayer()->SetDecmp(0.8 * ((9 * skill->GetLevel()) + 10.8));
                skill->SetPlus(skill->GetLevel() == 1 ? 621.1 : skill->GetLevel() == 2 ? 952.1
                : skill->GetLevel() == 3   ? 1314.9
                : skill->GetLevel() == 4   ? 1709.5
                : skill->GetLevel() == 5   ? 2135.9
                : skill->GetLevel() == 6   ? 2594.1
                : skill->GetLevel() == 7   ? 3084.1
                : skill->GetLevel() == 8   ? 3605.9
                : skill->GetLevel() == 9   ? 4159.5
                : skill->GetLevel() == 10  ? 4744.9
                : 0);
                skill->SetRatio(0);
                skill->SetDamage(skill->GetAttack());
                skill->GetPlayer()->SetPerform(1);
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
        class State3 : public SkillStub::State
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
        Skill6466Stub ():SkillStub (6466)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"»ØÕ¶½ð¸ê";
            nativename          = "»ØÕ¶½ð¸ê";
            icon                = "»ØÕ¶½ð¸ê.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 3;
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
#ifdef _SKILL_CLIENT
            effect              = "2021ÑýºïÄÐÖÐ¼¶¼¼ÄÜ1_»÷ÖÐ.att";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
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
        virtual ~ Skill6466Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 19,28,37,46,55,64,73,82,91,100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1500;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 29,34,39,44,49,54,59,64,69,74 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 11800,17300,24600,34200,47000,64000,87000,118000,160000,239000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius(Skill *skill) const
        {
            return (float)(0);
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
            return (float)(skill->GetPlayer()->GetRange());
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (3050);
            skill->GetVictim ()->SetValue (2);
            skill->GetVictim ()->SetPalsy (1);
            
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