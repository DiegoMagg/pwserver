//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10180  "Rainbow Blessing"10181  "^ffffffRainbow Blessingã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€LV%d

^ffcb4aRangeã€€^ffffff30 meters
^ffcb4aEnergyã€€^96f5ff%d^ffffff
^ffcb4aStaminaã€€^96f5ff200^ffffff
^ffcb4aInstant
^ffcb4aCooldownã€€^ffffff30ã€€^ffcb4a seconds
^ffcb4aRequisite Classã€€^ffffffCleric

Provides a random blessing on the target:
%d%% increased physical attack.
%d%% increased magical attack.
%d%% increased critical hit chance.
%d%% reduced channeling time.
Lasts for 8 seconds.
The critical hit blessing will always be applied;
the other three may or may not be applied as well.
Does not stack with similar effects.

^72fe00Dexterity: Every 2 Genie Dexterity points increase the success rate of physical attack blessing by 1%%.
^72fe00Dexterity: Every 2 Genie Dexterity points increase the success rate of magical attack blessing by 1%%.
^72fe00Dexterity: Every 4 Genie Dexterity points increase the success rate of channeling speed blessing by 1%%."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1018
#define __CPPGEN_GNET_SKILL1018
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1018:public Skill
    {
        public:
        enum
        { SKILL_ID = 1018 };
        Skill1018 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1018Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (55 + (skill->GetLevel () - 1) * 4);
                skill->GetPlayer ()->SetDecelfap (200);
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
        Skill1018Stub ():SkillStub (1018)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"²Êºç×£¸£";
            nativename          = "²Êºç×£¸£";
            icon                = "²Êºç×£¸£.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 200000;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 5;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 128;
            time_type           = 1;
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
            effect              = "²Êºç×£¸£.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 0));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill1018Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 55,59,63,67,71,75,79,83,87,91 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 1022020,1022025,1022030,1022035,1022040,1022045,1022050,1022055,1022060,1022065 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1040,1680,2560,3720,5260,7300,10000,13620,18480,25000 };
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
            return (float) (30);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            55 + (skill->GetLevel () - 1) * 4,
            10 + 2 * skill->GetLevel (), 10 + 2 * skill->GetLevel (), skill->GetLevel (), skill->GetLevel () * 2);
            
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
            skill->GetVictim ()->SetProbability (1.0 * 5 + skill->GetLevel () + skill->GetT1 () * 0.5);
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetRatio (0.1 + 0.02 * skill->GetLevel ());
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetIncattack2 (1);
            skill->GetVictim ()->SetProbability (1.0 * 5 + skill->GetLevel () + skill->GetT1 () * 0.5);
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetRatio (0.1 + 0.02 * skill->GetLevel ());
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetIncmagic2 (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT1 () * 0.25);
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetRatio (skill->GetLevel () * 0.02);
            skill->GetVictim ()->SetFastpray2 (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetValue (skill->GetLevel ());
            skill->GetVictim ()->SetIncsmite2 (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfstr ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfagi ());
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
            return (float) (33);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 20;
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