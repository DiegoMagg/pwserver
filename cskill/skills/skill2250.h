//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
22500  "Î©Chaos Blade"22501  "^ffff00Î©Chaos BladeChaos Blade

^ffcb4aRangeã€€^96f5ff28^ffffffã€€ã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff70^ffffff
^ffcb4aChannelã€€^ffffff0.3  ^ffcb4asecond
^ffcb4aCastã€€^ffffff0.7  ^ffcb4asecond
^ffcb4aCooldownã€€^ffffff15.0  ^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff25
^ffcb4aWeaponã€€^ffffffBlade or Sword

^ffcb4aRequired Cultivationã€€^ffffffMaster of Discord
Infuse your enemy with chaotic magic, increasing the damage taken
from skills by ^96f5ff35%% ^fffffffor ^96f5ff600 ^ffffffseconds.
When used on a player target, increases its damage taken
from skills by ^96f5ff20%% ^fffffffor ^96f5ff5 ^ffffffseconds.

^d618e7When used on a monster target, increases the chance for it to take Crit Hits by ^96f5ff15%%^d618e7.
When used on a player target, the effect duration is increased to ^96f5ff8^d618e7 seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2250
#define __CPPGEN_GNET_SKILL2250
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2250:public Skill
    {
        public:
        enum
        { SKILL_ID = 2250 };
        Skill2250 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2250Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 300;
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
                skill->GetPlayer ()->SetDecmp (0.2 * 70);
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
                return 700;
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
                skill->GetPlayer ()->SetDecmp (0.8 * 70);
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
        Skill2250Stub ():SkillStub (2250)
        {
            cls                 = 8;
#ifdef _SKILL_CLIENT
            name                = L"»Ä¡¤»ìãç½£Ó¡";
            nativename          = "»Ä¡¤»ìãç½£Ó¡";
            icon                = "»Ä¡¤»ìãç½£Ó¡.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 25;
            attr                = 0;
            rank                = 31;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1121;
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
#ifdef _SKILL_CLIENT
            effect              = "½£Áé_½£Ó¡ÉË_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(1683, 1));
            pre_skills.push_back (std::pair < ID, int >(1685, 1));
            pre_skills.push_back (std::pair < ID, int >(1687, 1));
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
        virtual ~ Skill2250Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (70);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 700;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 42107,42107,42107,42107,42107,42107,42107,42107,42107,42107 };
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
            return (float) (28);
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
            return 1000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer ()->GetCls () == -1 ? 100 : 0);
            skill->GetVictim ()->SetTime (skill->GetPlayer ()->GetCls () == -1 ? 600000 : 5000);
            skill->GetVictim ()->SetRatio (skill->GetPlayer ()->GetCls () == -1 ? 0.5 : 0.3);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetInchurtphysicgoldDesordem (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer ()->GetCls () == -1 ? 100 : 0);
            skill->GetVictim ()->SetTime (skill->GetPlayer ()->GetCls () == -1 ? 600000 : 5000);
            skill->GetVictim ()->SetRatio (skill->GetPlayer ()->GetCls () == -1 ? 0.5 : 0.3);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetInchurtwoodwaterDesordem (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer ()->GetCls () == -1 ? 100 : 0);
            skill->GetVictim ()->SetTime (skill->GetPlayer ()->GetCls () == -1 ? 600000 : 5000);
            skill->GetVictim ()->SetRatio (skill->GetPlayer ()->GetCls () == -1 ? 0.5 : 0.3);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetInchurtfireearthDesordem (1);
            
            skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer ()->GetCls () == -1 ? 0 : 100);
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetDeeppoision (1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime ((1.0 * skill->GetPlayer ()->GetCls () == -1 ? 600000 : 5000));
            skill->GetVictim ()->SetRatio ((1.0 * skill->GetPlayer ()->GetCls () == -1 ? 35 : 20));
            skill->GetVictim ()->SetEnhanceskilldamage (1);*/
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
            return (float) (35);
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