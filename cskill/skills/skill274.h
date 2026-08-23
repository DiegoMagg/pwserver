//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
12740  "●Shadow Walk"12741  "^8080ff●Shadow Walk

^ffcb4aMana　^96f5ff135^ffffff
^ffcb4aChannel　^ffffff0.7　^ffcb4a seconds
^ffcb4aCast　^ffffff2.8　^ffcb4a seconds
^ffcb4aCooldown　^ffffff6.0 ^ffcb4a seconds
^ffcb4aChi Gained　^ffffff10
^ffcb4aWeapon　^ffffffDaggers

^ffcb4aRequired Cultivation　^ffffffAware of the Myriad
Step into the shadows to avoid
being seen, increasing your
Stealth Level by ^96f5ff10^ffffff. Consumes
^96f5ff7^ffffff Mana per second. Only
usable while ^96f5ffout of combat^ffffff.

^f7dfa5Sage version reduces the Mana cost to ^96f5ff7^f7dfa5 per second."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL274
#define __CPPGEN_GNET_SKILL274
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill274:public Skill
    {
        public:
        enum
        { SKILL_ID = 274 };
        Skill274 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill274Stub:public SkillStub
    {
        public:
        Skill274Stub ():SkillStub (274)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"���о�ͨ";
            nativename          = "���о�ͨ";
            icon                = "���о�ͨ.dds";
#endif
            max_level           = 10;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 1;
            eventflag           = 2;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1322;
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
        }
        virtual ~ Skill274Stub ()
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
            static int aarray[10] = { 9,14,19,24,29,34,39,44,49,54 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 500,1200,2300,3850,5900,8650,12300,17100,23500,32000 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 0.2 * skill->GetLevel ());
            
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
            skill->GetPlayer ()->SetIncfeather (0.2 * skill->GetLevel ());
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