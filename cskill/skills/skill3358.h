//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
33580  "●Vital Herb"33581  "^8080ff●Vital Herb　　　　　　　　　　　Level %d

^ffcb4aMana　^96f5ff%.1f^ffffff
^ffcb4aChannel　^ffffff1.0　^ffcb4a second
^ffcb4aCast　^ffffff1.0　^ffcb4a second
^ffcb4aCooldown　^ffffff35.0　^ffcb4a seconds
^ffcb4aWeapon　^ffffffUnarmed, Magic Instruments

^ffcb4aRequired Cultivation　^ffffffMaster of Harmony
Summon an herbal faerie, which restores
Health to nearby allies. Using healing
effects will increase amount restored by
the Vital Herb by ^96f5ff%d^ffffff; the base value is ^96f5ff100^ffffff plus  ^96f5ff20%%^ffffff
of weapon damage Health per second.
Lasts ^96f5ff20^ffffff seconds.

^a6caf0Vital Herb is unaffected by Lysing.

^a6caf0Costs ^ffffff1 ^a6caf0Spark.

^f7dfa5Increases base healing effect to ^96f5ff%d^ffffff^f7dfa5 per second."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3358
#define __CPPGEN_GNET_SKILL3358
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3358:public Skill
    {
        public:
        enum
        { SKILL_ID = 3358 };
        Skill3358 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3358Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1000;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (440 + 39.2 * 10));
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 25 - 2 * 10;
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
                return 1000;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (440 + 39.2 * 10));
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
        Skill3358Stub ():SkillStub (3358)
        {
            cls                 = 9;
#ifdef _SKILL_CLIENT
            name                = L"�桤�ٲݻ�";
            nativename          = "�桤�ٲݻ�";
            icon                = "������Ѫ�ɼ���.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 3;
            rank                = 21;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1423;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(1394, 10));
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
        virtual ~ Skill3358Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (479);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 35000,35000,35000,35000,35000,35000,35000,35000,35000,35000 };
            return aarray[skill->GetLevel () - 1];
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
            return (float) (10.90);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const {
            skill->GetVictim ()->SetTime (30000);
            skill->GetVictim ()->SetRatio (skill->GetLevel ());
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (51582);
            skill->GetVictim ()->SetSummonplantpet (1);
            return true; }
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
                return (float) (5);
            }
#endif
#ifdef _SKILL_SERVER
            int GetAttackspeed (Skill * skill) const
            {
                return 6;
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