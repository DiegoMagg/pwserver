//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37380  "Î¨Parasitic Nova"37381  "^ff5c00Î¨Parasitic Nova

^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff3.0ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.2ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instruments
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Summons a swarm of toxic parasite to attack enemies
within ^96f5ff12 ^ffffffmeters of the target. Deals base magic
damage plus ^96f5ff300%% ^ffffffof weapon damage plus ^96f5ff8606 ^ffffffas Wood
damage. Drives them mad for ^96f5ff8^ffffff seconds, preventing them from moving or attacking.
In ^96f5ff8 ^ffffffseconds, ^ffffffdeals a ^96f5ff30%% ^ffffffadditional damage.
This effect can coexist with Heaven's Flame.
This effect will cancel Extreme Poison.
Generates ^96f5ff50 ^ffffffChi.

Skills of Malefic Crush series share the ^96f5ff30^ffffff seconds
cooldown with skills of Parasitic Nova series.

^a6caf0Costs ^ffffff2 ^a6caf0Sparks."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL738
#define __CPPGEN_GNET_SKILL738
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill738:public Skill
    {
        public:
        enum
        { SKILL_ID = 738 };
        Skill738 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill738Stub:public SkillStub
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
        Skill738Stub ():SkillStub (738)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"ÎïÆ·¼¼ÄÜ-»ð¹¥¸½¼ÓÒ©¼Á";
            nativename          = "ÎïÆ·¼¼ÄÜ-»ð¹¥¸½¼ÓÒ©¼Á";
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
            effect              = "";
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
        virtual ~ Skill738Stub ()
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
            skill->GetVictim ()->SetTime (119000);
            skill->GetVictim ()->SetRatio (0.4 * skill->GetLevel ());
            skill->GetVictim ()->SetFireblade (1);
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
            return (float) (250);
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