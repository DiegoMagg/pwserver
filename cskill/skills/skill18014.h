#ifndef __CPPGEN_GNET_SKILL18014
#define __CPPGEN_GNET_SKILL18014
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill18014:public Skill
    {
        public:
        enum
        { SKILL_ID = 18014 };
        Skill18014 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill18014Stub:public SkillStub
    {
        public:
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
        Skill18014Stub ():SkillStub (18014)
        {
            cls = 127;
            max_level = 10;
            name = L"WandoSpirit";
            nativename = "WandoSpirit";
            type = 4;
            apcost = 0;
            arrowcost = 0;
            apgain = 0;
            attr = 1;
            rank = 0;
            eventflag = 0;
            posdouble = 0;
            clslimit = 0;
            time_type = 1;
            showorder = 0;
            allow_land = 1;
            allow_air = 1;
            allow_water = 1;
            allow_ride = 0;
            auto_attack = 0;
            long_range = 0;
            restrict_corpse = 0;
            allow_forms = 3;
            effect = "wandospirit.sgc";
            range.type = 5;
            doenchant = true;
            dobless = false;
            commoncooldown = 0;
            commoncooldowntime = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill18014Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 0;
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
            return _snwprintf (buffer, length, format);
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
        }
        bool StateAttack (Skill * skill) const
        {
            int realm_level[100] = { 10,12,15,19,24,30,37,45,54,64,75,87,100,114,129,145,162,180,199,219,240,262,285,309,334,360,387,415,444,474,505,537,570,604,639,675,712,750,789,829,870,912,955,999,1044,1090,1137,1185,1234,1284,1335,1387,1440,1494,1549,1605,1662,1720,1779,1839,1900,1962,2025,2089,2154,2220,2287,2355,2424,2494,2565,2637,2710,2784,2859,2935,3012,3090,3169,3249,3330,3412,3495,3579,3664,3750,3837,3925,4014,4104,4195,4287,4380,4474,4569,4665,4762,4860,4959,5059 };
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (3600000);
            skill->GetVictim ()->SetValue (realm_level[skill->GetVictim()->GetRealm()]);
            skill->GetVictim ()->SetIncVigourWando (1);
            return true;
        }
        bool TakeEffect (Skill * skill) const
        {;
            return true;
        }
        float GetEffectdistance (Skill * skill) const
        {
            return (float) (0);
        }
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
        }
#endif
    };
}
#endif