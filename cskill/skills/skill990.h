//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69900  "Œ®Tidal Mind"69901  "^ff5c00Œ®Tidal Mind

^ffcb4aMana„ÄÄ^96f5ff175^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.1„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff0.9„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff120„ÄÄ^ffcb4aseconds
^ffcb4aChi Gained„ÄÄ^ffffff10
^ffcb4aWeapon„ÄÄ^ffffffDagger
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation„ÄÄ^ffffffCelestial Saint
Increases your chance to resist negative status effects by
^96f5ff100%%^ffffff, and chance to dodge damage by ^96f5ff100%%^ffffff,
lasts for ^96f5ff2^ffffff seconds.

^ff0000Sanguine Glyph Effect:@1
^ff0000Lv1-4: Effects lasts for ^96f5ff4^ff0000 seconds.
^ff0000Lv5-7: Effects lasts for ^96f5ff6^ff0000 seconds.
^ff0000Lv8-9: Effects lasts for ^96f5ff8^ff0000 seconds.
^ff0000Lv10: DEffects lasts for ^96f5ff10^ff0000 seconds.@1@2
Effects lasts for ^96f5ff%d^ff0000 seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL990
#define __CPPGEN_GNET_SKILL990
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill990:public Skill
    {
        public:
        enum
        { SKILL_ID = 990 };
        Skill990 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill990Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecelfmp (65);
                skill->GetPlayer ()->SetDecelfap (88 + 57 * (skill->GetLevel () - 1));
                skill->SetWaterdamage ((29 + (skill->GetLevel () - 1) * 19) * (1 + skill->GetPlayer ()->GetElfstr () * 0.01) * 3.1);
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
        Skill990Stub ():SkillStub (990)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"’Ω∂∑≤®Œ∆.√¸‘À";
            nativename          = "’Ω∂∑≤®Œ∆.√¸‘À";
            icon                = "’Ω∂∑≤®Œ∆√¸‘À.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 88057;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 4;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 4;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 0;
            allow_air           = 0;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "’Ω∂∑≤®Œ∆√¸‘À.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 0));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill990Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (65);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 8000,8000,8000,8000,8000,8000,8000,8000,8000,8000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 50022,50027,50032,50037,50042,50047,50052,50057,50062,50067 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1280,2000,2980,4300,6000,8280,11320,15380,20800,28400 };
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
            return (float) (15);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (), 88 + 57 * (skill->GetLevel () - 1), (29 + 19 * (skill->GetLevel () - 1)) * 3.1);
            
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
            skill->GetVictim ()->SetTime (3000 + skill->GetT1 () * 33);
            skill->GetVictim ()->SetFix (1);
            skill->GetVictim ()->SetProbability (1.0 * 50);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetRatio (0.04);
            skill->GetVictim ()->SetDechp (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfstr ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfagi ());
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
            return (float) (15);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 20;
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