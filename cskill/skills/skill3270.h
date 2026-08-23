//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
32700  "N/Aæ¤ç‰©3å‡é€?"32701  "N/Aæœ¨ä¼¤å®?"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3270
#define __CPPGEN_GNET_SKILL3270
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3270:public Skill
    {
        public:
        enum
        { SKILL_ID = 3270 };
        Skill3270 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3270Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1000;
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
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return 0;
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
                return 1000;
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
        Skill3270Stub ():SkillStub (3270)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"Ö²Îï3¼õËÙ";
            nativename          = "Ö²Îï3¼õËÙ";
            icon                = "";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "µØ¸¿.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
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
#endif
        }
        virtual ~ Skill3270Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 0;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (10);
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
            return (float) (10);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, const wchar_t * buffer, int length, const wchar_t * format) const
        {
            return 0;
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
            skill->GetVictim ()->SetProbability(1.0 * 100);
            skill->GetVictim ()->SetTime(11000);
            skill->GetVictim ()->SetRatio(0.5);
            skill->GetVictim ()->SetSlow(1);
            
            /*skill->GetVictim ()->SetProbability(1.0 * 100);
            skill->GetVictim ()->SetTime(31000);
            skill->GetVictim ()->SetRatio(0.95);
            skill->GetVictim ()->SetAmount(2);
            skill->GetVictim ()->SetDecRegionDMG2(1);*/
            
            /*skill->GetVictim ()->SetProbability(100);
            skill->GetVictim ()->SetTime(6000);
            skill->GetVictim ()->SetRatio(0.25);
            skill->GetVictim ()->SetDecattack(1);
            skill->GetVictim ()->SetProbability(100);
            skill->GetVictim ()->SetTime(6000);
            skill->GetVictim ()->SetRatio(0.25);
            skill->GetVictim ()->SetDecmagic(1);*/
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability(1.0 * 100);
            skill->GetVictim ()->SetTime(31000);
            skill->GetVictim ()->SetRatio(0.95);
            skill->GetVictim ()->SetAmount(2);
            skill->GetVictim ()->SetDecRegionDMG2(1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * 10);
            skill->GetVictim ()->SetTime (31000);
            skill->GetVictim ()->SetRatio (3);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (3);
            skill->GetVictim ()->SetLoaddmg4master (1);*/
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
            return (float) (7);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1);
        }
#endif
    };
}
#endif