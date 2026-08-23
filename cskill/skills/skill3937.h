//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39370  "Î¨Glacial Spike"39371  "^ff5c00Î¨Glacial Spike

^ffcb4aRangeã€€^96f5ff20^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.2ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aRequired Weapon:ã€€^ffffffPolearm
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Focus cold magic into a ^96f5ff12^ffffff-meter burst
of glacial spikes, dealing base physical
damage plus ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff8504^ffffff.
Restores ^96f5ff50^ffffff Chi after use. This attack is guaranteed to hit.

Weakens the inflicted targets within ^96f5ff10^ffffff meters,
reducing their Physical and Magic
Defenses by ^96f5ff%d%%^ffffff. Reduces Physical Defense
by ^96f5ff90%%^ffffff and Magic Defense by ^96f5ff60%%^ffffff.
^ffffffFreezes the inflicted targets ^96f5ff10^ffffff meters away
for 5^96f5ff^ffffff seconds.

^a6caf0Costs ^ffffff2^a6caf0 Sparks."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3937
#define __CPPGEN_GNET_SKILL3937
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3937:public Skill
    {
        public:
        enum
        { SKILL_ID = 3937 };
        Skill3937 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3937Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
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
                skill->GetPlayer ()->SetDecmp (61);
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
                skill->GetPlayer ()->SetDecmp (244);
                skill->SetPlus (8504);
                skill->SetRatio (1);
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
        Skill3937Stub ():SkillStub (3937)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤º®±ùÈÐÓò";
            nativename          = "Éñ¡¤º®±ùÈÐÓò";
            icon                = "Éñ¡¤º®±ùÈÐÓò.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 50;
            attr                = 7;
            rank                = 41;
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
#ifdef _SKILL_CLIENT
            effect              = "Éñ_º®±ùÈÐÓò_»÷ÖÐ.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(404, 1));
            pre_skills.push_back (std::pair < ID, int >(405, 1));
            runes_attr          = 3;
            feature             = 3;
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
        virtual ~ Skill3937Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (305);
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
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 50000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 53895,53895,53895,53895,53895,53895,53895,53895,53895,53895 };
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
            return (float) (16 + skill->GetPlayer ()->GetCurweaponRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 305, 50);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 10000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 () <= 10 ? 100 : 0);
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (skill->GetPlayer ()->GetCls () == -1 ? 0.5 : 0.9);
            skill->GetVictim ()->SetDecdefence (1);
            
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 () <= 10 ? 100 : 0);
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (skill->GetPlayer ()->GetCls () == -1 ? 0.5 : 0.6);
            skill->GetVictim ()->SetDecresist (1);
            
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 () >= 10 ? 100 : 0);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetGeloAtiradora (1);
            
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
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetRangetotarget ());
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
            return (float) (25 + skill->GetPlayer ()->GetCurweaponRange ());
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 16;
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