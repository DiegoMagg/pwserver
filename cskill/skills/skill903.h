//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39030  "Œ®Ocean's Edge"39031  "^ff5c00Œ®Ocean's Edge

^ffcb4aRange„ÄÄ^ffffffMelee
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4a„ÄÄ^ffffff0.3„ÄÄ^ffcb4aseconds
^ffcb4aChannel„ÄÄ^ffffff1.0„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff3.0„ÄÄ^ffcb4aseconds
^ffcb4aChi Gained„ÄÄ^ffffff10
^ffcb4aWeapon„ÄÄ^ffffffMelee Weapon
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Dragon's Might

^ffcb4aRequired Cultivation„ÄÄ^ffffffChaotic Soul
Slash an opponent with your magic-imbued weapon,
dealing base physical damage plus ^96f5ff2800^ffffff weapon damage.

Different weapon types have different effects.
Axe and Hammer: Slows the target by ^96f5ff60%%^ffffff. Lasts ^96f5ff10^ffffff seconds. Has ^96f5ff20%%^ffffffchance to freeze
target for ^96f5ff3^ffffff seconds.
Polearm: Increases range to ^96f5ff20^ffffff meters. Deals an additional ^96f5ff150%%^ffffff of weapon damage.
Blades and Swords: Deals an additional ^96f5ff310%%^ffffff of weapon damage plus ^96f5ff1864^ffffff.
Other weapons: Same as Axe and Hammer.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Has a 100%% chance to freeze the target for ^96f5ff1.5^00ff00 seconds. No longer slows.
^00ff00Lv5-7: Has a 100%% chance to freeze the target for ^96f5ff2.0^00ff00 seconds. No longer slows.
^00ff00Lv8-9: Has a 100%% chance to freeze the target for ^96f5ff2.5^00ff00 seconds. No longer slows.
^00ff00 Lv10: Has a 100%% chance to freeze the target for ^96f5ff3.0^00ff00 seconds. No longer slows.@1@2
^00ff00 Has a 100%% chance to freeze the target for ^96f5ff%.1f^00ff00 seconds. No longer slows.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL903
#define __CPPGEN_GNET_SKILL903
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill903:public Skill
    {
        public:
        enum
        { SKILL_ID = 903 };
        Skill903 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill903Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (600);
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
        Skill903Stub ():SkillStub (903)
        {
            cls                 = 1;
#ifdef _SKILL_CLIENT
            name                = L"…„ªÍ÷Æ¡¶";
            nativename          = "…„ªÍ÷Æ¡¶";
            icon                = "…„ªÍ÷Æ¡¶.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 20;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 6;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 2253;
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
            effect              = "∆£±π.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill903Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (600);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 120000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 79 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
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
            return (float) (31);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 20, 600, 2);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 100;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (5000);
            skill->GetVictim ()->SetSleep (1);
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
        float GetHitrate (Skill * skill) const
        {
            return (float) (1);
        }
#endif
    };
}
#endif