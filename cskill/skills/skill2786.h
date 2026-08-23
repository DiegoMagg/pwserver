//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
27860  "â—‹Devouring Darkness"27861  "^8080ffâ—‹Devouring Darkness

^ffcb4aRangeã€€^96f5ff27 ^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff276^ffffff
^ffcb4aChannelã€€^ffffff1.5^ffcb4aã€€seconds
^ffcb4aCastã€€^ffffff1.0^ffcb4aã€€second
^ffcb4aCooldownã€€^96f5ff27^ffcb4aã€€seconds
^ffcb4aWeaponã€€^ffffff Scythe, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of the Void
Engulf your enemies in a storm of supernatural
darkness, paralyzing them for ^96f5ff1^ffffff second every ^96f5ff3^ffffff
seconds; lasts ^96f5ff9^ffffff seconds. Generates a Thunder Charge.

^a6caf0Costs ^ffffff30 ^a6caf0Chi.

^d618e7Demon version reduces the cooldown by ^96f5ff3^d618e7 seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2786
#define __CPPGEN_GNET_SKILL2786
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2786:public Skill
    {
        public:
        enum
        { SKILL_ID = 2786 };
        Skill2786 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2786Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1450;
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
                skill->GetPlayer ()->SetDecmp (55);
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
                skill->GetPlayer ()->SetDecmp (221);
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
        Skill2786Stub ():SkillStub (2786)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"¿ñ¡¤Ê´¹ÇÔÂ¶¾";
            nativename          = "¿ñ¡¤Ê´¹ÇÔÂ¶¾";
            icon                = "Ä§Ê´¹ÇÔÂ¶¾.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 30;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 30;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1007;
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
            effect              = "ÔÂÏÉ_Ê´¹ÇÔÂ¶¾_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2578, 10));
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
        virtual ~ Skill2786Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (276);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 27000,27000,27000,27000,27000,27000,27000,27000,27000,27000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 92 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1500000 };
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
            return 1000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (10001);
            skill->GetVictim ()->SetRatio (1000);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (3000);
            skill->GetVictim ()->SetIntervalpalsy (1);
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