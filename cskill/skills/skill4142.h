//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
41420  "Œ®Distant Cloud"41421  "^ff5c00Œ®Distant Cloud

^ffcb4aRange„ÄÄ^96f5ff12^ffffff„ÄÄ^ffcb4ameters
^ffcb4aMana„ÄÄ^96f5ff174^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.1„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff1.8„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff60.0„ÄÄ^ffcb4aseconds
^ffcb4aWeapon„ÄÄ^ffffffSaber
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation„ÄÄ^ffffffCelestial Saint
Launch the target into the air with a powerful
blow, dealing base physical damage plus ^96f5ff200%%^ffffff of
weapon damage plus ^96f5ff8933^ffffff. Increases your Critical
Rate by ^96f5ff40%%^ffffff for ^96f5ff6^ffffff seconds. Resets the cooldown
on Relentless Drift, and removes the cooldown
from your next Relentless Drift within ^96f5ff6^ffffff seconds.

^a6caf0Costs ^ffffff50 ^a6caf0Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4142
#define __CPPGEN_GNET_SKILL4142
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4142:public Skill
    {
        public:
        enum
        { SKILL_ID = 4142 };
        Skill4142 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4142Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
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
                skill->GetPlayer ()->SetDecmp (34.79);
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
                return 2001;
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
                skill->GetPlayer ()->SetDecmp (139.2);
                skill->SetPlus (8933);
                skill->SetRatio (2);
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
        Skill4142Stub ():SkillStub (4142)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"…Ò°§Â„‘∆∫∫";
            nativename          = "…Ò°§Â„‘∆∫∫";
            icon                = "…Ò°§Â„‘∆∫∫.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 50;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1011;
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
            effect              = "“π”∞_…Ò_Â„‘∆∫∫_ª˜÷–.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(3286, 1));
            pre_skills.push_back (std::pair < ID, int >(3287, 1));
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
        virtual ~ Skill4142Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (174);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1800;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
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
            static int aarray[10] = { 53994,53994,53994,53994,53994,53994,53994,53994,53994,53994 };
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
            return (float) (skill->GetPlayer ()->GetRange () + 10);
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
            skill->GetVictim ()->SetTime (2000);
            skill->GetVictim ()->SetValue (2);
            skill->GetVictim ()->SetPalsy (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio(0);
            skill->GetVictim ()->SetAmount(500);
            skill->GetVictim ()->SetValue(4136);
            skill->GetVictim ()->SetSkillcooldown(1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio(0);
            skill->GetVictim ()->SetAmount(500);
            skill->GetVictim ()->SetValue(4137);
            skill->GetVictim ()->SetSkillcooldown(1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio(0);
            skill->GetVictim ()->SetAmount(500);
            skill->GetVictim ()->SetValue(4138);
            skill->GetVictim ()->SetSkillcooldown(1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio(0);
            skill->GetVictim ()->SetAmount(500);
            skill->GetVictim ()->SetValue(4139);
            skill->GetVictim ()->SetSkillcooldown(1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio(0);
            skill->GetVictim ()->SetAmount(500);
            skill->GetVictim ()->SetValue(4140);
            skill->GetVictim ()->SetSkillcooldown(1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio(0);
            skill->GetVictim ()->SetAmount(500);
            skill->GetVictim ()->SetValue(4141);
            skill->GetVictim ()->SetSkillcooldown(1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (100);
            skill->GetVictim ()->SetRatio (0.1);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (4231);
            skill->GetVictim ()->SetAurabless2 (1);
            
            float value = 40;
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetValue (value);
            skill->GetVictim ()->SetIncsmite (1);
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
            return (float) (skill->GetPlayer ()->GetRange () + 12.375 + 10);
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