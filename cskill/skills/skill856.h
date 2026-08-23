//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38560  "ΨBerserker's Wrath"38561  "^ff5c00ΨBerserker's Wrath

^ffcb4aRange　^96f5ff35^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff303^ffffff
^ffcb4aChannel　^ffffff0.6　^ffcb4aseconds
^ffcb4aCast　^ffffff1.5　^ffcb4aseconds
^ffcb4aCooldown　^ffffff60.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffAxe, Poleaxe, Hammer or Polehammer
^ffcb4aGlyph Bonus　^ff5c00Dragon's Might

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Unleash a furious assault of blows upon all enemies within ^96f5ff20 ^ffffffmeters of the target. Deals ^96f5ff120%%^ffffff
of base physical damage. Has a ^96f5ff100%% ^ffffffchance
to knock flying enemies to the ground and prevent them from flying for ^96f5ff30 ^ffffffseconds.
Deals ^96f5fftriple^ffffff damage to flying targets. Never misses.

'In the South Sea, there's a beast
called Cangpu, with three dragon heads, a tiger body, ten tails but no wings.
It likes eating dragons.
Thus the place has no trace of dragons and gods.
!�?
^a6caf0This skill can't be cast in the air.
^a6caf0Costs ^ffffff2^a6caf0 Sparks.

^00ffffEthereal Glyph Effect:@1
^00ffffLv1-4: Deals additional damage equal to ^ffffff25%%^00ffff of the amount of current Health.
^00ffffLv5-7: Deals additional damage equal to ^ffffff30%%^00ffff of the amount of current Health.
^00ffffLv8-9: Deals additional damage equal to ^ffffff35%%^00ffff of the amount of current Health.
^00ffffLv10: Deals additional damage equal to ^ffffff40%%^00ffff of the amount of current Health.@1@2
^00ffffDeals additional damage equal to ^ffffff%d%%^00ffff of the amount of current Health.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL856
#define __CPPGEN_GNET_SKILL856
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill856:public Skill
    {
        public:
        enum
        { SKILL_ID = 856 };
        Skill856 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill856Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 100;
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
                return 900;
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
        Skill856Stub ():SkillStub (856)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"ˮϵȺ�����ħ��";
            nativename          = "ˮϵȺ�����ħ��";
            icon                = "";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 4;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
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
            effect              = "��ɱ.sgc";
#endif
            range.type          = 0;
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
        virtual ~ Skill856Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 900;
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
            return (float) (50);
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
            return 1;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetAmount (skill->GetDamage () * skill->GetMagicdamage ());
            skill->GetVictim ()->SetFlood (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetRatio (0.2 * skill->GetLevel ());
            skill->GetVictim ()->SetReducewater (1);
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
            return (float) (60);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (3);
        }
#endif
    };
}
#endif