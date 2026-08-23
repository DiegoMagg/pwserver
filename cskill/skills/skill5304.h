//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
53040  "Ethereal Steps"53041  "^ff0000Ethereal Stepsã€€Level %d
^ffffffMovement Speed in non-combat state is increased by
^96f5ff%d%%^ffffff. "*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5304
#define __CPPGEN_GNET_SKILL5304
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5304:public Skill
    {
        public:
        enum
        { SKILL_ID = 5304 };
        Skill5304 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5304Stub:public SkillStub
    {
        public:
        Skill5304Stub ():SkillStub (5304)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"º®ÇðÔÆ²½";
            nativename          = "º®ÇðÔÆ²½";
            icon                = "º®ÇðÔÆ²½.dds";
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
            effect              = "¹ÖÎï»÷ÔÎÊõ.sgc";
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
        virtual ~ Skill5304Stub ()
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
        skill->GetVictim ()->SetValue (0.2 * skill->GetLevel ());      
        skill->GetVictim ()->SetSpeedNoCombat (1);  
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