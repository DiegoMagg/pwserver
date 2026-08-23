//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
10170  "Mantle Ripple of Death"10171  "^ffffffMantle Ripple of Death„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄLV%d

^ffcb4aRange„ÄÄ^ffffff15 meters
^ffcb4aEnergy„ÄÄ^96f5ff%d^ffffff
^ffcb4aStamina„ÄÄ^96f5ff%d^ffffff
^ffcb4aInstant
^ffcb4aCooldown„ÄÄ^ffffff1„ÄÄ^ffcb4a second
^ffcb4aRequisite Class„ÄÄ^ffffffAll

Creates a magical ripple in the ground.
Has a %d%% chance to reduce target's Chi by 20 constantly
Lasts for 60 seconds.

^ffa083Strength: Every Genie Strength point increases the damage by 1.
^ffa083Strength: Every 5 Genie Strength points reduces the duration by 1 second.

^ff0000Only usable on the ground.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1017
#define __CPPGEN_GNET_SKILL1017
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1017:public Skill
    {
        public:
        enum
        { SKILL_ID = 1017 };
        Skill1017 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1017Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (55 + (skill->GetLevel () - 1) * 2);
                skill->GetPlayer ()->SetDecelfap (250 + 18 * (skill->GetLevel () - 1));
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
        Skill1017Stub ():SkillStub (1017)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"¥Ûµÿ≤®Œ∆.À¿Õˆ";
            nativename          = "¥Ûµÿ≤®Œ∆.À¿Õˆ";
            icon                = "¥Ûµÿ≤®Œ∆À¿Õˆ.dds";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 250018;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 6;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 0;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "¥Ûµÿ≤®Œ∆À¿Õˆ.sgc";
#endif
            range.type          = 2;
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
        virtual ~ Skill1017Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 55,57,59,61,63,65,67,69,71,73 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 22120,22125,22130,22135,22140,22145,22150,22155,22160,22165 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1040,1680,2560,3720,5260,7300,10000,13620,18480,25000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (16);
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
            return (float) (15);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            55 + (skill->GetLevel () - 1) * 2, 250 + 18 * (skill->GetLevel () - 1), 50 + 5 * skill->GetLevel ());
            
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
            skill->GetVictim ()->SetProbability (1.0 * 50 + 5 * skill->GetLevel ());
            skill->GetVictim ()->SetTime (60000 - skill->GetT0 () * 200);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetAmount (20 + skill->GetT0 () * 1);
            skill->GetVictim ()->SetValue (1);
            skill->GetVictim ()->SetApleakcont (1);
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
            return (float) (40);
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