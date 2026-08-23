//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
52900  "Opportunistic Wait"52901  "^ff0000Opportunistic Wait 　Level %d
^ffffffEnters Stealth state.
Cooldown for ^96f5ff%d^ffffff minutes. Available when out of combat.
Leaves stealth upon moving or engaging in combat. "*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5290
#define __CPPGEN_GNET_SKILL5290
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5290:public Skill
    {
        public:
        enum
        { SKILL_ID = 5290 };
        Skill5290 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5290Stub:public SkillStub
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
                return 1;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill5290Stub ():SkillStub (5290)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"�����Ż�";
            nativename          = "�����Ż�";
            icon                = "�����Ż�.dds";
#endif
            max_level           = 5;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 16;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            notuse_in_combat    = 1;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 15;
#ifdef _SKILL_CLIENT
            effect              = "��.sgc";
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
#endif
        }
        virtual ~ Skill5290Stub ()
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
            static int aarray[10] = { 300000,240000,180000,120000,60000,60000,60000,60000,60000,60000 };
            return aarray[skill->GetLevel () - 1];
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
        skill->GetVictim ()->SetTime(604800000);
        skill->GetVictim ()->SetRatio(0);
        skill->GetVictim ()->SetAmount(0);
        skill->GetVictim ()->SetValue(31);
        skill->GetVictim ()->SetInvisible2(1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetTime(604800000);
        skill->GetVictim ()->SetIncMoveClear(1);
        
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