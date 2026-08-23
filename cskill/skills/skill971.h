//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39710  "Œ®Wind Blade"39711  "^ff5c00Œ®Wind Blade

^ffcb4aRange„ÄÄ^96f5ff28^ffffff„ÄÄ^ffcb4ameters
^ffcb4aMana„ÄÄ^96f5ff70^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.2„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff0.8„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff2.0„ÄÄ^ffcb4aseconds
^ffcb4aChi Gained„ÄÄ^ffffff10
^ffcb4aRequired Weapon:„ÄÄ^ffffffSword
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Martial Prowess

^ffcb4aRequired Cultivation„ÄÄ^ffffffCelestial Saint
Slash through your enemy with a swift, powerful attack,
dealing ^96f5ff110%% ^ffffffof base physical damage plus ^96f5ff100%% ^ffffffof weapon
damage plus ^96f5ff1815^ffffff. Has a ^96f5ff40%% ^ffffffchance to deal an additional
^96f5ff2060 ^ffffffdamage, immobilize the target for ^96f5ff4 ^ffffffseconds, and
reduces the target's Defense Level by ^96f5ff20 ^fffffffor ^96f5ff8 ^ffffffseconds.

^00ffffEthereal Glyph Effect@1
^00ffffLv1-4: Range increased by ^ffffff2 ^00ffffmeters.
^00ffffLv5-7: Range increased by ^ffffff4 ^00ffffmeters.
^00ffffLv8-9: Range increased by ^ffffff6 ^00ffffmeters.
^00ffffLv10: Range increased by ^ffffff8 ^00ffffmeters.@1@2
^00ffffRange increased by ^ffffff%d ^00ffffmeters.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL971
#define __CPPGEN_GNET_SKILL971
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill971:public Skill
    {
        public:
        enum
        { SKILL_ID = 971 };
        Skill971 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill971Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (85 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (73 + 29 * (skill->GetLevel () - 1));
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
        Skill971Stub ():SkillStub (971)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"ÀÈ–ƒ÷‰";
            nativename          = "ÀÈ–ƒ÷‰";
            icon                = "ÀÈ–ƒ÷‰.dds";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 73029;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 3;
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
            effect              = "ÀÈ–ƒ÷‰.sgc";
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
        virtual ~ Skill971Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 85,88,91,94,97,100,103,106,109,112 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 800036,800041,800046,800051,800056,800061,800066,800071,800076,800081 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 4000,5620,7780,10640,14480,19660,26600,36200,59000,96800 };
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
            return (float) (20);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            85 + (skill->GetLevel () - 1) * 3, 73 + 29 * (skill->GetLevel () - 1), 2 * skill->GetLevel (), 2 * skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetRatio (0.02 * skill->GetLevel () + skill->GetT1 () * 0.002);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetWeakelement (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetSlow (1);
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
            return (float) (25);
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