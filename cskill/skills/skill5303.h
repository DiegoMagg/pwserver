//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
53030  "Sacred Elegy"53031  "^ff0000Sacred Elegy„ÄÄLevel %d
^ffffffTriggered upon taking Normal Attack damage.
Reduces the damage taken from Normal Attack hits within the next 1 second
by ^96f5ff%d%%^ffffff at an interval of 1 second. "*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5303
#define __CPPGEN_GNET_SKILL5303
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5303:public Skill
    {
        public:
        enum
        { SKILL_ID = 5303 };
        Skill5303 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5303Stub:public SkillStub
    {
        public:
        Skill5303Stub ():SkillStub (5303)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L" •ªÍÕÏ∏Ë";
            nativename          = " •ªÍÕÏ∏Ë";
            icon                = " •ªÍÕÏ∏Ë.dds";
#endif
            max_level           = 5;
            type                = 6;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 16;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 2;
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
            effect              = "π÷ŒÔª˜‘Œ ı.sgc";
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

#endif
        }
        virtual ~ Skill5303Stub ()
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
            return 1000;
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
        skill->GetVictim ()->SetTime (604800000);
        skill->GetVictim ()->SetValue (0.1 * skill->GetLevel ());      
        skill->GetVictim ()->SetReduceNormalDamage (1);  
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