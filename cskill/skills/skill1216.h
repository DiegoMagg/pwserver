//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
12160  "â—Empowered Vigor"12161  "^8080ffâ—Empowered Vigor

^ffcb4aManaã€€^96f5ff630^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCastã€€^ffffff90.0  ^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffSoulsphere

^ffcb4aRequired Cultivationã€€^ffffffAware of the Myriad
Empower the target's soul to improve their healing ability.
Immediately end the cooldown of the target's Guardian Charms.

Empowered Vigor shares a ^96f5ff90^ffffff second cooldown with Diminished Vigor.

^f7dfa5Sage version reduces Guardian Charm cooldowns by ^96f5ff5^f7dfa5 seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1216
#define __CPPGEN_GNET_SKILL1216
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1216:public Skill
    {
        public:
        enum
        { SKILL_ID = 1216 };
        Skill1216 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1216Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (630);
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
        Skill1216Stub ():SkillStub (1216)
        {
            cls                 = 2;
#ifdef _SKILL_CLIENT
            name                = L"Õæ¡¤ÉúÃüÕÀ·Å";
            nativename          = "Õæ¡¤ÉúÃüÕÀ·Å";
            icon                = "×£¸£¼ÓÉîÏÉ¼¼ÄÜ.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 20;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1715;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (25333);
            }
#ifdef _SKILL_CLIENT
            effect              = "Î×Ê¦_¾£¼¬¹â»·.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 1;
            commoncooldowntime  = 85000;
            pre_skills.push_back (std::pair < ID, int >(1104, 10));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill1216Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (630);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 85000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 92 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1500000 };
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
            return (float) (28.5);
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
            skill->GetVictim ()->SetResetAmuletCD (1);
            /*
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (91000);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetAmount (0.3);
            skill->GetVictim ()->SetValue (5000);
            skill->GetVictim ()->SetDeepenbless (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (91000);
            skill->GetVictim ()->SetRatio (0.2);
            skill->GetVictim ()->SetAmount (0.3);
            skill->GetVictim ()->SetValue (4000);
            skill->GetVictim ()->SetDeepenbless (1);*/
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
            return (float) (45);
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