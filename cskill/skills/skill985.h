//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
19850  "‚óãImbued Fox Form"19851  "^8080ff‚óãImbued Fox Form
^96f5ff
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aChannel„ÄÄ^ffffffInstant
^ffcb4aCooldown„ÄÄ^ffffff2.0„ÄÄ^ffcb4aseconds
^ffcb4aWeapon„ÄÄ^ffffffUnarmed, Magic Instrument

^ffcb4aRequired Cultivation„ÄÄ^ffffffAware of the Void
Transform into your fox form, increasing Physical Defense by
^96f5ff%d%%^ffffff and Accuracy by ^96f5ff%d%%^ffffff.
Allows Fox Form skills to be used.
Convert Magic Attack to Physcial Attack. The higher magic
weapon damage and higher Magic you have, the higher Physical Attack you will have.

^a6caf0Shares a cooldown with Spirit Fox Form.

^d618e7Demon version shields you for ^96f5ff6^d618e7seconds, increasing your
speed by ^96f5ff60%%^d618e7and reducing the attacker's Critical Rate by ^96f5ff5%%^d618e7.

^a6caf0Used when inflicted with control effects.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL985
#define __CPPGEN_GNET_SKILL985
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill985:public Skill
    {
        public:
        enum
        { SKILL_ID = 985 };
        Skill985 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill985Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (45);
                skill->GetPlayer ()->SetDecelfap (300 + skill->GetLevel () * 10);
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
        Skill985Stub ():SkillStub (985)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"œ˚ªÍ÷‰";
            nativename          = "œ˚ªÍ÷‰";
            icon                = "œ˚ªÍ÷‰.dds";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 310010;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 6;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 17;
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
            effect              = "œ˚ªÍ÷‰.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
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
        virtual ~ Skill985Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (45);
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
            static int aarray[10] = { 30015,30020,30025,30030,30035,30040,30045,30050,30055,30060 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 560,1040,1680,2560,3720,5260,7300,10000,13620,18480 };
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
            return (float) (20);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            300 + 10 * skill->GetLevel (),
            0.1 * skill->GetLevel () * 1.2,
            0.1 * skill->GetLevel () * 0.8, 0.1 * skill->GetLevel () * 1.2, 0.1 * skill->GetLevel () * 0.8);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 10;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (-skill->GetT0 () * skill->GetLevel () * 0.1 * 1.2);
            skill->GetVictim ()->SetAp (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (-skill->GetT0 () * skill->GetLevel () * 0.1 * 0.8);
            skill->GetVictim ()->SetAp (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetValue (5);
            skill->GetVictim ()->SetInccritresistance (1);
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
            return (float) (24);
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