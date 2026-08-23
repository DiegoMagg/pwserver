//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
49990  "Î©Tide of Flame"49991  "^ffff00Î©Tide of Flame

^ffcb4aRangeã€€^ffffffLong
^ffcb4aManaã€€^96f5ff225^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.6ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff5.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff15
^ffcb4aWeaponã€€^ffffffFirearm

^ffcb4aRequired Cultivationã€€ã€€^ffffffCelestial Demon
Attacks all enemy units toward the direction of the target in a
^96f5ff5^ffffff-meter wide area, dealing Fire damage equal to your base
Physical Attack plus ^96f5ff100%%^ffffff of gear damage plus ^96f5ff3525^ffffff.
Also lowers the target's Fire Resistance by ^96f5ff60%%^ffffff for ^96f5ff15^ffffff seconds.
The cooldown time of ^96f5ffÎ¨Murderous Indulgence^ffffff is reduced
by ^96f5ff0.5^ffffff seconds per use of this skill.
^ffffffThe cooldown time will not be reduced for ^96f5ffArgent Glyph Effect of Î¨Murderous Indulgence^ffffff.

^d618e7Skill Channel and Cast times are reduced by ^96f5ff0.1^d618e7 second."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4999
#define __CPPGEN_GNET_SKILL4999
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4999:public Skill
    {
        public:
        enum
        { SKILL_ID = 4999 };
        Skill4999 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4999Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 100;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (198));
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
                skill->GetPlayer ()->SetDecmp (0.8 * (198));
                skill->SetPlus (3525);
                skill->SetRatio (1);
                skill->SetFiredamage (skill->GetAttack ());
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
        Skill4999Stub ():SkillStub (4999)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"»Ä¡¤°ÙÀï³ãÑæ";
            nativename          = "»Ä¡¤°ÙÀï³ãÑæ";
            icon                = "Ä§°ÙÀï³ãÑæ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 15;
            attr                = 5;
            rank                = 32;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1040;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59831);
            }
#ifdef _SKILL_CLIENT
            effect              = "Éñ»ú_»ðÏµÉËº¦Ö±ÏßÈº_»÷ÖÐ.sgc";
#endif
            range.type          = 1;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(4982, 1));
            feature             = 1301;
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
        virtual ~ Skill4999Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (225);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 602;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 5000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 4000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 4000000,4000000,4000000,4000000,4000000,4000000,4000000,4000000,4000000,4000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 60777,60777,60777,60777,60777,60777,60777,60777,60777,60777 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (5);
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
            skill->GetVictim ()->SetTime (16000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetDecresist (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (-1); //feature
            skill->GetVictim ()->SetRatio (500); //time to reduce
            skill->GetVictim ()->SetAmount (5043); //exclude skill
            skill->GetVictim ()->SetNewValue (5038); //id1
            skill->GetVictim ()->SetNewValue2 (5039); //id2
            skill->GetVictim ()->SetNewValue3 (5040); //id3
            skill->GetVictim ()->SetNewValue4 (5041); //id4
            skill->GetVictim ()->SetNewValue5 (5042); //id4
            skill->GetVictim ()->SetDecCooldownFeatureWith5SkillsID (1);
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
            return (float) (skill->GetPlayer ()->GetRange () + 5);
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
            return (float) (1);
        }
#endif
    };
}
#endif