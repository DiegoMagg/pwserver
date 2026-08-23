//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
29120  "Î©Frozen Lightning"29121  "^ffff00Î©Frozen Lightning

^ffcb4aRangeã€€^96f5ff27^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff430^ffffff
^ffcb4aChannelã€€^ffffff1.0^ffcb4aã€€second
^ffcb4aCastã€€^ffffff1.5^ffcb4aã€€seconds
^ffcb4aCooldownã€€^ffffff18.0^ffcb4aã€€seconds
^ffcb4aWeaponã€€^ffffffScythe, Unarmed

^ffcb4aCultivation Requirementã€€^ffffffMaster of Discord
'Through conflict comes power. Winds move clouds. Mountains
rise from the land. Fire turns water into steam. Ice conducts
lightning into thunder.' --Ancient Nightshade proverb

Summon a flurry of jagged ice to assail your foe, dealing base
magic damage plus ^96f5ff250%%^ffffff of weapon damage plus ^96f5ff9212^ffffff as Metal and
Water damage. If you have 3 Charges, Frozen Lightning deals an
additional ^96f5ff40%%^ffffff damage and generates a Charge of the identical type.

^a6caf0Costs ^ffffff30^a6caf0 Chi.
Demon version has a ^96f5ff30%%^d618e7 chance to stun the target for ^96f5ff3^d618e7 seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2912
#define __CPPGEN_GNET_SKILL2912
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2912:public Skill
    {
        public:
        enum
        { SKILL_ID = 2912 };
        Skill2912 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2912Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (86);
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
                return 1468;
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
                skill->GetPlayer ()->SetDecmp (344);
                skill->SetPlus (9212);
                skill->SetRatio (2.5);
                skill->SetWaterdamage ((skill->GetPlayer ()->GetBalls () == 15 ? 1.4 : 0.5) * skill->GetMagicattack ());
                skill->SetGolddamage ((skill->GetPlayer ()->GetBalls () == 3 ? 1.4 : 0.5) * skill->GetMagicattack ());
                skill->GetPlayer ()->SetAddball (skill->GetPlayer ()->GetBalls () == 3 ? 1 //5
                : skill->GetPlayer ()->GetBalls () == 15 ? 5 : 0); //1
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
        Skill2912Stub ():SkillStub (2912)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"»Ä¡¤±ùÀ×±©";
            nativename          = "»Ä¡¤±ùÀ×±©";
            icon                = "»Ä±ùÀ×±©.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 30;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 31;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1019;
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
            effect              = "ÔÂÏÉ_Ðþ»Ä±ùÀ×±©_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2798, 1));
            pre_skills.push_back (std::pair < ID, int >(2782, 1));
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
        virtual ~ Skill2912Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (430);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1468;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 18000,18000,18000,18000,18000,18000,18000,18000,18000,18000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 47442,47442,47442,47442,47442,47442,47442,47442,47442,47442 };
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
            return (float) (27 + skill->GetPlayer ()->GetPrayrangeplus ());
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
            skill->GetVictim ()->SetProbability (1.0 * 30);
            skill->GetVictim ()->SetTime (4000);
            skill->GetVictim ()->SetDizzy (1);
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
            return (float) (36.5 + skill->GetPlayer ()->GetPrayrangeplus ());
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