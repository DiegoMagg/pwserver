//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
51610  "●Shield of Imprecation"51611  "^8080ff●Shield of Imprecation

^ffcb4aMana　^96f5ff169.7^ffffff
^ffcb4aChannel　^ffffffInstant
^ffcb4aCooldown　^ffffff90　^ffcb4asecond(s)
^ffcb4aWeapon　^ffffffSword Shield, Unarmed

^ffcb4aRequired Cultivation　　^ffffffMaster of Harmony
Consumes your shield energy, increasing your damage by ^96f5ff30%%^ffffff.
Lasts ^96f5ff10^ffffff seconds.

^FFFF00Used when inflicted with control effects.
^a6caf0Requires ^ffffff100^a6caf0  Shield Energy.

^f7dfa5Skill damage is increased to ^96f5ff35%%^f7dfa5. "*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL161
#define __CPPGEN_GNET_SKILL161
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill161:public Skill
    {
        public:
        enum
        { SKILL_ID = 161 };
        Skill161 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill161Stub:public SkillStub
    {
        public:
        Skill161Stub ():SkillStub (161)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"ҩʦ��ͨ";
            nativename          = "ҩʦ��ͨ";
            icon                = "ҩʦ��ͨ.dds";
#endif
            max_level           = 10;
            type                = 9;
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
            showorder           = 3004;
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
        virtual ~ Skill161Stub ()
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
            static int aarray[10] = { 5 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0,500,2500,5000,25000,50000,100000,170000,300000,500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 0,1000,5000,10000,50000,100000,200000,350000,600000,1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 3469,0,0,3472,0,3474,0,3476,3477,3478 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), skill->GetAbility (), skill->GetMaxability ());
            
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
            static int array[10] = { 10, 20, 30, 45, 60, 80, 100, 120, 150, 200 };
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