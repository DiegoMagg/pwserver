//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
51650  "●Shield of Monstrosity"51651  "^8080ff●Shield of Monstrosity

^ffcb4aMana　^96f5ff185.6^ffffff
^ffcb4aChannel　^ffffffInstant
^ffcb4aCooldown　^ffffff90　^ffcb4asecond(s)
^ffcb4aWeapon　^ffffffSword Shield, Unarmed

^ffcb4aRequired Cultivation　　^ffffffMaster of Harmony
Protects yourself with the shield; in ^96f5ff8^ffffff seconds, reflects all negative effects from ^96f5ff3^ffffff
skills that your enemies cast at you.
When you take a skill that lands multiple hits, each hit is counted as a skill.

^FFFF00Used when inflicted with control effects.
^a6caf0Requires ^ffffff100^a6caf0  Shield Energy.

^f7dfa5The number of reflected skills is increased by ^96f5ff1^f7dfa5. "*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL165
#define __CPPGEN_GNET_SKILL165
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill165:public Skill
    {
        public:
        enum
        { SKILL_ID = 165 };
        Skill165 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill165Stub:public SkillStub
    {
        public:
        Skill165Stub ():SkillStub (165)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"ʱװ��ͨ";
            nativename          = "ʱװ��ͨ";
            icon                = "ʱװ��ͨ.dds";
#endif
            max_level           = 5;
            type                = 7;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 4002;
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
            pre_skills.push_back (std::pair < ID, int >(0, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
#endif
        }
        virtual ~ Skill165Stub ()
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
            static int aarray[10] = { 150 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1000,5000,30000,62000,100000,100000,100000,100000,100000,100000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 4219,4222,4223,4224,4225,4225,4225,4225,4225,4225 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), skill->GetAbility (), skill->GetMaxability (), skill->GetLevel ());
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        int GetMaxAbility (Skill * skill) const
        {
            static int array[10] = { 10, 20, 30, 40, 50 };
            return array[skill->GetLevel () - 1];
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