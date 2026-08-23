//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
25610  "Moon Chant"25611  "^ffffffMoon Chant (Level %d)

^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.4　^ffcb4aseconds
^ffcb4aCast　^ffffff2.2　^ffcb4aseconds
^ffcb4aCooldown　^96f5ff%.1f　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff20
^ffcb4aWeapon　^ffffffSaber, Unarmed

^ffcb4aRequired Cultivation　^ffffffAware of Discord
Invoke a lunar blessing on your allies, lowering the Critical damage they take by ^96f5ff%d%%^ffffff
and increasing their skill damage against non-player targets by ^96f5ff%d%%^ffffff. Lasts ^96f5ff30^ffffff minutes.

^a6caf0The effect ends if you change instances."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2561
#define __CPPGEN_GNET_SKILL2561
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2561:public Skill
    {
        public:
        enum
        { SKILL_ID = 2561 };
        Skill2561 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2561Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 401;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (210 + 24 * skill->GetLevel ()));
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
                return 2201;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (210 + 24 * skill->GetLevel ()));
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
        Skill2561Stub ():SkillStub (2561)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"��ӽ";
            nativename          = "��ӽ";
            icon                = "��ӽ.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 1;
            rank                = 4;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1023;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44878);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 2;
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
        virtual ~ Skill2561Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 234,258,282,306,330,354,378,402,426,450 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 2201;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 30000,27000,24000,21000,18000,15000,12000,9000,6000,3000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 39,43,47,51,55,59,63,67,71,75 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 19926,24640,30222,36708,44265,53070,63270,75260,92310,146300 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (16);
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
            210 + 24 * skill->GetLevel (), 33 - 3.0 * skill->GetLevel (), 20 + 2 * skill->GetLevel (), 5 + skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (1800000);
            skill->GetVictim ()->SetRatio (10 + 2 * skill->GetLevel ());
            skill->GetVictim ()->SetCritdamagereduce (1);
            
            skill->GetVictim ()->SetProbability (1.0 * -1);
            skill->GetVictim ()->SetTime (1800000);
            skill->GetVictim ()->SetRatio (0.05 + 0.01 * skill->GetLevel ());
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
            return (float) (10);
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