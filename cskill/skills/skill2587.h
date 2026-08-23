//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
25870  "Supercell"25871  "^ffffffSupercell (Level %d)

^ffcb4aRangeã€€^96f5ff%.1f ^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff3.5^ffcb4aã€€seconds
^ffcb4aCastã€€^ffffff1.4^ffcb4aã€€seconds
^ffcb4aCooldownã€€^ffffff30.0^ffcb4aã€€seconds
^ffcb4aWeaponã€€^ffffff Scythe, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffTranscendent
Bombard all enemies within ^96f5ff%.1f^ffffff meters of your target
with an intense storm, dealing base magic damage plus
^96f5ff%d%%^ffffff of weapon damage plus ^96f5ff%.1f^ffffff as Metal damage.

Has additional effects based on your charges:
^96f5ff3 Thunder^ffffff: Also deals base magic damage
plus ^96f5ff%d%%^ffffff of weapon damage plus ^96f5ff%.1f^ffffff.
^96f5ff3 Ice^ffffff: Freezes targets for ^96f5ff4^ffffff seconds.
^96f5ff2 Thunder^ffffff, ^96f5ff1 Ice^ffffff: Increases your
skill damage by ^96f5ff30%%^ffffff for ^96f5ff20^ffffff seconds.
^96f5ff1 Thunder^ffffff, ^96f5ff2 Ice^ffffff: Heals half your maximum Health
and reduces damage taken by ^96f5ff40%%^ffffff for ^96f5ff6^ffffff seconds.

^a6caf0Costs ^ffffff2^a6caf0 Sparks.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2587
#define __CPPGEN_GNET_SKILL2587
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2587:public Skill
    {
        public:
        enum
        { SKILL_ID = 2587 };
        Skill2587 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2587Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 3467;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (336 + 18 * skill->GetLevel ()));
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
                return 1402;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (336 + 18 * skill->GetLevel ()));
                skill->SetPlus (0.5 * (5.5 * skill->GetLevel () * skill->GetLevel () + 347.4 * skill->GetLevel () + 4562.9));
                skill->SetRatio (1.2 + 0.11 * skill->GetLevel ());
                skill->SetGolddamage (skill->GetMagicattack ());
                skill->SetDamage ((skill->GetPlayer ()->GetBalls () == 15 ? 1 : 0) * skill->GetMagicattack ());
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
        Skill2587Stub ():SkillStub (2587)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"µ´ÔÂµÓ»ê";
            nativename          = "µ´ÔÂµÓ»ê";
            icon                = "µ´ÔÂµÓ»ê.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 6;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1026;
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
            effect              = "ÔÂÏÉ_µ´ÔÂµÓ»ê_»÷ÖÐ.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
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
        virtual ~ Skill2587Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 354,372,390,408,426,444,462,480,498,516 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1402;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 59,62,65,68,71,74,77,80,83,86 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 53070,60320,68750,78520,92310,129060,186390,264000,369180,510180 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (5 + 0.5 * skill->GetLevel ());
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
            336 + 18 * skill->GetLevel (),
            5 + 0.5 * skill->GetLevel (),
            120 + 11 * skill->GetLevel (),
            0.5 * 5.5 * skill->GetLevel () * skill->GetLevel () + 0.5 * 347.4 * skill->GetLevel () + 0.5 * 4562.9,
            120 + 11 * skill->GetLevel (),
            0.5 * 5.5 * skill->GetLevel () * skill->GetLevel () + 0.5 * 347.4 * skill->GetLevel () + 0.5 * 4562.9);
            
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
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 () == 3 ? 100 : 0);
            skill->GetVictim ()->SetTime (5402);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetBefrozen (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 10);
            skill->GetVictim ()->SetTime (100);
            skill->GetVictim ()->SetRatio (0.1);
            skill->GetVictim ()->SetAmount (skill->GetT0 () == 11 ? 1 : (skill->GetT0 () == 7 ? 2 : 10));
            skill->GetVictim ()->SetValue (2625);
            skill->GetVictim ()->SetAurabless2 (1);
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
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetMagicattack ());
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
            return (float) (22.5 + 1.4 * skill->GetLevel () + skill->GetPlayer ()->GetPrayrangeplus ());
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