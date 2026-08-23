//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
52030  "Œ®Shield of Rejection"52031  "^ff5c00Œ®Shield of Rejection

^ffcb4aRange„ÄÄ^ffffff25„ÄÄ^ffcb4a„ÄÄmeter(s)
^ffcb4aMana„ÄÄ^96f5ff126.8^ffffff
^ffcb4aChannel„ÄÄ^ffffffInstant
^ffcb4aCooldown„ÄÄ^ffffff90„ÄÄ^ffcb4asecond(s)
^ffcb4aWeapon„ÄÄ^ffffffSword Shield, Unarmed
^ffcb4aGlyph Bonus    ^ff5c00Martial Prowess

^ffcb4aRequired Cultivation„ÄÄ„ÄÄ^ffffffChaotic Soul
Tosses your energy-fused shield at the enemy, dealing a Physical Damage equal to
physical damage equal to your base Physical Attack plus ^96f5ff8599^ffffff.
Also stuns the target for ^96f5ff5^ffffff seconds.

^FFFF00Used when inflicted with control effects.
^a6caf0Requires ^ffffff100^a6caf0  Shield Energy.

^00ff00Verdant Glyph Effect:@1
^00ff00LV1-4: Attack range is increased by ^96f5ff4^00ff00 meter.
^00ff00LV5-7: Attack range is increased by ^96f5ff6^00ff00 meters.
^00ff00LV8-9: Attack range is increased by ^96f5ff8^00ff00 meters.
^00ff00LV10: Attack range is increased by ^96f5ff10^00ff00 meters. @1@2
^00ff00Attack range is increased by ^96f5ff%d^00ff00 meters. @2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5203
#define __CPPGEN_GNET_SKILL5203
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5203:public Skill
    {
        public:
        enum
        { SKILL_ID = 5203 };
        Skill5203 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5203Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
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
                skill->GetPlayer ()->SetDecmp (126.8);
                skill->SetPlus (8599);
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
                return 1;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill5203Stub ():SkillStub (5203)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"…Ò°§“Ì∂‹-Œ¨—Ô";
            nativename          = "…Ò°§“Ì∂‹-Œ¨—Ô";
            icon                = "…Ò“Ì∂‹Œ¨—Ô¬Ã.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 7;
            {
                restrict_weapons.push_back (59830);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "”∑Ê_”∂‹√Õ_∂‹≈∆∑…01.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5143, 1));
            pre_skills.push_back (std::pair < ID, int >(5144, 1));
            runes_attr          = 1;
            feature             = 1202;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = " ©∑≈æ‡¿Î‘ˆº”.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5203Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (126);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 90000,90000,90000,90000,90000,90000,90000,90000,90000,90000 };
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
            float _glyph_value = get_glyph(skill->GetLevel (), 4, 6, 8, 10);
            return (float) (25 + _glyph_value);
        }
        int GetCostShieldEnergy (Skill * skill) const
        {
            static int aarray[10] = { 100,100,100,100,100,100,100,100,100,100 };
            return aarray[skill->GetLevel () - 1];
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 126.8);
            
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
            skill->GetVictim ()->SetTime (5400);
            skill->GetVictim ()->SetDizzy (1);
            
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
            float _glyph_value = get_glyph(skill->GetLevel (), 4, 6, 8, 10);
            return (float) (28 + _glyph_value);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 0;
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