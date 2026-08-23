//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37260  "Î¨Noxious Gas"37261  "^ff5c00Î¨Noxious Gas

^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4aMeters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff2.5ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.8ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff5.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aRequired Weapon:ã€€^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Fling a large toxic parasite, creating a noxious cloud
that attacks all enemies within ^96f5ff9^ffffff meters of your target.
Deals base magic damage plus ^96f5ff200%%^ffffff of weapon damage plus
^96f5ff3054^ffffff as Wood damage. Over the next ^96f5ff9^ffffff seconds, targets will
take an additional ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff3054^ffffff as Wood damage."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL726
#define __CPPGEN_GNET_SKILL726
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill726:public Skill
    {
        public:
        enum
        { SKILL_ID = 726 };
        Skill726 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill726Stub:public SkillStub
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
        Skill726Stub ():SkillStub (726)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"ÎïÆ·¼¼ÄÜ-¾»»¯Ò©¼Á";
            nativename          = "ÎïÆ·¼¼ÄÜ-¾»»¯Ò©¼Á";
            icon                = "";
#endif
            max_level           = 1;
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
            effect              = "Ðþ¾»Öä.sgc";
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
        virtual ~ Skill726Stub ()
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
            static int aarray[10] = { 1 };
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
            skill->GetVictim ()->SetCleardebuff (1);
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