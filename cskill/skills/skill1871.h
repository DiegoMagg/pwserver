//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
18710  "Sword Cyclone"18711  "^ffff00Sword Cyclone

^ffcb4aManaã€€^96f5ff392^ffffff
^ffcb4aChannelã€€^ffffff0.4ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff300.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffMelee weapons, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of Vacuity
Create a whirling tempest of
fiery rage for ^96f5ff12^ffffff seconds,
slashing out every ^96f5ff3^ffffff seconds at
all enemies within ^96f5ff10^ffffff meters.
Deals ^96f5ff200%%^ffffff of weapon damage and
makes you immune to all control
effects for the duration. Deals
^96f5ff2500^ffffff to
^96f5ff6500^ffffff additional damage
based on your Soulforce. Recharges
^96f5ff2^ffffff Sparks over the ^96f5ff12^ffffff second duration.

^a6caf0Costs ^ffffff3^a6caf0 Sparks."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1871
#define __CPPGEN_GNET_SKILL1871
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1871:public Skill
    {
        public:
        enum
        { SKILL_ID = 1871 };
        Skill1871 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1871Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (92);
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
                return 1700;
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
                skill->GetPlayer ()->SetDecmp (300);
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
        Skill1871Stub ():SkillStub (1871)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"ÖïÉñ¾÷";
            nativename          = "ÖïÉñ¾÷";
            icon                = "¿ñ·ç.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 299;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2905;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÎäÏÀ_¿ñ·ç.sgc";
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
        virtual ~ Skill1871Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (392);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1700;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 300000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 80 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
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
            return (float) (skill->GetPlayer ()->GetRange ());
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
            return 100;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (10);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (1872);
            skill->GetVictim ()->SetAuracurse (1);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (0.01);
            skill->GetVictim ()->SetAmount (204);
            skill->GetVictim ()->SetFreemoveapgen (1);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (226);
            skill->GetVictim ()->SetAmount (111);
            skill->GetVictim ()->SetValue (2);
            skill->GetVictim ()->SetInsertvstate (1);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetDenyattackcmd (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttackdegree ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) ((player->GetPureattack () + 2 * player->GetWeapondamage () + 2500 +
            (player->GetSoulpower () - player->GetLevel () * player->GetLevel () - 50 * player->GetLevel ()) * 0.1));
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent2 (PlayerWrapper * player) const
        {
            return (float) ((player->GetSoulpower () - player->GetLevel () * player->GetLevel () - 50 * player->GetLevel ()) / 10);
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
            return (float) (20);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 9;
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