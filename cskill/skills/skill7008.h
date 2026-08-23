//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
70080  "��Frighten"
70081  "^ff5c00��Frighten

^ffcb4aRequires Tiger Form
^ffcb4aMana��^96f5ff%d^ffffff
^ffcb4aChannel��^ffffff0.5��^ffcb4aseconds
^ffcb4aCast��^ffffff0.8��^ffcb4aseconds
^ffcb4aCooldown��^ff5c002.0��^ffcb4aseconds
^ffcb4aChi Gained��^ffffff20
^ffcb4aWeapon��^ffffffAxe, Poleaxe, Hammer or Polehammer
^ffcb4aGlyph Bonus��^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation��^ffffffCelestial Saint
Strike fear into the hearts of all enemies
reducing their Physical and Magic Attack
by ^96f5ff30%%^ffffff and their speed by ^96f5ff50%%^ffffff for ^96f5ff10^ffffff seconds.

^ffeaabArgent Glyph Effect:@1
Reduces Physical and Magic Attack, this effect stacks up to ^96f5ff10^ffeaabtimes tops.
^ffeaabLV1-4: Reduces ^96f5ff20%%^ffeaab of physicial attack gear value,
...... ^96f5ff30%%^ffeaab of magicial attack gear value
^ffeaabLv5-7: Reduces ^96f5ff30%%^ffeaab of physicial attack gear value,
...... ^96f5ff45%%^ffeaab of magicial attack gear value
^ffeaabLv8-9: Reduces ^96f5ff40%%^ffeaab of physicial attack gear value,
...... ^96f5ff60%%^ffeaab of magicial attack gear value
^ffeaabLv10: Reduces ^96f5ff50%%^ffeaab of physicial attack gear value,
...... ^96f5ff75%%^ffeaab of magicial attack gear value@1@2
^ffeaabReduces ^96f5ff%d%%^ffeaab of physicial attack gear value and ^96f5ff%d%%^ffeaab of magicial attack gear value,
this effect stacks up to ^96f5ff10^ffeaab times.@2"
*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL7008
#define __CPPGEN_GNET_SKILL7008
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill7008:public Skill
    {
        public:
        enum
        { SKILL_ID = 7008 };
        Skill7008 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill7008Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (28);
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
                skill->GetPlayer ()->SetDecmp (112);
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
        Skill7008Stub ():SkillStub (7008)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"������";
            nativename          = "������";
            icon                = "�������.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1504;
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
            effect              = "1����.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(536, 1));
            pre_skills.push_back (std::pair < ID, int >(537, 1));
            runes_attr          = 3;
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
        virtual ~ Skill7008Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (140);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 800;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 2000;
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
            static int aarray[10] = { 72327,72327,72327,72327,72327,72327,72327,72327,72327,72327 };
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
            return _snwprintf (buffer, length, format, 140);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 2000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            
            float _glyph_magical = get_glyph(skill->GetT0 (), 0.3, 0.45, 0.6, 0.75);
            float _glyph_physical = get_glyph(skill->GetT0 (), 0.2, 0.3, 0.4, 0.5);
            
        
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetRatio (_glyph_physical * skill->GetT1()); //fis
            skill->GetVictim ()->SetValue (_glyph_magical * skill->GetT2()); // mag
            skill->GetVictim ()->SetAmount (10);
            skill->GetVictim ()->SetPhysMagReducwithstackWB (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetSlow (1);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetSkilllevel (7008));
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetEquipattack());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent2 (PlayerWrapper * player) const
        {
            return (float) (player->GetEquipmagicattack());
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
            return (float) (skill->GetPlayer ()->GetRange () + 2 + 30);
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