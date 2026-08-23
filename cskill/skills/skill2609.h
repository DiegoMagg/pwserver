//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
26090  "Reflection of Seal of the God"26091  "^ffffffReflection of Seal of the God

^ffcb4aRangeã€€^ffffff30ã€€^ffcb4ameters
^ffcb4aChannelã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCast    ^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aWeaponã€€^ffffffSaber

Lunar reflection of a Cleric skill.
Ages ago, during a battle against a particularly powerful Wraith, a group of
clerics figured out to create a new, more powerful seal by manipulating divine
energy to partially remove it from reality. Though clerics have had countless discussions
about this spell in the intervening years, none has denied its usefulness.

Manipulate the divine magic of Perfect World itself to partially seal the target between
dimensions. Freezes the target, but reduces damage deal to it by ^96f5ff90%%^ffffff. Lasts ^96f5ff10^ffffff seconds.

^a6caf0Costs ^ffffff1 ^a6caf0Spark.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2609
#define __CPPGEN_GNET_SKILL2609
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2609:public Skill
    {
        public:
        enum
        { SKILL_ID = 2609 };
        Skill2609 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2609Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (45.9);
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
                skill->GetPlayer ()->SetDecmp (183.6);
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
        Skill2609Stub ():SkillStub (2609)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"Ë®ÔÂ¾µ»¨¡¤ÉñÖ®·âÓ¡";
            nativename          = "Ë®ÔÂ¾µ»¨¡¤ÉñÖ®·âÓ¡";
            icon                = "ÉñÖ®·âÓ¡.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
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
            effect              = "ÎåÆø³¯Ôª.sgc";
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
        virtual ~ Skill2609Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
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
            return (float) (28.5);
        }
        bool CheckComboSkExtraCondition (Skill * skill) const
        {
            return (bool) (skill->GetPlayer ()->GetComboarg ()->GetValue (0) == 7);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 229.5, 714, 70);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 7 + 35 * 10;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability(100.0);
            skill->GetVictim ()->SetTime(10000.0);
            skill->GetVictim ()->SetShowicon(0);
            skill->GetVictim ()->SetValue(0.0);
            skill->GetVictim ()->SetSealed2(1);
            skill->GetVictim ()->SetProbability(100.0);
            skill->GetVictim ()->SetTime(10000.0);
            skill->GetVictim ()->SetShowicon(0);
            skill->GetVictim ()->SetValue(0.0);
            skill->GetVictim ()->SetFix2(1);
            skill->GetVictim ()->SetProbability(100.0);
            skill->GetVictim ()->SetTime(10000.0);
            skill->GetVictim ()->SetRatio(0.89999998);
            skill->GetVictim ()->SetValue(0.0);
            skill->GetVictim ()->SetDechurt2(1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttack ());
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
            return (float) (35);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1);
        }
#endif
    };
}
#endif