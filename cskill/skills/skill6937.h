//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
Espada
69370  "Sword Form"69371  "^ffffffSword Formã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€

^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aWeaponã€€^ffffffBlade or Sword, Fists, Polearm, A/H
^ffcb4aStrengthã€€^ffffff200
^ffcb4aDexterityã€€^ffffff150

^ffcb4aRequired Cultivationã€€^ffffffAware of Vacuity
Transform into Sword Form and the current weapon model will become Dual Swords.
The weapon you equipped will transform into Sword when you use the skill.
The Attack, Attack Rate and Attack Range of your weapon will be the same as those of Sword.
Lasts for 30 minutes.

^a6caf0The skill is only available when you are equipped with Sword or in Sword Form.
Can be canceled."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6937
#define __CPPGEN_GNET_SKILL6937
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6937:public Skill
    {
        public:
        enum
        { SKILL_ID = 6937 };
        Skill6937 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6937Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (100);
                skill->GetPlayer ()->SetPerform (1);
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
        Skill6937Stub ():SkillStub (6937)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"µ¶½£ÐÎÌ¬";
            nativename          = "µ¶½£ÐÎÌ¬";
            icon                = "µ¶½£ÐÎÌ¬.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (9);
            }
#ifdef _SKILL_CLIENT
            effect              = "0";
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
#endif
        }
        virtual ~ Skill6937Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (100);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 500,500,500,500,500,500,500,500,500,500 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 79 };
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
            return (float) (5);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, const wchar_t * buffer, int length, const wchar_t * format) const
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
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetTime (1800000); //tempo
            skill->GetVictim ()->SetRatio (32266);  //skin
            skill->GetVictim ()->SetValue (10053); //hstate
            skill->GetVictim ()->SetNewWeapon (1);
            
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
            return (float) (15);
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