//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
25770  "Avatar of the Storm"25771  "^ffffffAvatar of the Stormã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€Level %d

^ffcb4aRangeã€€^96f5ff%.1f^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff0.4^ffcb4aã€€seconds
^ffcb4aCastã€€^ffffff1.0^ffcb4aã€€seconds
^ffcb4aCooldownã€€^ffffff60.0^ffcb4aã€€seconds
^ffcb4aWeaponã€€^ffffffScythe, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of Transcendence
Summon a living storm to assault your enemies every
^96f5ff1^ffffff second. Strikes all enemies within ^96f5ff%.1f^ffffff meters,
dealing ^96f5ff150%%^ffffffof weapon damage plus ^96f5ff%.1f^ffffff as Metal damage.
Generates a Thunder Charge.

^a6caf0Costs ^ffffff1^a6caf0 Spark."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2577
#define __CPPGEN_GNET_SKILL2577
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2577:public Skill
    {
        public:
        enum
        { SKILL_ID = 2577 };
        Skill2577 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2577Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 401;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (313.2 + 16.2 * skill->GetLevel ()));
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
                return 1001;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (313.2 + 16.2 * skill->GetLevel ()));
                skill->GetPlayer ()->SetAddball (5);
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
        Skill2577Stub ():SkillStub (2577)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"±ÀÀ×¼Àìë";
            nativename          = "±ÀÀ×¼Àìë";
            icon                = "±ÀÀ×¼Àìë.dds";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 6;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1011;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44879);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÔÂÏÉÄÐ_±ÀÀ×¼Àìë_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2576, 1));
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
        virtual ~ Skill2577Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 329,345,361,378,394,410,426,442,459,475 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1001;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 61,64,67,70,73,76,79,82,85,88 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 57997,66080,75260,85000,113950,165200,235410,330460,458250,629680 };
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
            return (float) (16.5 + 0.9 * skill->GetLevel () + skill->GetPlayer ()->GetPrayrangeplus ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            16.5 + 0.9 * skill->GetLevel (),
            313.2 + 16.2 * skill->GetLevel (),
            8 + 0.4 * skill->GetLevel (),
            0.25 * 3.6 * skill->GetLevel () * skill->GetLevel () + 0.25 * 232.9 * skill->GetLevel () + 0.25 * 3149.2);
            
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (1000);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetToxic (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetTime (13001);
            skill->GetVictim ()->SetRatio (skill->GetLevel ());
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (45990);
            skill->GetVictim ()->SetSummonplantpet (1);
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
            return (float) (25 + skill->GetLevel () + skill->GetPlayer ()->GetPrayrangeplus ());
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