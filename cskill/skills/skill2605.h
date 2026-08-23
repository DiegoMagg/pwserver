//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
26050  "Reflection of Bewitch"26051  "^ffffffReflection of Bewitch

^ffcb4aRangeã€€^ffffff27ã€€^ffcb4ameters
^ffcb4aChannelã€€^ffffff0.6ã€€^ffcb4aseconds
^ffcb4aCast    ^ffffff1.3ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffSaber

Lunar reflection of a Venomancer skill.
Manipulate spiritual energy to transform the target into a puffbird for ^96f5ff4^ffffff seconds.
Puffbirds cannot use attacks or abilities, or perform any other actions besides movement.

^a6caf0^a6caf0Costs ^ffffff50^a6caf0 Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2605
#define __CPPGEN_GNET_SKILL2605
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2605:public Skill
    {
        public:
        enum
        { SKILL_ID = 2605 };
        Skill2605 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2605Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 67;
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
                skill->GetPlayer ()->SetDecmp (31);
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
                skill->GetPlayer ()->SetDecmp (124);
                skill->SetPlus (4182.6);
                skill->SetRatio (0);
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
        Skill2605Stub ():SkillStub (2605)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"Ë®ÔÂ¾µ»¨¡¤ÑýÆø»÷";
            nativename          = "Ë®ÔÂ¾µ»¨¡¤ÑýÆø»÷";
            icon                = "ÑýÆø»÷.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 50;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
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
                restrict_weapons.push_back (44878);
            }
#ifdef _SKILL_CLIENT
            effect              = "Ñý¾«_ÑýÆø»÷.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            combosk_preskill    = 2562;
            combosk_interval    = 45000;
            is_inherent         = true;
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
        virtual ~ Skill2605Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1300;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (8);
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
            return (float) (27 + skill->GetPlayer ()->GetRange ());
        }
        bool CheckComboSkExtraCondition (Skill * skill) const
        {
            return (bool) (skill->GetPlayer ()->GetComboarg ()->GetValue (0) == 3);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 155, 4182.6, 1400);
            
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
            skill->GetVictim ()->SetTime(5500.0);
            skill->GetVictim ()->SetRatio(0.0);
            skill->GetVictim ()->SetValue(30.0);
            skill->GetVictim ()->SetBeastieform(1);
            skill->GetVictim ()->SetProbability(100.0);
            skill->GetVictim ()->SetBreak(1);
            skill->GetVictim ()->SetProbability(100.0);
            skill->GetVictim ()->SetTime(5500.0);
            skill->GetVictim ()->SetShowicon(0);
            skill->GetVictim ()->SetValue(0.0);
            skill->GetVictim ()->SetSealed2(1);
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
            return (float) (40);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (2 + 0.1 * skill->GetLevel ());
        }
#endif
    };
}
#endif