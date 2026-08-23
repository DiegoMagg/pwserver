//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39700  "Î¨Wind Blade"39701  "^ff5c00Î¨Wind Blade

^ffcb4aRangeã€€^96f5ff28^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff70^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.8ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff2.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aRequired Weaponã€€^ffffffSword
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Slash through your enemy with a swift,
powerful attack, dealing ^96f5ff110%%^ffffff of base physical
damage plus ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff1815^ffffff.

Has a ^96f5ff100%% ^ffffffchance of applying
the Î¨Eye of the Northern Sky status for ^96f5ff10 ^ffffffseconds,
causing your ^96f5ffÎ¨Darkcloud Bolt^ffffff to deal an
additional ^96f5ff2060 ^ffffffdamage, freeze the target, and reduce their Defense Level.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Î¨Eye of the Northern Sky freezes the target for ^96f5ff1^00ff00 second and reduces Defense Level by ^96f5ff11^00ff00.
^00ff00Lv5-7: Î¨Eye of the Northern Sky freezes the target for ^96f5ff2^00ff00 seconds and reduces the Defense Level by ^96f5ff14^00ff00.
^00ff00Lv8-9: Î¨Eye of the Northern Sky freezes the target for ^96f5ff3^00ff00 seconds and reduces the Defense Level by ^96f5ff17^00ff00.
^00ff00Lv10: Î¨Eye of the Northern Sky freezes the target for ^96f5ff4^00ff00 seconds and reduces the Defense Level by ^96f5ff20^00ff00.@1@2
^00ff00Î¨Eye of the Northern Sky freezes the target for ^96f5ff%d^00ff00 seconds and reduces the Defense Level by ^96f5ff%d^00ff00.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL970
#define __CPPGEN_GNET_SKILL970
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill970:public Skill
    {
        public:
        enum
        { SKILL_ID = 970 };
        Skill970 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill970Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (80 - skill->GetT0 () * 0.2);
                skill->GetPlayer ()->SetDecelfap (500);
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
        Skill970Stub ():SkillStub (970)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"»ìÔª·¨Ó¡";
            nativename          = "»ìÔª·¨Ó¡";
            icon                = "»ìÔª·¨Ó¡.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 500000;
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
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "»ìÔª·¨Ó¡.sgc";
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
        virtual ~ Skill970Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (80);
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
            static int aarray[10] = { 600025,600030,600035,600040,600045,600050,600055,600060,600065,600070 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1680,2560,3720,5260,7300,10000,13620,18480,25000,34000 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 5 + skill->GetLevel () * 0.2);
            
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
            skill->GetVictim ()->SetTime (5000 + skill->GetLevel () * 200);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetImmunesealed (1);
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