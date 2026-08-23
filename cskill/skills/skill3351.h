//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
33510  "V Boundary Monster Transform"33511  "Quest, Monster Transform"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3351
#define __CPPGEN_GNET_SKILL3351
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3351:public Skill
    {
        public:
        enum
        { SKILL_ID = 3351 };
        Skill3351 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3351Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
        Skill3351Stub ():SkillStub (3351)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"���ؾ���������";
            nativename          = "���ؾ���������";
            icon                = "";
#endif
            max_level           = 10;
            type                = 4;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 0;
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
#endif
        }
        virtual ~ Skill3351Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 500;
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
            return (float) (30);
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
        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (skill->GetLevel () == 1 ? 1 : 2);
        skill->GetVictim ()->SetValue (9); // Shape Type
        skill->GetVictim ()->SetAmount (2);
        skill->GetVictim ()->SetNewValue (3352); //
        skill->GetVictim ()->SetNewValue2 (3353); // 
        skill->GetVictim ()->SetNewValue3 (0); // 
        skill->GetVictim ()->SetNewShapeAndSkills (1);      

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetTime (skill->GetLevel () == 10 ? 3100 : 500);
        skill->GetVictim ()->SetShowicon (1);
        skill->GetVictim ()->SetInvincible (1);
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
            return (float) (40);
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