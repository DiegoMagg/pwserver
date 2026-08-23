//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
29190  "Gift of the Riptide"29191  "^ffff00Gift of the Riptide　　　　　　　　　^ffffffLevel %d

^ffcb4aPassive Skill

^ffcb4aRequired Cultivation　^ffffffAware of Vacuity
^ffffffIncreases your swimming speed by ^96f5ff%d%%^ffffff.
^d618e7Only works in the Primal World.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2919
#define __CPPGEN_GNET_SKILL2919
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2919:public Skill
    {
        public:
        enum
        { SKILL_ID = 2919 };
        Skill2919 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2919Stub:public SkillStub
    {
        public:
        Skill2919Stub ():SkillStub (2919)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"����֮Ϣ";
            nativename          = "����֮Ϣ";
            icon                = "����֮Ϣ.dds";
#endif
            max_level           = 2;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 8;
            eventflag           = 8;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2006;
            allow_land          = 1;
            allow_air           = 0;
            allow_water         = 0;
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
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
#endif
        }
        virtual ~ Skill2919Stub ()
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
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 100000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 100000,100000,100000,100000,100000,100000,100000,100000,100000,100000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 47450,47450,47450,47450,47450,47450,47450,47450,47450,47450 };
            return aarray[skill->GetLevel () - 1];
        }
        /*int GetRequiredRealmLevel (Skill * skill) const
        {
            static int aarray[10] = { 30,34,34,34,34,34,34,34,34,34 };
            return aarray[skill->GetLevel () - 1];
        } */
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 2 * skill->GetLevel ());
            
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
            skill->GetPlayer ()->SetIncswimspeed (skill->GetLevel ());
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