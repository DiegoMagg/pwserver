//buff 1 boss - Reduzir os danos de sangramento (ou dano negativo) em 10x, dura??o 24hrs
//lvl 1 = Reduzir os danos de sangramento (ou dano negativo) em 4x, dura??o 24hrs
//lvl 2 = Reduzir os danos de sangramento (ou dano negativo) em 4x, + dps dura??o 24hrs
//lvl 3 = Reduzir os danos de sangramento (ou dano negativo) em 4x, dura??o 24hrs + imunes 5min
//lvl 4 = Reduzir os danos de sangramento (ou dano negativo) em 4x, + dps dura??o 24hrs + imunes 5min
//lvl 5 a 10 = Reduzir os danos de sangramento (ou dano negativo) em 0.4 + (4-level) (exemplo lvl 5 == 0.5, lvl 6 == 0.6, lvl 7 == 0.7, lvl 8 == 0.8, lvl9 == 0.9, lvl10 == 1.0), + dps dura??o 24hrs + imunes 5min
#ifndef __CPPGEN_GNET_SKILL50003
#define __CPPGEN_GNET_SKILL50003
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill50003:public Skill
    {
        public:
        enum
        { SKILL_ID = 50003 };
        Skill50003 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill50003Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 350;
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
                return 450;
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
        Skill50003Stub ():SkillStub (50003)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"2级城战BOSS1技能";
            nativename          = "2级城战BOSS1技能";
            icon                = "";
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
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "城战boss升级.sgc";
#endif
            range.type          = 5;
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
        virtual ~ Skill50003Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 450;
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
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (86400000);
            skill->GetVictim()->SetRatio(skill->GetLevel() >= 1 && skill->GetLevel() <= 4 ? 0.6 : 1.0 - skill->GetLevel() * 0.1);
            skill->GetVictim ()->SetImpairDamageAll (1);
            
            skill->GetVictim ()->SetProbability (1.0 * skill->GetLevel () == 2 ? 100 : skill->GetLevel () > 3 ? 100 : 0);
            skill->GetVictim ()->SetTime (86400000);
            skill->GetVictim ()->SetRatio (0.85);
            skill->GetVictim ()->SetValue (86400000);
            skill->GetVictim ()->SetDecnormalattackhurt (1);
            
            skill->GetVictim ()->SetProbability (1.0 * skill->GetLevel () >= 3 ? 100 : 0);
            skill->GetVictim ()->SetTime (300000);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetImmunephysical2 (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetLevel () >= 3 ? 100 : 0);
            skill->GetVictim ()->SetTime (300000);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetImmunewood2 (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetLevel () >= 3 ? 100 : 0);
            skill->GetVictim ()->SetTime (300000);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetImmunemetal2 (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetLevel () >= 3 ? 100 : 0);
            skill->GetVictim ()->SetTime (300000);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetImmunefire2 (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetLevel () >= 3 ? 100 : 0);
            skill->GetVictim ()->SetTime (300000);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetImmunewater2 (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetLevel () >= 3 ? 100 : 0);
            skill->GetVictim ()->SetTime (300000);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetImmunesoil2 (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetLevel () >= 3 ? 100 : 0);
            skill->GetVictim ()->SetTime (300000);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetImmunesoil2 (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetLevel () >= 3 ? 100 : 0);
            skill->GetVictim ()->SetTime (300000);
            skill->GetVictim ()->SetImmunneDirect (1);
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
            return (float) (0);
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