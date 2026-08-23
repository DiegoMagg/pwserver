//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37250  "Î¨Redstone Venomworm"37251  "^ff5c00Î¨Redstone Venomworm

^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4aMeters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1.5ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.8ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff8.0ã€€^ffcb4aseconds
^ffcb4aRequired Weapon:ã€€^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Fling a blazing sandworm that ignites the target for ^96f5ff15^ffffff seconds,
dealing base magic damage plus ^96f5ff300%%^ffffff of weapon damage plus ^96f5ff3578^ffffff as
Fire damage. The worm burrows into the target for ^96f5ff15^ffffff seconds, lowering
its Physical Defense by ^96f5ff50%%^ffffff. Has a ^96f5ff25%%^ffffff chance to instead reduce Physical
Defense by ^96f5ff180%%^ffffff. Cannot be a critical hit, but has a chance equal to ^96f5fftwice^ffffff your
Critical Rate to deal ^96f5ff1.5^ffffff times as much damage. Stacks up to ^96f5ff10^ffffff times
with other damage-over-time effects and can be detonated by certain skills.

^a6caf0Costs ^ffffff25^a6caf0 Chi.

^ffeaabArgent Glyph Effect:@1
^ffeaabOver-time damage changes into Fire damage.
^ffeaabLv1-4: Deals direct damage equals to ^96f5ff20%%^ffeaab of base magic attack.
^ffeaabLv5-7: Deals direct damage equals to ^96f5ff30%%^ffeaab of base magic attack.
^ffeaabLv8-9: Deals direct damage equals to ^96f5ff40%%^ffeaab of base magic attack.
^ffeaabLv10: Deals direct damage equals to ^96f5ff50%%^ffeaab of base magic attack.@1@2
^ffeaabDeals direct damage equals to ^96f5ff%d%%^ffeaab of base magic attack.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL725
#define __CPPGEN_GNET_SKILL725
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill725:public Skill
    {
        public:
        enum
        { SKILL_ID = 725 };
        Skill725 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill725Stub:public SkillStub
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
        Skill725Stub ():SkillStub (725)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"ÎïÆ·¼¼ÄÜ-¿ñ±©Ò©¼Á";
            nativename          = "ÎïÆ·¼¼ÄÜ-¿ñ±©Ò©¼Á";
            icon                = "";
#endif
            max_level           = 5;
            type                = 4;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "¾ÞÁéÉñÁ¦.sgc";
#endif
            range.type          = 5;
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
        virtual ~ Skill725Stub ()
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
            static int aarray[10] = { 1,2,3,4,5,5,5,5,5,5 };
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
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetRatio (0.1 + 0.1 * skill->GetLevel ());
            skill->GetVictim ()->SetInchurt (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetRatio (0.05 + 0.1 * skill->GetLevel ());
            skill->GetVictim ()->SetFastattack (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetRatio (0.05 + 0.1 * skill->GetLevel ());
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