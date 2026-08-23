//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39360  "Œ®Heaven's Flame"39361  "^ff5c00Œ®Heaven's Flame

^ffcb4aRange„ÄÄ^ffffff8„ÄÄ^ffcb4ameters
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.4„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff1.2„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff30.0„ÄÄ^ffcb4aseconds
^ffcb4aWeapon„ÄÄ^ffffffA/H
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation„ÄÄ^ffffffCelestial Saint
Summon a blazing dragon to blast all enemies
within ^96f5ff12^ffffff of your opponent,
dealing base physical damage by^96f5ff100%%^ffffff of weapon damage
plus ^96f5ff5975^ffffff. Also increases the damage they take for the next ^96f5ff8^ffffff
seconds by ^96f5ff%d%%^ffffff. Restores
^96f5ff50^ffffff Chi after use. This attack is guaranteed to hit.

^a6caf0Costs 2^ffffff^a6caf0 Sparks.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: Deals an additional ^96f5ff40%% ^ffeaabof weapon damage.
^ffeaabLv5-7: Deals an additional ^96f5ff60%% ^ffeaabof weapon damage.
^ffeaabLV8-9: Deals an additional ^96f5ff80%% ^ffeaabof weapon damage.
^ffeaabLV10 : Deals an additional ^96f5ff100%% ^ffeaabof weapon damage.@1@2
^ffeaabDeals an additional ^96f5ff%d%% ^ffeaabof weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL936
#define __CPPGEN_GNET_SKILL936
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill936:public Skill
    {
        public:
        enum
        { SKILL_ID = 936 };
        Skill936 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill936Stub:public SkillStub
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
        Skill936Stub ():SkillStub (936)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L" ±ø’ÀÈ∆¨.“∆∂Ø";
            nativename          = " ±ø’ÀÈ∆¨.“∆∂Ø";
            icon                = "";
#endif
            max_level           = 1;
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
        virtual ~ Skill936Stub ()
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
            skill->GetVictim ()->SetRatio (0.2);
            skill->GetVictim ()->SetSpeedup (1);
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