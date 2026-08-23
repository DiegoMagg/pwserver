//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
26280  "Cloud Cover"26281  "^ffff00Cloud Cover

^ffcb4aRangeã€€^96f5ff27^ffffff^ffcb4aã€€Meters
^ffcb4aManaã€€^96f5ff320^ffffff
^ffcb4aChannelã€€^ffffff0.5^ffcb4aã€€seconds
^ffcb4aCastã€€^ffffff1.0^ffcb4aã€€second
^ffcb4aCooldownã€€^ffffff90.0^ffcb4aã€€seconds
^ffcb4aWeaponã€€^ffffff Scythe, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of Vacuity
Conjure a thick, heavy cloud that clings to the target for ^96f5ff1^ffffff minute.
Blocks the ^96f5fffirst^ffffff attempt to remove the target's positive buffs.

^a6caf0Costs ^ffffff30^a6caf0Chi.

"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2628
#define __CPPGEN_GNET_SKILL2628
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2628:public Skill
    {
        public:
        enum
        { SKILL_ID = 2628 };
        Skill2628 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2628Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 500;
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
                skill->GetPlayer ()->SetDecmp (320);
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
        Skill2628Stub ():SkillStub (2628)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"²ÊÔÆÕÏÔÂ";
            nativename          = "²ÊÔÆÕÏÔÂ";
            icon                = "²ÊÔÆÕÏÔÂ.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 30;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (44879);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÔÂÏÉ_²ÊÔÆÕÏÔÂ_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
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
        virtual ~ Skill2628Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (320);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 90000,90000,90000,90000,90000,90000,90000,90000,90000,90000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 89 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (61000);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (1);
            skill->GetVictim ()->SetAnticlearbuf (1);
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
            return (float) (35 + skill->GetPlayer ()->GetPrayrangeplus ());
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