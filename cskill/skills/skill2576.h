//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
25760  "Snowstorm"25761  "^ffffffSnowstorm (Level %d)

^ffcb4aRangeã€€^96f5ff%.1f ^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff1.0^ffcb4aã€€second
^ffcb4aCastã€€^ffffff1.5^ffcb4aã€€seconds
^ffcb4aCooldownã€€^ffffff18.0^ffcb4aã€€seconds
^ffcb4aWeaponã€€^ffffff Scythe, Unarmed

^ffcb4aRequired Cultivation ^ffffffAware of Coalescence
Call forth a freezing blizzard to assail your enemy, dealing
base magic damage plus ^96f5ff%.1f%%^ffffff of weapon damage plus
^96f5ff%.1f^ffffff as Metal damage. Deals an additional ^96f5ff20%%^ffffff damage
if you have 3 Ice Charges. Generates a Thunder Charge.

^a6caf0Costs ^ffffff30 ^a6caf0Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2576
#define __CPPGEN_GNET_SKILL2576
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2576:public Skill
    {
        public:
        enum
        { SKILL_ID = 2576 };
        Skill2576 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2576Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * (225 + 13.5 * skill->GetLevel ()));
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
                skill->GetPlayer ()->SetDecmp (0.8 * (225 + 13.5 * skill->GetLevel ()));
                skill->SetPlus (3.3 * skill->GetLevel () * skill->GetLevel () + 196.5 * skill->GetLevel () + 2349.9);
                skill->SetRatio (0.85 + 0.085 * skill->GetLevel ());
                skill->SetGolddamage ((skill->GetPlayer ()->GetBalls () == 3 ? 1.2 : 1) * skill->GetMagicattack ());
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
        Skill2576Stub ():SkillStub (2576)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"±ù¼«À×±©";
            nativename          = "±ù¼«À×±©";
            icon                = "±ù¼«À×±©.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 30;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 5;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1010;
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
            effect              = "ÔÂÏÉ_±ù¼«À×±©_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2575, 1));
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
        virtual ~ Skill2576Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 238,252,265,279,292,306,319,333,346,360 };
            return aarray[skill->GetLevel () - 1];
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
            static int aarray[10] = { 53,56,59,62,65,68,71,74,77,80 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 40334,46336,53070,60320,68750,78520,92310,129060,186390,264000 };
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
            225 + 13.5 * skill->GetLevel (),
            85 + 8.5 * skill->GetLevel (), 3.3 * skill->GetLevel () * skill->GetLevel () + 196.5 * skill->GetLevel () + 2349.9);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
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