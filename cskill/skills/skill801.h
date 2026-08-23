//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38010  "Î¨Knife Throw"38011  "^ff5c00Î¨Knife Throw

^ffcb4aRangeã€€^96f5ff35^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff85^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.9ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff10.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aWeaponã€€^ffffffDagger
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Throw your dagger at the target, dealing base physical
damage plus ^96f5ff1888^ffffff and interrupting the target's channeling.

^d618e7Consumes all Hit Charges to increase effectiveness.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Deals an additional ^96f5ff100%%^00ff00 of weapon damage plus ^96f5ff1860^00ff00.
Each Hit Charge increases damage by ^96f5ff24%%^00ff00 of weapon damage.
^00ff00Lv5-7: Deals an additional ^96f5ff150%%^00ff00 of weapon damage plus ^96f5ff2790^00ff00.
Each Hit Charge increases damage by ^96f5ff36%%^00ff00 of weapon damage.
^00ff00Lv8-9: Deals an additional ^96f5ff200%%^00ff00 of weapon damage plus ^96f5ff3720^00ff00.
Each Hit Charge increases damage by ^96f5ff48%%^00ff00 of weapon damage.
^00ff00Lv10: Deals an additional ^96f5ff250%%^00ff00 of weapon damage plus ^96f5ff4650^00ff00.
Each Hit Charge increases damage by ^96f5ff60%%^00ff00 of weapon damage.@1@2
Deals an additional ^96f5ff%d%%^00ff00 of weapon damage plus ^96f5ff%d^00ff00.
Each Hit Charge increases damage by ^96f5ff%d%%^00ff00 of weapon damage.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL801
#define __CPPGEN_GNET_SKILL801
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill801:public Skill
    {
        public:
        enum
        { SKILL_ID = 801 };
        Skill801 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill801Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 400;
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
                skill->GetPlayer ()->SetPray (1);
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
#ifdef _SKILL_SERVER
        class State2:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 600;
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
#ifdef _SKILL_SERVER
        class State3:public SkillStub::State
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
        Skill801Stub ():SkillStub (801)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"·´Õð";
            nativename          = "·´Õð";
            icon                = "³èÎï·´Õð.dds";
#endif
            max_level           = 5;
            type                = 10;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 9301;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "¾£¼¬Êõ.sgc";
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
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill801Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 600;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 3000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 1,20,40,60,80,80,80,80,80,80 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 10000,20000,30000,40000,50000,50000,50000,50000,50000,50000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 11713,11689,11689,11689,11689,11689,11689,11689,11689,11689 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (10);
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
            return (float) (3);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 20 + 10 * skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (3600000);
            skill->GetVictim ()->SetRatio (0.2 + 0.1 * 5);
            skill->GetVictim ()->SetRetort (1);
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
            return (float) (10);
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