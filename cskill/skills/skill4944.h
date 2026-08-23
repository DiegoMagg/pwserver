//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
49440  "Wisp of Shadow"49441  "^ffffffWisp of Shadow   　　　　　　　　　　　　Level %d

^ffcb4aMana　^96f5ff%.1f^ffffff
^ffcb4aChannel　^ffffff0.1　^ffcb4asecond(s)
^ffcb4aCast　^ffffff0.5　^ffcb4asecond(s)
^ffcb4aCooldown　^ffffff60.0　^ffcb4asecond(s)
^ffcb4aWeapon　^ffffffFirearm, Unarmed

^ffcb4aRequired Cultivation　^ffffffAware of Discord
Increases your Movement Speed by
^96f5ff50%%^ffffff, and grants immunity against Movement control for ^96f5ff%.1f^ffffff seconds.

^a6caf0Costs ^ffffff30^a6caf0 Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4944
#define __CPPGEN_GNET_SKILL4944
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4944:public Skill
    {
        public:
        enum
        { SKILL_ID = 4944 };
        Skill4944 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4944Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 100;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (61.2 + (9 * skill->GetLevel ())));
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
                return 500;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (61.2 + (9 * skill->GetLevel ())));
                skill->GetPlayer ()->SetPerform (1);
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
        Skill4944Stub ():SkillStub (4944)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"������Ӱ";
            nativename          = "������Ӱ";
            icon                = "������Ӱ.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 30;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 4;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1012;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (59831);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
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
        virtual ~ Skill4944Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 70,79,88,97,106,115,124,133,142,151 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 735;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 39,44,49,54,59,64,69,74,79,84 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 19926,25992,33370,42240,53070,66080,81600,129060,235410,411520 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 61.2 + (9 * skill->GetLevel ()));
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
            skill->GetVictim ()->SetTime (skill->GetLevel () == 1 ? 4600 : 4600 + (600 * skill->GetLevel ()));
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetSpeedup (1);
            skill->GetVictim ()->SetTime (skill->GetLevel () == 1 ? 4600 : 4600 + (600 * skill->GetLevel ()));
            skill->GetVictim ()->SetFreemove (1);
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
            return (float) (5);
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