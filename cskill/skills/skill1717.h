//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
17170  "鈼婤lade and Sword Mastery"17171  "^8080ff鈼婤lade and Sword Mastery

^ffcb4aPassive Skill

^ffcb4aRequired Cultivation銆�^ffffffAware of the Void
^ffffffIncreases all blade and sword weapon damage by ^96f5ff%d%%^ffffff.

^d618e7Demon version also increases Critical Rate by ^96f5ff1%%^d618e7."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1717
#define __CPPGEN_GNET_SKILL1717
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1717:public Skill
    {
        public:
        enum
        { SKILL_ID = 1717 };
        Skill1717 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1717Stub:public SkillStub
    {
        public:
        Skill1717Stub ():SkillStub (1717)
        {
            cls                 = 8;
#ifdef _SKILL_CLIENT
            name                = L"狂·刀剑精通";
            nativename          = "狂·刀剑精通";
            icon                = "刀剑精通2.dds";
#endif
            max_level           = 1;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 30;
            eventflag           = 2;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1134;
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
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(1371, 10));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
        }
        virtual ~ Skill1717Stub ()
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
            static int aarray[10] = { 92 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
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
            return _snwprintf (buffer, length, format, 75);
            
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
        {
            skill->GetPlayer ()->SetIncsword (0.15);
            skill->GetPlayer ()->SetInccrit (1);
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