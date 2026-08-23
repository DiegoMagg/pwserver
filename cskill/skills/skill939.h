//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39390  "Î¨Glacial Spike"39391  "^ff5c00Î¨Glacial Spike

^ffcb4aRangeã€€^96f5ff20^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.2ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffPolearm
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Focus cold magic into a ^96f5ff12^ffffffmeter burst of glacial spikes,
dealing base physical damage plus ^96f5ff8504^ffffff. Restores ^96f5ff50^ffffff Chi after use.
This attack is guaranteed to hit.

If the target is within ^96f5ff10^ffffff meters of you,
their Physical and Magical Damage will be
reduced by ^96f5ff%d%%^ffffff of weapon damage.
(Physical Defense reduction increased to ^96f5ff90%%^ffffff of weapon damage.
Magic Defense reduction increased to ^96f5ff60%%^ffffff of weapon damage.)
^ffffffFreezes the inflicted targets ^96f5ff10^ffffffmeters away for
^96f5ff5^ffffff seconds.

^a6caf0Costs ^ffffff2^a6caf0 Sparks.

^00ff00Verdant Glyph Effect:@1
^00ff00Freezes the target for ^96f5ff6^00ff00 seconds and increases the skill damage.
^00ff00Lv1-4:Deals an additional ^96f5ff40%%^00ff00 of weapon damage.
^00ff00Lv5-7:Deals an additional ^96f5ff60%%^00ff00 of weapon damage.
^00ff00Lv8-9:Deals an additional ^96f5ff80%%^00ff00 of weapon damage.
^00ff00 Lv10:Deals an additional ^96f5ff100%%^00ff00 of weapon damage.@1@2
^00ff00Freezes the target for ^96f5ff6^00ff00 seconds and increases an additional ^96f5ff%d%%^00ff00of weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL939
#define __CPPGEN_GNET_SKILL939
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill939:public Skill
    {
        public:
        enum
        { SKILL_ID = 939 };
        Skill939 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill939Stub:public SkillStub
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
        Skill939Stub ():SkillStub (939)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"Ê±¿ÕËéÆ¬.Ò÷³ª";
            nativename          = "Ê±¿ÕËéÆ¬.Ò÷³ª";
            icon                = "";
#endif
            max_level           = 10;
            type                = 4;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 0;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 1;
            restrict_corpse     = 0;
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 2;
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
        virtual ~ Skill939Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 0;
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
            return (float) (0);
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
            skill->GetVictim ()->SetTime (300000);
            skill->GetVictim ()->SetRatio (0.1);
            skill->GetVictim ()->SetFastpray (1);
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
            return (float) (0);
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