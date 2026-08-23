//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
49500  "Gilded Blaze"49501  "^ffffffGilded Blaze
ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€
^ffcb4aManaã€€^96f5ff209^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff25.0ã€€^ffcb4asecond(s)
^ffcb4aWeaponã€€^ffffffFirearm, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of Vacuity
Awakens your body and immediately removes negative states like
Paralyzed, Disarmed, Silenced, Frozen, Stunned, and Sleep.
Becomes immune to all negative effects within the next ^96f5ff1^ffffff
second.

^a6caf0Used when inflicted with control effects."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4950
#define __CPPGEN_GNET_SKILL4950
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4950:public Skill
    {
        public:
        enum
        { SKILL_ID = 4950 };
        Skill4950 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4950Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 0;
            }
            bool Quit (Skill * skill) const
            {
                return false;
            }
            bool Loop (Skill * skill) const
            {
                return false;
            }
            bool Bypass (Skill * skill) const
            {
                return false;
            }
            void Calculate (Skill * skill) const
            {
                skill->GetPlayer ()->SetDecmp (209);
                skill->GetPlayer ()->SetPerform (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return false;
            }
            bool Cancel (Skill * skill) const
            {
                return 1;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill4950Stub ():SkillStub (4950)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"ÁðÁ§³ãÊ¢";
            nativename          = "ÁðÁ§³ãÊ¢";
            icon                = "ÁðÁ§³ãÊ¢.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 1017;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 5;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (59831);
            }
#ifdef _SKILL_CLIENT
            effect              = "Éñ»ú_½â³ý¿ØÖÆ_¹â01.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill4950Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (209);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 25000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 89 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (2000);
            skill->GetVictim ()->SetImmuneall2 (1);
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
            return (float) (10);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (0);
        }
#endif
    };
}
#endif