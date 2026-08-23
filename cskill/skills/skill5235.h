//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
52350  "Î¨Ghost Slash"52351  "^ff5c00Î¨Ghost Slash

^ffcb4aRangeã€¢ã^ffffffMelee
^ffcb4aManaã€¢ã^96f5ff165^ffffff
^ffcb4aChannelã€¢ã^ffffff0.1ã€¢ã^ffcb4asecond
^ffcb4aCastã€¢ã^ffffff0.8ã€¢ã^ffcb4asecond
^ffcb4aCooldownã€¢ã^ffffff12.0ã€¢ã^ffcb4aseconds
^ffcb4aChi Gainedã€¢ã^ffffff10
^ffcb4aWeaponã€¢ã^ffffffSword Shield
^ffcb4aGlyph Bonusã€¢ã^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€¢ã^ffffffCelestial Saint
Attacks with all might, dealing Physical Damage to the target equal to
your Physical Attack plus ^96f5ff8994^ffffff. In the next ^96f5ff10^ffffff seconds,
lowers its Defense by ^96f5ff50%%^ffffff of its gear value. Also interrupts the target.

^ff0000Sanguine Glyph Effect:@1
^ff0000LV1-4: Crit Hits also Silence the target for ^96f5ff0.5^ff0000 second
^ff0000LV5-7: Crit Hits also Silence the target for ^96f5ff1.0^ff0000 second
^ff0000LV8-9: Crit Hits also Silence the target for ^96f5ff1.5^ff0000 seconds
^ff0000LV10: Crit Hits also Silence the target for ^96f5ff2.0^ff0000 seconds @1@2
Crit Hits also Silence the target for ^96f5ff%.1f^ff0000 seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5235
#define __CPPGEN_GNET_SKILL5235
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5235:public Skill
    {
        public:
        enum
        { SKILL_ID = 5235 };
        Skill5235 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5235Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * (171.1));
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
                return 800;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (165));
                skill->SetPlus (8994);
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
        Skill5235Stub ():SkillStub (5235)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤¹íÅÐÄæÎäÕ¶";
            nativename          = "Éñ¡¤¹íÅÐÄæÎäÕ¶";
            icon                = "Éñ¹íÅÐÄæÎäÕ¶ºì.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59830);
            }
#ifdef _SKILL_CLIENT
            effect              = "Óð·æ_Í»´ÌÒ»»÷_»÷ÖÐ01.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5169, 1));
            pre_skills.push_back (std::pair < ID, int >(5170, 1));
            runes_attr          = 3;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "¸ºÃæ×´Ì¬Ð§¹ûÔöÇ¿2.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill5235Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (165);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 901;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 12000,12000,12000,12000,12000,12000,12000,12000,12000,12000 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 171.1);
            
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
            skill->GetVictim ()->SetBreak (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (10200);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetDecdefence (1);
            
            int _glyph_value = get_glyph(skill->GetLevel (), 1700, 2100, 2300, 2700);
            
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPlayer ()->CheckCriticalDamage () ? 100 : 0));
            skill->GetVictim ()->SetTime (_glyph_value);
            skill->GetVictim ()->SetSealed (1);
            
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
            return (float) (skill->GetPlayer ()->GetRange () + 8);
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
            return (float) (1.0);
        }
#endif
    };
}
#endif