//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
61560  "Σ Undine Strike"
61561  "^ffff00ΣUndine Strike

^ffcb4aRange　^96f5ff%d^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff1　^ffcb4asecond
^ffcb4aCast　^ffffff0.5　^ffcb4aseconds
^ffcb4aCooldown　^ffffff1　^ffcb4asecond
^ffcb4aWeapon　^ffffffWand, Unarmed

^ffcb4aRequired Cultivation　^ffffffAware of Vacuity
During the war with the Winged Elves, Grand
Wizard Tien suggested that the Wizards learn
from the Winged Elves' combat spells. As a result,
many new spells were developed to greatly enhance
the Wizards' battlefield effectiveness. One of these
spells based on the Winged Elves' Elemental Seal spell,
with some special modifications from Grand Wizard Tien himself.
The Fire Defense of targets will be reduced additionally
owing to Grand Wizard Tien's deep understanding of Fire Skills.
Deals Earth damage equal to ^96f5ff20%%^FFFFFF of Base Magical Attack.
In ^96f5ff12^ffffffseconds, reduces the target's Magic Defense by ^96f5ff60%%^ffffff.
Adds Spark Effect and reduces the Fire Defense of the target by ^96f5ff100%%^ffffff.

^ffa4a9Spark Effect has no effect on players
that are a higher level than you.
*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6156
#define __CPPGEN_GNET_SKILL6156
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6156:public Skill
    {
        public:
        enum
        { SKILL_ID = 6156 };
        Skill6156 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6156Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (100);
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
                return 500;
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
                skill->GetPlayer ()->SetDecmp (500);
                skill->SetEarthdamage (skill->GetMagicattack () * 0.2);
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
        Skill6156Stub ():SkillStub (6156)
        {
            cls                 = 1;
#ifdef _SKILL_CLIENT
            name                = L"至·土灵击";
            nativename          = "至·土灵击";
            icon                = "土灵击.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 30;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 6;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2252;
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
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (13);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (291);
            }
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (23749);
            }
            {
                restrict_weapons.push_back (25333);
            }
            {
                restrict_weapons.push_back (44878);
            }
            {
                restrict_weapons.push_back (44879);
            }
            {
                restrict_weapons.push_back (59830);
            }
            {
                restrict_weapons.push_back (59831);
            }
#ifdef _SKILL_CLIENT
            effect              = "新地缚击中.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(902, 1));
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
        virtual ~ Skill6156Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (600);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 5000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000 };
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
            return (float) (30);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 27, 600);
            
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
            // Redu莽玫es
            /*
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetReducesoil (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetReducewater (1);
            */
            
            //skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPlayer()->GetCls() == -1 ? 100 : skill->GetVictim()->GetLevel() > skill->GetT0() ? 0 : 100));
            skill->GetVictim ()->SetTime (12000);
            //skill->GetVictim ()->SetRatio (0.6 + (skill->GetTarget ()->GetCls () == -1 ? (skill->GetTarget ()->GetLevel () < skill->GetPlayer ()->GetLevel () ? 0.4 : 0) : 0));
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetReducefire2 (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetDecresist (1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetReducefire2 (1);*/
            
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetLevel ());
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
            return (float) (32);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 7;
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