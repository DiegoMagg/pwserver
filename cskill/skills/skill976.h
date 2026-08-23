//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39760  "Î¨Gemini Slash"39761  "^ff5c00Î¨Gemini Slash

^ffcb4aRangeã€€^96f5ff28^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff150^ffffff
^ffcb4aChannelã€€^ffffff3.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff15.0ã€€^ffcb4aseconds
^ffcb4aRequired Weaponã€€^ffffffSword
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Unleash a triad of attacks against all enemies
within ^96f5ff12^ffffff meters of the target, dealing base physical
damage plus ^96f5ff500%%^ffffff of weapon damage plus ^96f5ff8250^ffffff. Has a ^d618e7^96f5ff33%%^ffffff chance
of reducing the target's movement speed by ^96f5ff60%% ^fffffffor ^96f5ff8^ffffff seconds.
Deals additional Metal damage to targets with the Î¨Spirit
Bore status, reducing their Attack and Defense Levels.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Guaranteed to reduce speed by ^96f5ff40%% ^00ff00for ^96f5ff8^00ff00 seconds.
^00ff00Lv5-7: Guaranteed to reduce speed by ^96f5ff50%% ^00ff00for ^96f5ff8^00ff00 seconds.
^00ff00Lv8-9: Guaranteed to reduce speed by ^96f5ff60%% ^00ff00for ^96f5ff8^00ff00 seconds.
^00ff00Lv10: Guaranteed to reduce speed by ^96f5ff70%% ^00ff00for ^96f5ff8^00ff00 seconds.@1@2
^00ff00Guaranteed to reduce speed by ^96f5ff%d%% ^00ff00for ^96f5ff8^00ff00 seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL976
#define __CPPGEN_GNET_SKILL976
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill976:public Skill
    {
        public:
        enum
        { SKILL_ID = 976 };
        Skill976 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill976Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (55 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (600);
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
        Skill976Stub ():SkillStub (976)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"Ã÷ÍõÖä";
            nativename          = "Ã÷ÍõÖä";
            icon                = "Ã÷ÍõÖä.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 600000;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 5;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 1;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "Ã÷ÍõÖä.sgc";
#endif
            range.type          = 5;
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
        virtual ~ Skill976Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 55,58,61,64,67,70,73,76,79,82 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 500021,500026,500031,500036,500041,500046,500051,500056,500061,500066 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1160,1840,2780,4000,5620,7780,10640,14480,19660,26600 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 55 + (skill->GetLevel () - 1) * 3, 100 - skill->GetLevel () * 5);
            
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
            skill->GetVictim ()->SetTime (3000 + skill->GetT1 () * 34);
            skill->GetVictim ()->SetImmuneslowdizzy (1);
            skill->GetVictim ()->SetProbability (1.0 * 100 - skill->GetLevel () * 5);
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetDecresist (1);
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
            return (float) (40);
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