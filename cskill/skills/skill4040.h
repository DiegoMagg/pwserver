//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
40400  "Œ®Swirling Mist"40401  "^ff5c00Œ®Swirling Mist

^ffcb4aRange„ÄÄ^96f5ff27^ffffff„ÄÄ^ffcb4ameters
^ffcb4aMana„ÄÄ^96f5ff225^ffffff
^ffcb4aChannel„ÄÄ^ffffff1.0„ÄÄ^ffcb4asecond
^ffcb4aCast„ÄÄ^ffffff1.0„ÄÄ^ffcb4asecond
^ffcb4aCooldown„ÄÄ^ffffff15.0„ÄÄ^ffcb4aseconds
^ffcb4aChi Gained„ÄÄ^ffffff10
^ffcb4aRequired Weapon:„ÄÄ^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation„ÄÄ^ffffffChaotic Soul
Conjure a ball of condensed mist to strike all enemies within
^96f5ff10^ffffff meters of your target, dealing base magic damage plus ^96f5ff6018^ffffff
as Wood damage and applying the Mist's Grasp status. When the
target's Health is below ^96f5ff60%%^ffffff, Mist's Grasp will activate for ^96f5ff6^ffffff
seconds, dealing base magic damage plus ^96f5ff6100^ffffff as Wood damage.
Mist's Grasp lasts ^96f5ff45^ffffff seconds or until activated. Has a ^96f5ff25%%^ffffff
chance to reduce the target's Wood Resistance by ^96f5ff15%%^ffffff for ^96f5ff6^ffffff seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4040
#define __CPPGEN_GNET_SKILL4040
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4040:public Skill
    {
        public:
        enum
        { SKILL_ID = 4040 };
        Skill4040 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4040Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (0.2 * 225);
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 5;
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
                skill->GetPlayer ()->SetDecmp (0.8 * 225);
                skill->SetPlus (6018);
                skill->SetWooddamage (skill->GetMagicattack ());
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
        Skill4040Stub ():SkillStub (4040)
        {
            cls                 = 9;
#ifdef _SKILL_CLIENT
            name                = L"…Ò°§«‡ŒÌ»∆";
            nativename          = "…Ò°§«‡ŒÌ»∆";
            icon                = "…Ò°§«‡ŒÌ»∆.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 3;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1425;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "˜»¡È_«‡ŒÌ”Í.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2228, 1));
            pre_skills.push_back (std::pair < ID, int >(2229, 1));
            runes_attr          = 3;
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
        virtual ~ Skill4040Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (225);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
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
            static int aarray[10] = { 53979,53979,53979,53979,53979,53979,53979,53979,53979,53979 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (10);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (4 + 0.3 * skill->GetLevel ());
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (27);
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
            skill->GetVictim ()->SetTime (45000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetAmount (6000);
            skill->GetVictim ()->SetValue (skill->GetT0 () *
            (1 +
            0.01 * (skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () >
            0 ? skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () : 0)));
            skill->GetVictim ()->SetPoisionseed (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 25);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetRatio (0.15);
            skill->GetVictim ()->SetReducewood (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetPuremagicattack () + 6100);
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttackdegree ());
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
            return (float) (36);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 8;
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