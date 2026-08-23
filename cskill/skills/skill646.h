//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
36460  "Î¨Soulburn"36461  "^ff5c00Î¨Soulburn

^ffcb4aRangeã€€^96f5ff28.5^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff305^ffffff
^ffcb4aChannelã€€^ffffff2.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aã€€^ffffff25.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffSoulsphere
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Burn the target's soul with psionic energy,
dealing damage equal to your Soulforce every
time they attack. Lasts ^96f5ff10^ffffff seconds.

^a6caf0Costs ^ffffff1^a6caf0 Spark.

^ff0000Sanguine Glyph Effect:@1
^ff0000Lv1-4: Restores ^96f5ff20 Chi after use.
^ff0000Lv5-7: Restores ^96f5ff30 Chi after use.
^ff0000Lv8-9: Restores ^96f5ff40 Chi after use.
^ff0000Lv10: Restores ^96f5ff50 Chi after use.@1@2
Restores ^96f5ff%d Chi after use.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL646
#define __CPPGEN_GNET_SKILL646
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill646:public Skill
    {
        public:
        enum
        { SKILL_ID = 646 };
        Skill646 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill646Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 3000;
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
                skill->GetPlayer ()->SetDecmp (118);
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
                float Plus = 8606;
                
                skill->GetPlayer ()->SetDecmp (472);
                skill->SetPlus (Plus);
                skill->SetRatio (3);
                skill->SetWooddamage (skill->GetMagicattack ());
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
        Skill646Stub ():SkillStub (646)
        {
            cls                 = 3;
#ifdef _SKILL_CLIENT
            name                = L"Õæ¡¤Íò¹ÆÊ³Ìì";
            nativename          = "Õæ¡¤Íò¹ÆÊ³Ìì";
            icon                = "Íò¹ÆÊ³Ìì1.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 3;
            rank                = 21;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1607;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (292);
            }
#ifdef _SKILL_CLIENT
            effect              = "1Íò¹ÆÊ³Ìì.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 2;
            commoncooldowntime  = 30000;
            pre_skills.push_back (std::pair < ID, int >(305, 10));
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
        virtual ~ Skill646Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (590);
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
            static int aarray[10] = { 99 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (12);
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
            return (float) (27);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 27, 590);
            
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
            skill->GetVictim ()->SetProbability (1.0 * 95);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetFix (1);
            skill->GetVictim ()->SetProbability (1.0 * -1);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetSealed (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 50);
            skill->GetVictim ()->SetTime (1000);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetAmount (100);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetApgencont2 (1);
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
            return (float) (36);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 30;
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