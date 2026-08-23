//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39950  "Î¨Darkcloud Bolt"39951  "^ff5c00Î¨Darkcloud Bolt

^ffcb4aRangeã€€^ffffff28^ffcb4aã€€ã€€meters
^ffcb4aManaã€€^96f5ff115^ffffff
^ffcb4aChannelã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff6.0ã€€ ^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aRequired Weapon:ã€€^ffffffSword
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Call down a sudden storm to attack all enemies within ^96f5ff12 ^ffffffmeters around the target.
Deals ^96f5ff110%% ^ffffffof base physical damage plus ^96f5ff100%% ^ffffffof weapon damage
plus ^96f5ff2700^ffffff. Has a ^96f5ff50%% ^ffffffchance to interrupt the target's channeling.
Freezes targets with the Eye of the Northern Sky status, dealing
additional damage and reducing their Defense Level.

^00ffffEthereal Glyph Effect:@1
^00ffffLv1-4: Range increased by ^ffffff2 ^00ffffmeters.
^00ffffLv5-7: Range increased by ^ffffff3 ^00ffffmeters.
^00ffffLv8-9: Range increased by ^ffffff4 ^00ffffmeters.
^00ffffLv10: Range increased by ^ffffff5 ^00ffffmeters.@1@2
^00ffffRange increased by ^ffffff%d ^00ffffmeters.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL995
#define __CPPGEN_GNET_SKILL995
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill995:public Skill
    {
        public:
        enum
        { SKILL_ID = 995 };
        Skill995 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill995Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (30 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (90 + 32 * (skill->GetLevel () - 1));
                skill->SetFiredamage ((25 + (skill->GetLevel () - 1) * 30 + skill->GetT0 () + skill->GetT1 ()) * 3.1);
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
        Skill995Stub ():SkillStub (995)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"·ÙÐÄÖä";
            nativename          = "·ÙÐÄÖä";
            icon                = "·ÙÐÄÖä.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 90032;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 5;
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
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "·ÙÐÄÖä.sgc";
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
        virtual ~ Skill995Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 30,33,36,39,42,45,48,51,54,57 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 10000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 2005,2010,2015,2020,2025,2030,2035,2040,2045,2050 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 60,240,560,1040,1680,2560,3720,5260,7300,10000 };
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
            return (float) (18);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            30 + (skill->GetLevel () - 1) * 3,
            90 + 32 * (skill->GetLevel () - 1), (25 + (skill->GetLevel () - 1) * 30) * 3.1, skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (9000 + (skill->GetT0 () + skill->GetT1 ()) * 50);
            skill->GetVictim ()->SetRatio (skill->GetLevel () * 0.01 + skill->GetT0 () * 0.0005 + skill->GetT1 () * 0.0005);
            skill->GetVictim ()->SetSlowattackpray (1);
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
            return (float) (20);
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