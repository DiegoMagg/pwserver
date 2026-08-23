//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
22330  "Î©Grudge Strike"22331  "^ffff00Î©Grudge Strike

^ffcb4aRequires Fox Form
^ffcb4aRangeã€€^ffffff10ã€€^ffcb4aMeters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instruments

^ffcb4aRequired Cultivationã€€^ffffffAware of the Void
Attack all enemies in front of you with a flurry of blows, dealing base physical damage
plus ^96f5ff300%%^ffffff of weapon damage plus ^96f5ff5055^ffffff.  for ^96f5ff6^ffffff seconds Lowers
the target's Physical Defense by ^96f5ff60%%^ffffff.
Weakens player targets for ^96f5ff6^ffffff seconds,
increasing damage taken by skills by ^96f5ff8%%^ffffff.
This effect stacks up to ^96f5ff5 ^fffffftimes, resetting the duration with each stack.

This attack is guaranteed to hit.

^d618e7Demon version generates ^96f5ff20 ^d618e7Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2233
#define __CPPGEN_GNET_SKILL2233
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2233:public Skill
    {
        public:
        enum
        { SKILL_ID = 2233 };
        Skill2233 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2233Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 50;
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
                skill->GetPlayer ()->SetDecmp (32);
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
                skill->GetPlayer ()->SetDecmp (128);
                skill->SetPlus (5055);
                skill->SetRatio (3);
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
        Skill2233Stub ():SkillStub (2233)
        {
            cls                 = 3;
#ifdef _SKILL_CLIENT
            name                = L"»Ä¡¤ÑýÔ¹»÷";
            nativename          = "»Ä¡¤ÑýÔ¹»÷";
            icon                = "»Ä¡¤ÑýÔ¹»÷.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 7;
            rank                = 30;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1615;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (292);
            }
#ifdef _SKILL_CLIENT
            effect              = "Ñý¾«_Ñýºü»÷¸Ä_»÷ÖÐ.sgc";
#endif
            range.type          = 4;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(659, 1));
            pre_skills.push_back (std::pair < ID, int >(661, 1));
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
        virtual ~ Skill2233Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (160);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
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
            static int aarray[10] = { 42138,42138,42138,42138,42138,42138,42138,42138,42138,42138 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (12);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (12);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (20));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (12 + skill->GetPlayer ()->GetPrayrangeplus () + skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 160);
            
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
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPlayer ()->GetCls () == -1 ? 0 : 100));
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetRatio (0.08);
            skill->GetVictim ()->SetAmount (5);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetInchurt4 (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetDecdefence (1);
            
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
            return (float) (25 + skill->GetPlayer ()->GetPrayrangeplus () + skill->GetPlayer ()->GetRange () + 18);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 3;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (3);
        }
#endif
    };
}
#endif