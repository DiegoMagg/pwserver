//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
64830  "Flame of War"64831  "^ffffffFlame of Warã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ Level %d

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4asecond
^ffcb4aCastã€€^ffffff1.1ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff5
^ffcb4aWeaponã€€^ffffffClubs

^ffcb4aRequired Cultivationã€€^ffffffAware of Discord
Swing the club before thrusting, dealing base attack damage
plus ^96f5ff%.1f^ffffff physical damage, dodging negative effect
or damage ^96f5ffonce^ffffff in ^96f5ff8^ffffff seconds,
and granting yourself a Mark of Yin. The mark lasts for up to ^96f5ff15^ffffff seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6483
#define __CPPGEN_GNET_SKILL6483
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6483:public Skill
    {
        public:
        enum
        { SKILL_ID = 6483 };
        Skill6483 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6483Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 100;
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
                skill->GetPlayer()->SetDecmp(0.2 * ((9 * skill->GetLevel()) + 70.2));
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
                skill->SetSection (1);
                skill->GetPlayer()->SetDecmp(0.4 * ((9 * skill->GetLevel()) + 70.2));
                skill->SetPlus(0.4 * (skill->GetLevel() == 1 ? 2446.9 : skill->GetLevel() == 2 ? 2757.1
                : skill->GetLevel() == 3   ? 3081.9
                : skill->GetLevel() == 4   ? 3421.3
                : skill->GetLevel() == 5   ? 3775.3
                : skill->GetLevel() == 6   ? 4143.9
                : skill->GetLevel() == 7   ? 4527.1
                : skill->GetLevel() == 8   ? 4924.9
                : skill->GetLevel() == 9   ? 5337.3
                : skill->GetLevel() == 10  ? 5764.3
                : 0));
                skill->SetRatio(0);
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
                return 850;
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
                skill->GetPlayer()->SetDecmp(0.4 * ((9 * skill->GetLevel()) + 70.2));
                skill->SetPlus(0.6 * (skill->GetLevel() == 1 ? 2446.9 : skill->GetLevel() == 2 ? 2757.1
                : skill->GetLevel() == 3   ? 3081.9
                : skill->GetLevel() == 4   ? 3421.3
                : skill->GetLevel() == 5   ? 3775.3
                : skill->GetLevel() == 6   ? 4143.9
                : skill->GetLevel() == 7   ? 4527.1
                : skill->GetLevel() == 8   ? 4924.9
                : skill->GetLevel() == 9   ? 5337.3
                : skill->GetLevel() == 10  ? 5764.3
                : 0));
                skill->SetRatio(0);
                skill->SetDamage(skill->GetAttack());
                skill->GetPlayer ()->SetPerform (0);
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
        Skill6483Stub ():SkillStub (6483)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"µ´·é»ð";
            nativename          = "µ´·é»ð";
            icon                = "µ´·é»ð.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 5;
            attr                = 1;
            rank                = 4;
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
            effect              = "ÑýºïÄÐ_Ð¡¼¼ÄÜ3_Ê©·ÅÂä_»÷ÖÐ_01.att";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = true;
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
            statestub.push_back (new State4 ());
            statestub.push_back (new State5 ());
#endif
        }
        virtual ~ Skill6483Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 79,86,93,100,108,115,122,129,136,144 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 39,43,47,51,55,59,63,67,71,75 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 8600,11300,14700,18900,24300,31200,42600,61200,86900,140700 };
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
            return 100;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (16000);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetMarcaYin (1);
            
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetFeMonkey (1);
            
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