//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
42310  "唯Distant Cloud Skill Effect"42311  "4146 Skill Effect"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4231
#define __CPPGEN_GNET_SKILL4231
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4231:public Skill
    {
        public:
        enum
        { SKILL_ID = 4231 };
        Skill4231 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4231Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
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
                skill->GetPlayer ()->SetPray (1);
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
            bool Skip(Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill4231Stub ():SkillStub (4231)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"神邈云汉技能效果";
            nativename          = "神邈云汉技能效果";
            icon                = "无式.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
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
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "2寸力.sgc";
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
        virtual ~ Skill4231Stub ()
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
            static int aarray[10] = { 0,5,10,15,20,25,30,35,40,45 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0,300,1200,2800,5200,8400,12800,18600,26300,36500 };
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
            skill->GetVictim ()->SetTime (7701);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (2553);
            skill->GetVictim ()->SetCooldownaward (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7701);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (2740);
            skill->GetVictim ()->SetCooldownaward (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7701);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (2741);
            skill->GetVictim ()->SetCooldownaward (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7701);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (4136);
            skill->GetVictim ()->SetCooldownaward (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7701);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (4137);
            skill->GetVictim ()->SetCooldownaward (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7701);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (4138);
            skill->GetVictim ()->SetCooldownaward (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7701);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (4139);
            skill->GetVictim ()->SetCooldownaward (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7701);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (4140);
            skill->GetVictim ()->SetCooldownaward (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7701);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (4141);
            skill->GetVictim ()->SetCooldownaward (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7701);
            skill->GetVictim ()->SetValue (40);
            skill->GetVictim ()->SetIncsmite (1);
            
            
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
            return (float) (1.0);
        }
#endif
    };
}
#endif