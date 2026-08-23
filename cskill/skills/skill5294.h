//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
52940  "Blessing of Virtue"52941  "^ff0000Blessing of Virtue銆�Level %d
^ffffffThe Physical and Magical Defense gained from your gear
are increased by ^96f5ff%d%%^ffffff. "*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5294
#define __CPPGEN_GNET_SKILL5294
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5294:public Skill
    {
        public:
        enum
        { SKILL_ID = 5294 };
        Skill5294 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5294Stub:public SkillStub
    {
        public:
        Skill5294Stub ():SkillStub (5294)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"五德祝福";
            nativename          = "五德祝福";
            icon                = "五德祝福.dds";
#endif
            max_level           = 5;
            type                = 5;
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
            effect              = "怪物击晕术.sgc";
#endif
            range.type          = 5;
            doenchant           = false;
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
        virtual ~ Skill5294Stub ()
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
        bool TakeEffect (Skill * skill) const
        {;
       		skill->GetPlayer ()->SetAddresistance (0.06 * skill->GetLevel ());
       		skill->GetPlayer ()->SetAdddefence (0.06 * skill->GetLevel ());        
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