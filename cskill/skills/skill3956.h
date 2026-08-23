//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39560  "Œ®Gravel Blade"39561  "^ff5c00Œ®Gravel Blade

^ffcb4aRange„ÄÄ^96f5ff28^ffffff„ÄÄ^ffcb4ameters
^ffcb4aMana„ÄÄ^96f5ff75^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.3„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff0.7„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff3.0 ^ffcb4aseconds
^ffcb4aChi Gained„ÄÄ^ffffff20
^ffcb4aRequired Weapon:„ÄÄ^ffffffSword
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Martial Prowess

^ffcb4aRequired Cultivation„ÄÄ^ffffffChaotic Soul
Deliver a massive blow to your enemy, dealing ^96f5ff110%%^ffffff of
base physical damage plus ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff1650^ffffff.

Has a ^96f5ff60%%^ffffff chance of applying the Œ®Spirit Bore status,
causing your ^96f5ffŒ®Gemini Slash^ffffff to deal an additional
^96f5ff7950 ^ffffffMetal damage and reduce the target's Attack
and Defense Levels by ^96f5ff12^ffffff for ^96f5ff3^ffffff minutes.

Has a ^96f5ff25%% ^ffffffchance of applying the Œ®Bloodletting
status, causing your ^96f5ffŒ®Stalagstrike^ffffff to
deal an additional ^96f5ff3750 ^ffffffdamage and
stun the target for ^96f5ff5^ffffff seconds.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3956
#define __CPPGEN_GNET_SKILL3956
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3956:public Skill
    {
        public:
        enum
        { SKILL_ID = 3956 };
        Skill3956 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3956Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 267;
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
                skill->GetPlayer ()->SetDecmp (0.2 * 75);
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return 0;
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
                return 733;
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
                skill->GetPlayer ()->SetDecmp (0.8 * 75);
                skill->SetPlus (1650);
                skill->SetRatio (1);
                skill->SetDamage (1.1 * skill->GetAttack ());
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
        Skill3956Stub ():SkillStub (3956)
        {
            cls                 = 8;
#ifdef _SKILL_CLIENT
            name                = L"…Ò°§ÀÈ ØΩ£√¢";
            nativename          = "…Ò°§ÀÈ ØΩ£√¢";
            icon                = "…Ò°§ÀÈ ØΩ£√¢.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1124;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (1);
            }
#ifdef _SKILL_CLIENT
            effect              = "…Ò_ÀÈ ØΩ£√¢_∑…––.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2442, 1));
            pre_skills.push_back (std::pair < ID, int >(2445, 1));
            runes_attr          = 1;
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
        virtual ~ Skill3956Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (75);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 733;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 3000,3000,3000,3000,3000,3000,3000,3000,3000,3000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 50000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 53966,53966,53966,53966,53966,53966,53966,53966,53966,53966 };
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
            return (float) (29);
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
            skill->GetVictim ()->SetProbability (1.0 * 25);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetRatio (802);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (1675);
            skill->GetVictim ()->SetBeattackattachstateGotadeSangue(1);
            
            skill->GetVictim ()->SetProbability (1.0 * 60);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetRatio (801);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (1681);
            skill->GetVictim ()->SetBeattackattachstateEspiritoArruinado(1);
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
            return (float) (45);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 5;
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