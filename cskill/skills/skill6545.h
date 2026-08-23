//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
65450  "●River Gulp"65451  "^8080ff●River Gulp　　　　　　　　　　　　

^ffcb4aRequires Snow Ape form
^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%.1f^ffffff
^ffcb4aChannel　^ffffff0.1　^ffcb4asecond
^ffcb4aCast　^ffffff1.4　^ffcb4aseconds
^ffcb4aCooldown　^ffffff5.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff30
^ffcb4aWeapon　^ffffffClubs, unarmed


^ffcb4aRequired Cultivation 　^ffffffMaster of Harmony
within ^96f5ff8^ffffff meters Deals ^96f5ff140%%^ffffff base physical
damage plus ^96f5ff%d^ffffff on enemies.
Grants yourself a Mark of Yang.

^ffa4a9Petrifaction. Immune to all negative effects while using the skill.
Cannot be canceled.

^f7dfa5Gains additional ^96f5ff%d^f7dfa5 Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6545
#define __CPPGEN_GNET_SKILL6545
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6545:public Skill
    {
        public:
        enum
        { SKILL_ID = 6545 };
        Skill6545 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6545Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 500;
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
                skill->GetPlayer()->SetDecmp(0.2 * (158.4));
                skill->GetPlayer()->SetFreemoveMonkey(1);
                skill->GetPlayer()->SetPray(1);
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
                skill->GetPlayer()->SetDecmp(0.8 * (158.4));
                skill->SetPlus(7285);
                skill->SetRatio(1.4);
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
        Skill6545Stub ():SkillStub (6545)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"�桤��������";
            nativename          = "�桤��������";
            icon                = "�ɶ�������.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 50;
            attr                = 1;
            rank                = 21;
            eventflag           = 0;
            is_senior           = 1;
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
            allow_forms         = 2;
            {
                restrict_weapons.push_back (69843);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 2;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(6488, 10));
            immune_casting      = 1;
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
        virtual ~ Skill6545Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (158);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1440;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 5000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 99 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
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
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (16000);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetMarcaYang (1);
            
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