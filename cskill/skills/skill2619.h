//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
26190  "●Sonic Boom"26191  "^8080ff●Sonic Boom

^ffcb4aRange　^96f5ff27 ^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff192^ffffff
^ffcb4aChannel　^ffffff1.2^ffcb4a　seconds
^ffcb4aCast　^ffffff0.8^ffcb4a　seconds
^ffcb4aCooldown　^ffffff1.0^ffcb4a　second
^ffcb4aChi Gained　^ffffff10
^ffcb4aWeapon　^ffffff Scythe, Unarmed

^ffcb4aRequired Cultivation　^ffffffAware of the Myriad
Swing your scythe in a supersonic arc, dealing ^96f5ff90%%^ffffff
of base magic damage plus ^96f5ff120%%^ffffff of weapon damage plus
^96f5ff3254^ffffff as Metal damage. Generates a Thunder Charge.
^96f5ffWhile transformed, damage is increased by ^ffffff33%%.

^ffa4a9Can cast while moving.

^f7dfa5Sage version has a ^96f5ff20%%^f7dfa5 chance to generate ^96f5ff30^f7dfa5 Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2619
#define __CPPGEN_GNET_SKILL2619
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2619:public Skill
    {
        public:
        enum
        { SKILL_ID = 2619 };
        Skill2619 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2619Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1150;
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
                skill->GetPlayer ()->SetDecmp (38);
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
                return 802;
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
                skill->GetPlayer ()->SetDecmp (154);
                skill->SetPlus (3254);
                skill->SetRatio (1.2);
                skill->GetPlayer ()->SetAddball (5);
                skill->SetGolddamage ((skill->GetPlayer ()->GetForm () == 1 ? 1.2 : 0.9) * skill->GetMagicattack ());
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
        Skill2619Stub ():SkillStub (2619)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"�桤˷��ӽ";
            nativename          = "�桤˷��ӽ";
            icon                = "��˷��ӽ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 2;
            rank                = 20;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1003;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (44879);
            }
#ifdef _SKILL_CLIENT
            effect              = "����_˷��ӽ_����.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2571, 10));
            is_movingcast       = true;
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
        virtual ~ Skill2619Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (192);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 802;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 89 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
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
            return (float) (27 + skill->GetPlayer ()->GetPrayrangeplus ());
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
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 20);
            skill->GetVictim ()->SetValue (30);
            skill->GetVictim ()->SetAp (1);
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
            return (float) (36.5 + skill->GetPlayer ()->GetPrayrangeplus ());
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