//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
33470  "Cosmic Blessing"33471  "^ffff00Cosmic Blessingã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€^ffffffLevel %d

^ffcb4aPassive Skills

^ffcb4aRequired Cultivationã€€^ffffffAware of Vacuity

^ffffffIncreases your Defense Level by ^96f5ff%d^ffffff."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3347
#define __CPPGEN_GNET_SKILL3347
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3347:public Skill
    {
        public:
        enum
        { SKILL_ID = 3347 };
        Skill3347 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3347Stub:public SkillStub
    {
        public:
        Skill3347Stub ():SkillStub (3347)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"°Ë·½ÖÚÓÓ";
            nativename          = "°Ë·½ÖÚÓÓ";
            icon                = "°Ë·½ÖÚÓÓ.dds";
#endif
            max_level           = 10;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 8;
            eventflag           = 1;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2004;
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
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
#endif
        }
        virtual ~ Skill3347Stub ()
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
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 51476,51476,51476,51476,51476,64125,64125,64125,64125,64125 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredRealmLevel (Skill * skill) const
        {
            static int aarray[10] = { 42,44,46,48,50,62,64,66,68,70 };
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
            skill->GetPlayer ()->SetIncdefenselevel ( skill->GetLevel () * 2 );
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