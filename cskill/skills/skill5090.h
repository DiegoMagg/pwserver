//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50900  "Shield Energy Mastery"50901  "^ffffffShield Mastery (Level %d)

^ffcb4aPassive

^ffcb4aRequired Cultivation銆�^ffffffSpiritual Adept
Your shield can absorb the energy in the world, and then used to
cast advanced skills. The Max Shield Energy is ^96f5ff%d^ffffff,
and regenerates ^96f5ff%.1f^ffffff per second. "*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5090
#define __CPPGEN_GNET_SKILL5090
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5090:public Skill
    {
        public:
        enum
        { SKILL_ID = 5090 };
        Skill5090 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5090Stub:public SkillStub
    {
        public:
        Skill5090Stub ():SkillStub (5090)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"盾能精通";
            nativename          = "盾能精通";
            icon                = "盾能精通.dds";
#endif
            max_level           = 5;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 1;
            eventflag           = 1;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1203;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59830);
            }
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
        virtual ~ Skill5090Stub ()
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
            static int aarray[10] = { 9,29,49,69,89,89,89,89,89,89 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000,10738,33370,81600,698280,698280,698280,698280,698280,698280 };
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
            return _snwprintf (buffer, length, format, 1);
            
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
            skill->GetPlayer ()->SetNewSheildMax ( 95.0f + 5.0f * skill->GetLevel() );
            skill->GetPlayer ()->SetNewSheildGen ( 2.0f + 0.2f * skill->GetLevel() );
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