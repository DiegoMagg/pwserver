//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
27980  "â—‹Cumulonimbus"27981  "^8080ffâ—‹Cumulonimbus

^ffcb4aRangeã€€^96f5ff27 ^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff431^ffffff
^ffcb4aChannelã€€^ffffff1.0^ffcb4aã€€second
^ffcb4aCastã€€^ffffff1.5^ffcb4aã€€seconds
^ffcb4aCooldownã€€^ffffff18.0^ffcb4aã€€seconds
^ffcb4aWeaponã€€^ffffff Scythe, Unarmed

^ffcb4aRequired Cultivation ^ffffffMaster of Discord
Slam your target with a powerful stormwall, dealing base magic
damage plus ^96f5ff170%%^ffffff of weapon damage and ^96f5ff6910^ffffff
as Water damage. Deals an additional ^96f5ff25%%^ffffff damage if you
have 3 Thunder Charges. Generates an Ice Charge.

^a6caf0Costs ^ffffff30 ^a6caf0Chi.

Demon version has a ^96f5ff30%%^d618e7 chance to stun the target for ^96f5ff3^d618e7 seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2798
#define __CPPGEN_GNET_SKILL2798
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2798:public Skill
    {
        public:
        enum
        { SKILL_ID = 2798 };
        Skill2798 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2798Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (345);
                skill->SetPlus (6910);
                skill->SetRatio (1.7);
                skill->SetWaterdamage ((skill->GetPlayer ()->GetBalls () == 15 ? 1.25 : 1) * skill->GetMagicattack ());
                skill->GetPlayer ()->SetAddball (1);
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
        Skill2798Stub ():SkillStub (2798)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"¿ñ¡¤À×¼«±ù±©";
            nativename          = "¿ñ¡¤À×¼«±ù±©";
            icon                = "Ä§À×¼«±ù±©.dds";
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
            effect              = "ÔÂÏÉ_À×¼«±ù±©_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2584, 10));
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
        virtual ~ Skill2798Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (431);
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
            static int aarray[10] = { 99 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
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