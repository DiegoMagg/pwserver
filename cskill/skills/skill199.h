//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
31990  "Î¦Distance Shrink"31991  "^ffff00Î¦Distance Shrink

^ffcb4aManaã€€^ffffff60
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^96f5ff%d^ffffffã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instruments

^ffcb4aRequired Cultivationã€€^ffffffAware of the Myriad
Use the magical lines of the earth to teleport yourself ^96f5ff25^ffffff meters forward.
While using this power, you will be in stealth mode and cannot be targeted.

^a6caf0Costs ^ffffff20^a6caf0 Chi.

^f7dfa5Sage version reduces the Chi cost by ^96f5ff10^f7dfa5."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL199
#define __CPPGEN_GNET_SKILL199
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill199:public Skill
    {
        public:
        enum
        { SKILL_ID = 199 };
        Skill199 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill199Stub:public SkillStub
    {
        public:
        Skill199Stub ():SkillStub (199)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"³Ù»º";
            nativename          = "³Ù»º";
            icon                = "";
#endif
            max_level           = 1;
            type                = 6;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
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
            effect              = "¹ÖÎïÅùö¨Êõ.sgc";
#endif
            range.type          = 0;
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
        virtual ~ Skill199Stub ()
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
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 5);
            skill->GetVictim ()->SetTime (5500);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetSlowattack (1);
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