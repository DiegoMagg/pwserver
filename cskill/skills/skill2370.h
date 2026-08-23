//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
23700  "Î¦Star Smite"23701  "^ffff00Î¦Star Smite

^ffcb4aRangeã€€^96f5ff8^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff165^ffffff
^ffcb4aChannelã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.8ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff6.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff30
^ffcb4aWeaponã€€^ffffffPolearm, Pike, Club, Blade, or Sword

^ffcb4aRequired Cultivationã€€^ffffffMaster of Harmony
Throw your weapon at all targets in a ^96f5ff25^ffffff meter
line, dealing base physical damage plus ^96f5ff5115^ffffff.
Knocks non-player targets back ^96f5ff18^ffffff meters.
Never misses.

Polearms, Pikes, and Clubs increase the range to ^96f5ff20^ffffff meters,
and deal an additional ^96f5ff100%%^ffffff of weapon damage.
Blades and Swords deal melee damage plus ^96f5ff300%%^ffffff of weapon damage.

^f7dfa5Sage version also interrupts the target."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2370
#define __CPPGEN_GNET_SKILL2370
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2370:public Skill
    {
        public:
        enum
        { SKILL_ID = 2370 };
        Skill2370 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2370Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (33);
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
                return 800;
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
                skill->GetPlayer ()->SetDecmp (132);
                skill->SetPlus (5115);
                skill->SetRatio (skill->GetPlayer()->GetCurWeapon() == 1 ? 3 : 1);
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
        Skill2370Stub ():SkillStub (2370)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Ðþ¡¤ÅüÐÇÕ¶ÔÂ";
            nativename          = "Ðþ¡¤ÅüÐÇÕ¶ÔÂ";
            icon                = "Ðþ¡¤ÅüÐÇÕ¶ÔÂ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 30;
            attr                = 7;
            rank                = 21;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1116;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (1);
            }
#ifdef _SKILL_CLIENT
            effect              = "1Á÷ÐÇ¸ÏÔÂ.sgc";
#endif
            range.type          = 1;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(402, 1));
            pre_skills.push_back (std::pair < ID, int >(418, 1));
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
        virtual ~ Skill2370Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (165);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 800;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 6000;
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
            static int aarray[10] = { 42131,42131,42131,42131,42131,42131,42131,42131,42131,42131 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (3.5);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (25);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            //return (float) (8);
            return(float) (skill->GetPlayer()->GetCurWeapon() == 5 ? 20 : 8);
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
            skill->GetVictim ()->SetValue (18);
            skill->GetVictim ()->SetRepel (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetBreak (1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * skill->GetT1 ());
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetDizzy (1);*/
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            /*skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 ());
            skill->GetVictim ()->SetTime (1000);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetAmount (35);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetApgencont2 (1);*/
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetCurweapon () == 1 ? 100 : 0);
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetCurweapon () == 5 ? 33 : 0);
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
            return(float) (skill->GetPlayer()->GetCurWeapon() == 5 ? 20 : 8);
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
            return (float) (1.7);
        }
#endif
    };
}
#endif