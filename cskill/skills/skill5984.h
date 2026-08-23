//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
59840  "Might One: Damage Reduction"59841  "^ff0000Chrono Print: Shield Mountain

^ffcb4aPassive Skill

^ffffffWhen attacked, there is a ^96f5ff20%%^ffffff chance to
nullify the damage of this hit.

^ff6666Shattered power use to be contained in the  Chrono Print.
Regained its radiance due to the stabilization of the Chrono Pouch."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5984
#define __CPPGEN_GNET_SKILL5984
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5984:public Skill
    {
        public:
        enum
        { SKILL_ID = 5984 };
        Skill5984 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5984Stub:public SkillStub
    {
        public:
        Skill5984Stub ():SkillStub (5984)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"’ÊŒ‰°æ√‚…À°ø";
            nativename          = "’ÊŒ‰°æ√‚…À°ø";
            icon                = "–¬≥‘º¶’ÊŒ‰√‚…Àººƒ‹.dds";
#endif
            max_level           = 1;
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
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "’ÊŒ‰√‚…À.sgc";
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
        virtual ~ Skill5984Stub ()
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