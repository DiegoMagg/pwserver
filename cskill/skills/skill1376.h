//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
13760  "Absorb Soul"13761  "^ffffffAbsorb Soul  (Level %d)

^ffcb4aRange„ÄÄ^96f5ff%.1f^ffffff„ÄÄ^ffcb4a meters
^ffcb4aMana„ÄÄ^96f5ff%.1f^ffffff
^ffcb4aChannel„ÄÄ^ffffff5.0„ÄÄ^ffcb4a seconds
^ffcb4aCast„ÄÄ^ffffff0.8„ÄÄ^ffcb4a seconds
^ffcb4aCooldown„ÄÄ^ffffff2.0„ÄÄ^ffcb4a seconds
^ffcb4aChi Gained„ÄÄ^ffffff10
^ffcb4aWeapon„ÄÄ^ffffffUnarmed, Magic instrument

^ffcb4aRequired Cultivation„ÄÄ^ffffffAware of Principle
Infuse a portion of your own soul into a powerful magic
attack. Deals ^96f5ff125%%^ffffff of base magic damage plus ^96f5ff%.1f^ffffff to player
targets. Deals ^96f5ff200%%^ffffff of base magic damage plus ^96f5ff%.1f^ffffff to
non-player targets. This attack cannot be a critical strike."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1376
#define __CPPGEN_GNET_SKILL1376
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1376:public Skill
    {
        public:
        enum
        { SKILL_ID = 1376 };
        Skill1376 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1376Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 5000;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (58.8 + 21 * skill->GetLevel ()));
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 25 - 2.5 * skill->GetLevel ();
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
                return 800;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (58.8 + 21 * skill->GetLevel ()));
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
        Skill1376Stub ():SkillStub (1376)
        {
            cls                 = 9;
#ifdef _SKILL_CLIENT
            name                = L"…„ªÍ÷‰";
            nativename          = "…„ªÍ÷‰";
            icon                = "π¥ªÍ…„∆«.dds";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 3;
            rank                = 2;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1422;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "˜»¡È_π¥ªÍ…„∆«.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(1375, 1));
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
        virtual ~ Skill1376Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 79,100,121,142,163,184,205,226,247,268 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 800;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 2000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 19,24,29,34,39,44,49,54,59,64 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 4600,7700,11800,17300,24600,34200,47000,64000,87000,118000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (3 + 0.4 * skill->GetLevel ());
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (4 + 0.3 * skill->GetLevel ());
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (17.5 + 0.9 * skill->GetLevel ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            17.5 + 0.9 * skill->GetLevel (),
            58.8 + 21 * skill->GetLevel (),
            6.2 * skill->GetLevel () * skill->GetLevel () + 130 * skill->GetLevel () + 350,
            11.1 * skill->GetLevel () * skill->GetLevel () + 263.9 * skill->GetLevel () + 735.5);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 100 * skill->GetLevel ();
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetAmount (skill->GetT0 () * 2 + 11.1 * skill->GetLevel () * skill->GetLevel () + 263.9 * skill->GetLevel () +
            735.5);
            skill->GetVictim ()->SetValue (skill->GetT0 () * 1.25 + 6.2 * skill->GetLevel () * skill->GetLevel () + 130 * skill->GetLevel () + 350);
            skill->GetVictim ()->SetSpecialphysichurt (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetPuremagicattack ());
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
            return (float) (25 + skill->GetLevel ());
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 26;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1);
        }
#endif
    };
}
#endif