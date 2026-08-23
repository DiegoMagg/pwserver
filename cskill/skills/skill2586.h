//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
25860  "Lunar Guidance"25861  "^ffffffLunar Guidance (Level %d)

^ffcb4aRangeã€€^96f5ff%.1f^ffffff ã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff1.5^ffcb4aã€€seconds
^ffcb4aCastã€€^ffffff1.3^ffcb4aã€€seconds
^ffcb4aCooldownã€€^96f5ff%.1f^ffcb4aã€€seconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aWeaponã€€ ^ffffffScythe, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of Discord
Invoke the moon's guidance on all friendly players
within ^96f5ff%.1f ^ffffffmeters, reducing the attack damage they
take by ^96f5ff%d%% ^ffffffand increasing the skill damage the monsters
take by ^96f5ff%d%% ^fffffffor ^96f5ff30 ^ffffffminutes. Generates an Ice Charge.

^a6caf0The effect ends if you travel to another map."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2586
#define __CPPGEN_GNET_SKILL2586
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2586:public Skill
    {
        public:
        enum
        { SKILL_ID = 2586 };
        Skill2586 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2586Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1534;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (262.5 + 30 * skill->GetLevel ()));
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return false;
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
                return 1268;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (262.5 + 30 * skill->GetLevel ()));
                skill->GetPlayer ()->SetAddball (1);
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
        Skill2586Stub ():SkillStub (2586)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"¹ãº®Ö®»¤";
            nativename          = "¹ãº®Ö®»¤";
            icon                = "¹ãº®Ö®»¤.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 4;
            rank                = 4;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1022;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44879);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÔÂÏÉ_¹ãº®Ö®»¤_»÷ÖÐ.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2596, 1));
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
        virtual ~ Skill2586Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 292,322,352,382,412,442,472,502,532,562 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1268;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 30000,27000,24000,21000,18000,15000,12000,9000,6000,3000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 39,43,47,51,55,59,63,67,71,75 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 19926,24640,30222,36708,44265,53070,63270,75260,92310,146300 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (10 + 0.6 * skill->GetLevel ());
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
            return (float) (8 + 0.6 * skill->GetLevel ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            8 + 0.6 * skill->GetLevel (),
            262.5 + 30 * skill->GetLevel (),
            33 - 3.0 * skill->GetLevel (), 10 + 0.6 * skill->GetLevel (), 10 + skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (1800000);
            skill->GetVictim ()->SetRatio (10 + skill->GetLevel ());
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetAtkdamagereduce (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (1800000);
            skill->GetVictim ()->SetRatio (0.02 * skill->GetLevel ());
            skill->GetVictim ()->SetEnhanceskilldamage3 (1);
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