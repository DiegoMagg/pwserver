//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37240  "Î¨Redstone Venomworm"37241  "^ff5c00Î¨Redstone Venomworm

^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4ameter(s)
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1.5ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.8ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff150.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instruments
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivation ã€€^ffffffChaotic Soul
Throw a hardwood beetle at the enemy, dealing base magic
damage plus ^96f5ff300%% ^ffffffof Weapon Attack plus ^96f5ff3578 ^ffffffas Wood damage.
Reduces the Physical Defense for ^96f5ff10 ^ffffffseconds by ^96f5ff180%% ^ffffff.
Also constantly deals a Fire damage equal to ^96f5ff600%% ^ffffffGear Attack plus ^96f5ff6427^ffffff.

^a6caf0Costs ^ffffff1 ^a6caf0Sparks.

^ff0000Sanguine Glyph Effect:@1
^ff0000LV1-4: Cooldown is reduced to ^96f5ff135 ^ff0000seconds.
^ff0000LV5-7: Cooldown is reduced to ^96f5ff120 ^ff0000seconds.
^ff0000LV8-9: Cooldown is reduced to ^96f5ff105 ^ff0000seconds.
^ff0000LV10: Cooldown is reduced to ^96f5ff90 ^ff0000seconds.@1@2
^ff0000Cooldown is reduced to ^96f5ff%d ^ff0000seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL724
#define __CPPGEN_GNET_SKILL724
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill724:public Skill
    {
        public:
        enum
        { SKILL_ID = 724 };
        Skill724 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill724Stub:public SkillStub
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
                skill->GetPlayer ()->SetPerform (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return false;
            }
            bool Cancel (Skill * skill) const
            {
                return 0;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill724Stub ():SkillStub (724)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"ÎïÆ·¼¼ÄÜ-¼õÉËÒ©¼Á";
            nativename          = "ÎïÆ·¼¼ÄÜ-¼õÉËÒ©¼Á";
            icon                = "";
#endif
            max_level           = 5;
            type                = 4;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
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
            effect              = "¾ÞÁéÉñÁ¦.sgc";
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
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill724Stub ()
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
            static int aarray[10] = { 1,2,3,4,5,5,5,5,5,5 };
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (4000 + 4000 * skill->GetLevel ());
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetDechurt (1);
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