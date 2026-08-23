//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
25600  "Lunar Grace"25601  "^ffffffLunar Grace (Level %d)

^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.1ã€€^ffcb4a seconds
^ffcb4aCooldownã€€^96f5ff%.1fã€€^ffcb4aseconds
^ffcb4aRequired Weaponã€€^ffffffSaber, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of Discord
Drink in the radiant energy of the moonlight, making you immune to movement
impairing effects for ^96f5ff%.1f^ffffff seconds. Resets the cooldown on  Blinking Moment,
and removes the cooldown from your next Blinking Moment within ^96f5ff5^ffffff seconds.

^a6caf0Costs ^ffffff50 ^a6caf0Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2560
#define __CPPGEN_GNET_SKILL2560
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2560:public Skill
    {
        public:
        enum
        { SKILL_ID = 2560 };
        Skill2560 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2560Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * (55.35 + 5.4 * skill->GetLevel ()));
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
                return 1068;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (55.35 + 5.4 * skill->GetLevel ()));
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
        Skill2560Stub ():SkillStub (2560)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"ÔÂÒû";
            nativename          = "ÔÂÒû";
            icon                = "ÔÂÒû.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 50;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 4;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1009;
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
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2559, 1));
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
        virtual ~ Skill2560Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 60,66,71,76,82,87,93,98,103,109 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1068;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 174000,168000,162000,156000,150000,144000,138000,132000,126000,120000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 45,49,53,57,61,65,69,73,77,81 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 27375,33370,40334,48447,57997,68750,81600,113950,186390,295240 };
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
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (), 55.35 + 5.4 * skill->GetLevel (), 180 - 6.0 * skill->GetLevel (), 6 + 0.6 * skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (7068 + 600 * skill->GetLevel ());
            skill->GetVictim ()->SetFreemove (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (100);
            skill->GetVictim ()->SetRatio (0.1);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (2859);
            skill->GetVictim ()->SetAurabless2 (1);
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
            return (float) (10);
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