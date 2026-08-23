//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
28330  "鈼廈lood of the Nightshade"28331  "^8080ff鈼廈lood of the Nightshade

^ffcb4aPassive Skill

^ffcb4aRequired Cultivation銆�^ffffffMaster of Harmony
^ffffffReduces incoming attack damage by ^96f5ff65%%^ffffff,
and incoming skill damage by ^96f5ff25%%^ffffff.

^f7dfa5Sage version reduces incoming attack damage by ^96f5ff68%%^f7dfa5
and incoming skill damage by ^96f5ff26%%^f7dfa5.

"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2833
#define __CPPGEN_GNET_SKILL2833
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2833:public Skill
    {
        public:
        enum
        { SKILL_ID = 2833 };
        Skill2833 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2833Stub:public SkillStub
    {
        public:
        Skill2833Stub ():SkillStub (2833)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"真·胧族血脉";
            nativename          = "真·胧族血脉";
            icon                = "仙技能减伤.dds";
#endif
            max_level           = 1;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 21;
            eventflag           = 1;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1103;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2691, 10));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
#endif
        }
        virtual ~ Skill2833Stub ()
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
            static int aarray[10] = { 99 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 2000000 };
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
        bool TakeEffect (Skill * skill) const
        {;
            skill->GetPlayer ()->SetIncnearnormaldmgreduce(0.020);
            skill->GetPlayer ()->SetIncnearskilldmgreduce(0.0010);
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