//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
16610  "â—‹Salvation"16611  "^8080ffâ—‹Salvationã€€ã€€ã€€ã€€

^ffcb4aManaã€€^96f5ff1240^ffffff
^ffcb4aChannelã€€^ffffff1.5ã€€^ffcb4a seconds
^ffcb4aCastã€€^ffffff1.5ã€€^ffcb4a seconds
^ffcb4aCooldownã€€^ffffff180.0ã€€^ffcb4a seconds
^ffcb4aChi Gainedã€€^ffffff15
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instrument

^ffcb4aRequired Cultivationã€€^ffffffAware of the Void
Summon an angelic servant to protect you. Salvation shields
your allies, increasing their defenses, and heals them. It exists for
^96f5ff20 ^ffffffseconds. You can use Energy Leech to draw power
from Salvation to shield yourself, absorbing ^96f5ff4000^ffffff damage and
applying a version of the Falling Petals spell that restores ^96f5ff4500^ffffff Health for ^96f5ff30^ffffff seconds.

^a6caf0You can use Transference to increase the duration of Voidbringer.

^d618e7Demon version gains an extra ^96f5ff15^d618e7 Chi.
^d618e7Grants Salvation the ^96f5ffWarp Shield^d618e7 skill."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1661
#define __CPPGEN_GNET_SKILL1661
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1661:public Skill
    {
        public:
        enum
        { SKILL_ID = 1661 };
        Skill1661 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1661Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * 1240);
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
                skill->GetPlayer ()->SetDecmp (0.8 * 1240);
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
        Skill1661Stub ():SkillStub (1661)
        {
            cls                 = 9;
#ifdef _SKILL_CLIENT
            name                = L"¿ñ¡¤¾ÈÐÇ½µÁÙ";
            nativename          = "¿ñ¡¤¾ÈÐÇ½µÁÙ";
            icon                = "Çå¾»ÁðÁ§Ä§¼¼ÄÜ.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 30;
            attr                = 3;
            rank                = 30;
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
            pre_skills.push_back (std::pair < ID, int >(1387, 10));
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
        virtual ~ Skill1661Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (1240);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1500;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 180000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 92 };
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
            return (float) (20);
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
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (31000);
            skill->GetVictim ()->SetRatio (25);
            skill->GetVictim ()->SetAmount (9000);
            skill->GetVictim ()->SetValue (450 * skill->GetLevel ());
            skill->GetVictim ()->SetHpgenseed (1);
            
            skill->GetVictim ()->SetTime (31000);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetAmount (400 * skill->GetLevel ());
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetAbsorbdamageincdefense (1);
            
            skill->GetVictim ()->SetTime (21000);
            skill->GetVictim ()->SetRatio (10);
            skill->GetVictim ()->SetValue (30985);
            skill->GetVictim ()->SetSummonpet4 (1);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
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
            return (float) (15 + skill->GetLevel ());
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
            return (float) (1);
        }
#endif
    };
}
#endif