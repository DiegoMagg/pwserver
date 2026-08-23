//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
25720  "Cloudburst"25721  "^ffffffCloudburst (Level %d)

^ffcb4aRangeã€€^96f5ff%.1f ^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1.5^ffcb4aã€€seconds
^ffcb4aCastã€€^ffffff1.0^ffcb4aã€€seconds
^ffcb4aCooldownã€€^ffffff6.0^ffcb4aã€€seconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffff Scythe, Unarmed

^ffcb4aRequisite Cultivation ^ffffffSpiritual Adept
Detonate a thundercloud in your enemy's face, dealing ^96f5ff90%%^ffffff of base
magic attack plus ^96f5ff%.1f%%^ffffff of weapon damage plus ^96f5ff%.1f^ffffff as Metal damage.
Reduces the target's Elemental Resistances by up to ^96f5ff40%%^ffffff, based on
the number of Thunder Charges, for ^96f5ff10^ffffff seconds. Generates a Thunder Charge.
^96f5ffWhile transformed, damage is increased by ^ffffff33%%.

^ffa4a9Can cast while moving."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2572
#define __CPPGEN_GNET_SKILL2572
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2572:public Skill
    {
        public:
        enum
        { SKILL_ID = 2572 };
        Skill2572 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2572Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1467;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (36 + 15 * skill->GetLevel ()));
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
                skill->GetPlayer ()->SetDecmp (0.8 * (36 + 15 * skill->GetLevel ()));
                skill->SetPlus (9.7 * skill->GetLevel () * skill->GetLevel () + 196.1 * skill->GetLevel () + 564);
                skill->SetRatio (0.85 + 0.085 * skill->GetLevel ());
                skill->GetPlayer ()->SetAddball (5);
                skill->SetGolddamage ((skill->GetPlayer ()->GetForm () == 1 ? 1.2 : 0.9) * skill->GetMagicattack ());
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
        Skill2572Stub ():SkillStub (2572)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"ÔÆÆðÓ½";
            nativename          = "ÔÆÆðÓ½";
            icon                = "ÔÆÆðÓ½.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 2;
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
            effect              = "ÔÂÏÉ_ÔÆÆðÓ½_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2571, 1));
            is_movingcast       = true;
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
        virtual ~ Skill2572Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 51,66,81,96,111,126,141,156,171,186 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1001;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 6000,6000,6000,6000,6000,6000,6000,6000,6000,6000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 17,22,27,32,37,42,47,52,57,62 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 3700,6272,9300,13112,17845,23400,30222,38488,48447,60320 };
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
            36 + 15 * skill->GetLevel (),
            0.9 * 85 + 0.9 * 8.5 * skill->GetLevel (),
            0.9 * 9.7 * skill->GetLevel () * skill->GetLevel () + 0.9 * 196.1 * skill->GetLevel () + 0.9 * 564);
            
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
            skill->GetVictim ()->SetTime (11001);
            skill->GetVictim ()->SetRatio (skill->GetT0 () == 15 ? 0.4 : (skill->GetT0 () == 11 ? 0.37 : (skill->GetT0 () == 7 ? 0.33 : 0.3)));
            skill->GetVictim ()->SetDecresist (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetBalls ());
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