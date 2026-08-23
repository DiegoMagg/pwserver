//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
5280  "â—Sunder"5281  "^8080ffâ—Sunder

^ffcb4aRequires Tiger Form
^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.6ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff2.5ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffAxe, Poleaxe, Hammer or Polehammer, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffMaster of Harmony
Deliver a powerful whirling attack that splatters you with your opponents'
blood, hitting all enemies within ^96f5ff12 ^ffffffmeters. Deals base physical damage
plus ^96f5ff300%% ^ffffffof weapon damage and causes the targets to bleed for ^96f5ff12 ^ffffffseconds,
dealing an additional ^96f5ff9245 ^ffffffdamage and generating a large amount of threat.
Heals you over the next ^96f5ff15 ^ffffffseconds, restoring ^96f5ff5200 ^ffffffHealth. Increases the
damage dealt on monsters by ^96f5ff%d%%^ffffff for ^96f5ff8^ffffff seconds.
Effect can coexist with Heaven's Flame.
This effect will cancel Extreme Poison.

^a6caf0Costs ^ffffff2 ^a6caf0Sparks.

^f7dfa5Sage version restores ^96f5ff6666 ^f7dfa5Health."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL528
#define __CPPGEN_GNET_SKILL528
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill528:public Skill
    {
        public:
        enum
        { SKILL_ID = 528 };
        Skill528 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill528Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (44);
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
                return 2500;
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
                skill->GetPlayer ()->SetDecmp (176);
                skill->SetPlus (0);
                skill->SetRatio (3);
                skill->SetDamage (skill->GetAttack ());
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
        Skill528Stub ():SkillStub (528)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"Õæ¡¤Ìì±ÀµØÁÑ";
            nativename          = "Õæ¡¤Ìì±ÀµØÁÑ";
            icon                = "ÊÞÍõÖ®Å­1.DDS";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 21;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1519;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "Á÷ÐÇ´¸.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(153, 10));
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
        virtual ~ Skill528Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (220);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 2500;
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
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 220);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 12000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetAmount (skill->GetT0 () *
            (1 +
            0.01 * (skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () >
            0 ? skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () : 0)));
            skill->GetVictim ()->SetBleeding (1);
            
            skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer ()->GetCls () == -1 ? 100 : 0);
            skill->GetVictim ()->SetTime (8500);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetDeeppoision (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetValue (6666);
            skill->GetVictim ()->SetHpgen (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (9245);
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttackdegree ());
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
            return (float) (15);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 33;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (4);
        }
#endif
    };
}
#endif