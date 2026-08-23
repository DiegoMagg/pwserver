//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
36750  "Œ®Will of the Phoenix"36751  "^ff5c00Œ®Will of the Phoenix

^ffcb4aRange„ÄÄ^ff5c0030„ÄÄ^ffcb4ameters
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aChannel„ÄÄ^ffffff1.0„ÄÄ^ffcb4a seconds
^ffcb4aCast„ÄÄ^ffffff1.0„ÄÄ^ffcb4a seconds
^ffcb4aCooldown„ÄÄ^ff5c0015.0„ÄÄ^ffcb4a seconds
^ffcb4aChi Gained„ÄÄ^ffffff15
^ffcb4aWeapon„ÄÄ^ffffff Wand, Unarmed
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Dragon's Might

^ffcb4aRequired Cultivation„ÄÄ^ffffffChaotic Soul
Summon a blazing phoenix to attack all targets.
Knocks the target back by ^96f5ff18^ffffff meters and deals base damage plus ^96f5ff100%%^ffffff
of weapon damage plus ^96f5ff 5395^ffffff as Fire damage. Attack radius increased by
^96f5ff50%%^ffffff.

Does not knock back players.

^00ffffEthereal Glyph Effect:@1
^00ffffLv1-4: In ^ffffff6^00ffff seconds, increases the channeling speed of your next ^ffffffŒ®Hailstorm^00ffffby^ffffff40%%
^00ffffLv5-7: In ^ffffff6^00ffff seconds, increases the channeling speed of your next ^ffffffŒ®Hailstorm^00ffff by ^ffffff60%%
^00ffffLv8-9: In ^ffffff6^00ffff seconds, increases the channeling speed of your next ^ffffffŒ®Hailstorm^00ffff by ^ffffff80%%
^00ffff Lv10 : In^ffffff6^00ffff seconds, increases the channeling speed of your next ^ffffffŒ®Hailstorm^00ffff by ^ffffff100%%@1@2
^00ffffIn ^ffffff6^00ffff seconds, increases the channeling speed of your next ^ffffffŒ®Hailstorm^00ffff by ^ffffff%d%%@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL675
#define __CPPGEN_GNET_SKILL675
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill675:public Skill
    {
        public:
        enum
        { SKILL_ID = 675 };
        Skill675 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill675Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1500;
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
                skill->GetPlayer ()->SetDecmp (36);
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 5;
            }
            bool Cancel (Skill * skill) const
            {
                return 1;
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
                return 1200;
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
                skill->GetPlayer ()->SetDecmp (144);
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
        Skill675Stub ():SkillStub (675)
        {
            cls                 = 3;
#ifdef _SKILL_CLIENT
            name                = L"øÒ°§»ıªÍ÷‰";
            nativename          = "øÒ°§»ıªÍ÷‰";
            icon                = "»ıªÍ÷‰2.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 0;
            rank                = 30;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1623;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "2»ıªÍ÷‰.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(321, 10));
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
        virtual ~ Skill675Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (180);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1200;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 92 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
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
            return (float) (10);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 180, 30);
            
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
            skill->GetVictim ()->SetTime (30000);
            skill->GetVictim ()->SetNoregain (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (20000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetDecdodge (1);
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
            return (float) (18);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1);
        }
#endif
    };
}
#endif