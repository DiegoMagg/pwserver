//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50910  "Ghost Judgment"50911  "^ffffffGhost Judgmentã€€ã€€ã€€ã€€    ã€€ã€€ã€€ã€€ã€€ã€€Level %d

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff0.1  ^ffcb4asecond
^ffcb4aCastã€€^ffffff1.0  ^ffcb4asecond
^ffcb4aCooldownã€€^ffffff5.0  ^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffSword Shield

^ffcb4aRequired Cultivationã€€^ffffffSpiritual Adept
Thrust with the sword, dealing Physical Damage to the target equal to
Physical Attack plus ^96f5ff%.1f^ffffff. In the next ^96f5ff5^ffffff seconds,
lowers the target's Physical Defense by ^96f5ff%d%%^ffffff of its gear value. "*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5091
#define __CPPGEN_GNET_SKILL5091
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5091:public Skill
    {
        public:
        enum
        { SKILL_ID = 5091 };
        Skill5091 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5091Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 100;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (9 * skill->GetLevel () - 14.4));
                skill->GetPlayer ()->SetPray (1);
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
#ifdef _SKILL_SERVER
        class State2:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1000;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (9 * skill->GetLevel () - 14.4));
                skill->SetPlus (146.4 + (123.8 * skill->GetLevel ()) + (skill->GetLevel () > 2 ? (11.4 * skill->GetLevel()) - 11.4 : 0) + (skill->GetLevel () > 5 ? (11.4 * skill->GetLevel()) - 11.4 : 0) + (skill->GetLevel () > 6 ? 11.4 * 3 : 0) + (skill->GetLevel () > 7 ? 35.16 * skill->GetLevel() : 0));
                skill->SetRatio (0);
                skill->SetDamage (skill->GetAttack ());
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
#ifdef _SKILL_SERVER
        class State3:public SkillStub::State
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
        Skill5091Stub ():SkillStub (5091)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"¹íÅÐÊ½";
            nativename          = "¹íÅÐÊ½";
            icon                = "¹íÅÐÊ½.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 1;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1205;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59830);
            }
#ifdef _SKILL_CLIENT
            effect              = "Óð·æ_Í»´ÌÒ»»÷_»÷ÖÐ01.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5088, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill5091Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 23,32,41,50,59,68,77,86,95,104 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1135;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 5000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 13,18,23,28,33,38,43,48,53,58 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 2100,4100,6790,10028,14007,18860,24640,31752,40334,50716 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange () + 15);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 9 * skill->GetLevel () - 14.4);
            
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
            skill->GetVictim ()->SetTime (5200);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetDecdefence (1);
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
            return (float) (skill->GetPlayer ()->GetRange () + 15);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 3;
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