//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
25490  "Dual Accordance"25491  "^ffffffDual Accordance (Level %d)

^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%.1f^ffffff
^ffcb4aChannel　^ffffff0.1　^ffcb4aseconds
^ffcb4aCast　^ffffff0.9　^ffcb4aseconds
^ffcb4aCooldown　^ffffff6.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffSaber

^ffcb4aRequired Cultivation ^ffffffSpiritual Adept
Sweep through a powerful combo attack, dealing base
physical damage plus ^96f5ff%.1f^ffffff. Increases the Critical Rate
of your next Motionless Move within ^96f5ff6^ffffff seconds by ^96f5ff50%%^ffffff.
Heals you for ^96f5ff5%%^ffffff of your maximum Health if your Health
is lower than the target's after the attack; otherwise,
it deals an additional ^96f5ff15%%^ffffff of base physical damage plus ^96f5ff%.1f^ffffff.

^a6caf0Costs ^ffffff20^a6caf0 Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2549
#define __CPPGEN_GNET_SKILL2549
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2549:public Skill
    {
        public:
        enum
        { SKILL_ID = 2549 };
        Skill2549 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2549Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 67;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (14.4 + 9 * skill->GetLevel ()));
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
                return 934;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (14.4 + 9 * skill->GetLevel ()));
                skill->SetPlus (6.8 * skill->GetLevel () * skill->GetLevel () + 126 * skill->GetLevel () + 299);
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
        Skill2549Stub ():SkillStub (2549)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"˫��";
            nativename          = "˫��";
            icon                = "˫��.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 20;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 1;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1004;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44878);
            }
#ifdef _SKILL_CLIENT
            effect              = "ҹӰ_˫��_����.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2548, 1));
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
        virtual ~ Skill2549Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 23,32,41,50,59,68,77,86,95,104 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 934;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 6000,6000,6000,6000,6000,6000,6000,6000,6000,6000 };
            return aarray[skill->GetLevel () - 1];
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
            return (float) (0);
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
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            14.4 + 9 * skill->GetLevel (),
            6.8 * skill->GetLevel () * skill->GetLevel () + 126 * skill->GetLevel () + 299,
            0.15 * (6.8 * skill->GetLevel () * skill->GetLevel () + 126 * skill->GetLevel () + 299));
            
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
            skill->GetVictim ()->SetProbability (1.0 * ((skill->GetPlayer ()->GetHp () + 0.1) / (skill->GetPlayer ()->GetMaxhp () + 0.1)) >
            ((skill->GetT0 () + 0.1) / (skill->GetT2 () + 0.1)) ? 0 : 100);
            skill->GetVictim ()->SetTime (1000);
            skill->GetVictim ()->SetAmount (0.15 *
            (skill->GetT1 () + 6.8 * skill->GetLevel () * skill->GetLevel () + 126 * skill->GetLevel () + 299));
            skill->GetVictim ()->SetBleeding (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 10);
            skill->GetVictim ()->SetTime (100);
            skill->GetVictim ()->SetRatio (0.1);
            skill->GetVictim ()->SetAmount (skill->GetTarget ()->GetValid () ==
            1 ? (((skill->GetTarget ()->GetHp () + 0.1) / (skill->GetTarget ()->GetMaxhp () + 0.1)) >
            ((skill->GetT0 () + 0.1) / (skill->GetT2 () + 0.1)) ? 1 : 0) : 0);
            skill->GetVictim ()->SetValue (2615);
            skill->GetVictim ()->SetAurabless2 (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetHp ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttack ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent2 (PlayerWrapper * player) const
        {
            return (float) (player->GetMaxhp ());
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
            return (float) (skill->GetPlayer ()->GetRange () + 1.2 * 5.5);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.4 + skill->GetLevel () * 0.08);
        }
#endif
    };
}
#endif