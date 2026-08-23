//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39420  "Œ®Glacial Spike"39421  "^ff5c00Œ®Glacial Spike

^ffcb4aRange„ÄÄ^96f5ff20^ffffff„ÄÄ^ffcb4ameters
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.3„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff1.2„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff30.0„ÄÄ^ffcb4aseconds
^ffcb4aRequired Weapon:„ÄÄ^ffffffPolearm
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation„ÄÄ^ffffffCelestial Saint
Focus cold magic into a ^96f5ff12^ffffff-meter burst
of glacial spikes, dealing base physical
damage plus ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff8504^ffffff.
Restores ^96f5ff50^ffffff Chi after use. This attack is guaranteed to hit.

Weakens the inflicted targets within ^96f5ff10^ffffff meters,
reducing their Physical and Magic
Defenses by ^96f5ff%d%%^ffffff. Reduces Physical Defense
by ^96f5ff90%%^ffffff and Magic Defense by ^96f5ff60%%^ffffff.
^ffffffFreezes the inflicted targets ^96f5ff10^ffffff meters away
for ^96f5ff5 ^ffffff seconds.

^a6caf0Costs ^ffffff2^a6caf0 Sparks.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: Deals an additional ^96f5ff60%% ^ffeaabof weapon damage plus ^96f5ff1592^ffeaab.
^ffeaabLv5-7: Deals an additional ^96f5ff90%% ^ffeaabof weapon damage plus ^96f5ff2388^ffeaab.
^ffeaabLv8-9: Deals an additional ^96f5ff120%% ^ffeaabof weapon damage plus ^96f5ff3184^ffeaab.
^ffeaabLv10: Deals an additional ^96f5ff150%% ^ffeaabof weapon damage plus ^96f5ff3980^ffeaab.@1@2
^ffeaabDeals an additional ^96f5ff%d%% ^ffeaabof weapon damage plus ^96f5ff%d^ffeaab.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL942
#define __CPPGEN_GNET_SKILL942
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill942:public Skill
    {
        public:
        enum
        { SKILL_ID = 942 };
        Skill942 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill942Stub:public SkillStub
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
        Skill942Stub ():SkillStub (942)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L" ±ø’ÀÈ∆¨.±©";
            nativename          = " ±ø’ÀÈ∆¨.±©";
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
        virtual ~ Skill942Stub ()
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
            skill->GetVictim ()->SetValue (5);
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