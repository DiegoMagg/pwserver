//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6355
#define __CPPGEN_GNET_SKILL6355
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6355:public Skill
    {
        public:
        enum
        { SKILL_ID = 6355 };
        Skill6355 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6355Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0);
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
                return 800;
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
                skill->GetPlayer ()->SetDecmp (0);
                skill->SetDamage (skill->GetAttack ());
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
                return 1;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill6355Stub ():SkillStub (6355)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"创世·怒马奔澜冷却光环效果";
            nativename          = "创世·怒马奔澜冷却光环效果";
            icon                = "创世怒马奔澜.dds";
#endif
            max_level           = 3;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 5;
            attr                = 1;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1201;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59830);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            is_movingcast       = true;
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
        virtual ~ Skill6355Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1001;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 4,9,14,14,14,14,14,14,14,14 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 200,1000,2400,2400,2400,2400,2400,2400,2400,2400 };
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
        skill->GetVictim ()->SetRatio (5092);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (5189);
        skill->GetVictim ()->SetSkillcooldown3 (1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (5139);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (5140);
        skill->GetVictim ()->SetSkillcooldown (1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (5094);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (5201);
        skill->GetVictim ()->SetSkillcooldown3 (1);
       
        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (5143);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (5144);
        skill->GetVictim ()->SetSkillcooldown (1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (5101);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (5219);
        skill->GetVictim ()->SetSkillcooldown3 (1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (5155);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (5156);
        skill->GetVictim ()->SetSkillcooldown (1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (5104);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (6342);
        skill->GetVictim ()->SetSkillcooldown3 (1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (5161);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (5162);
        skill->GetVictim ()->SetSkillcooldown (1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (5106);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (5548);
        skill->GetVictim ()->SetSkillcooldown3 (1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (5165);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (5166);
        skill->GetVictim ()->SetSkillcooldown (1);
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