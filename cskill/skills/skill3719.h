//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37190  "Î¨Venomous Scarab"0  "Scarab"37191  "^ff5c00Î¨Venomous Scarab

^ffcb4aRangeã€€^96f5ff27^ffffffã€€ ^ffcb4ameters
^ffcb4aManaã€€^96f5ff130^ffffff
^ffcb4aChannelã€€^ffffff1.5ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aChi Gainedã€€^ffffff15
^ffcb4aRequired Weapon:ã€€^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Throw a virulent parasite that poisons the enemy for ^96f5ff15^ffffff
seconds, dealing base magic damage plus ^96f5ff150%% ^ffffffof weapon
damage plus ^96f5ff5953 ^ffffffas Wood damage.  Cannot be a critical hit,
but has a chance equal to ^96f5fftwice^ffffff your Critical Rate to deal ^96f5ff1.5^ffffff
times as much damage. Deals an additional ^96f5ff20%% ^ffffffdamage if you
have a pet summoned. Weakens the target for ^96f5ff6 ^ffffffseconds, reducing
Magic Defense by ^96f5ff60%%^ffffff. Stacks up to ^96f5ff10 ^fffffftimes with other
damage-over-time effects and can be detonated by certain skills.

^ffeaabArgent Glyph Effect@1
^ffeaabLv1-4: Deals an additional ^96f5ff20%% ^ffeaabof base magic damage.
^ffeaabLv5-7: Deals an additional ^96f5ff30%% ^ffeaabof base magic damage.
^ffeaabLv8-9: Deals an additional ^96f5ff40%% ^ffeaabof base magic damage.
^ffeaabLv10: Deals an additional ^96f5ff50%% ^ffeaabof base magic damage.@1@2
^ffeaabDeals an additional ^96f5ff%d%% ^ffeaabof base magic damage.@2"0  "Scarab"0  "^ffcb4ameters"0  "^ffcb4aManaã€€^96f5ff130^ffffff"0  "^ffcb4aChannelã€€^ffffff1.5ã€€^ffcb4aseconds"0  "^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond"0  "^ffcb4aCooldownã€€^ffffff1.0ã€€^ffcb4asecond"0  "Gainedã€€^ffffff15"0  "Weapon:ã€€^ffffffUnarmed"0  "Instrument"0  "Bonusã€€^ff5c00Dragon's"0  "Might"0  "Cultivationã€€^ffffffChaotic"0  "Soul"0  "a"0  "parasite"0  "poisons"0  "enemy"0  "^96f5ff15^ffffff"0  "dealing"0  "magic"0  "plus"0  "^ffffffof"0  "weapon"0  "plus"0  "^ffffffas"0  "damage."0  "be"0  "critical"0  "hit"0  "has"0  "chance"0  "to"0  "your"0  "Rate"0  "deal"0  "^96f5ff1.5^ffffff"0  "as"0  "damage."0  "an"0  "^96f5ff20%%"0  "if"0  "you"0  "a"0  "summoned."0  "the"0  "for"0  "^ffffffseconds"0  "reducing"0  "Defense"0  "^96f5ff60%%^ffffff."0  "up"0  "^96f5ff10"0  "with"0  "other"0  "effects"0  "can"0  "detonated"0  "certain"0  "skills."0  "Glyph"0  "Effect@1"0  "Deals"0  "additional"0  "^ffeaabof"0  "magic"0  "damage."0  "Deals"0  "additional"0  "^ffeaabof"0  "magic"0  "damage."0  "Deals"0  "additional"0  "^ffeaabof"0  "magic"0  "damage."0  "Deals"0  "additional"0  "^ffeaabof"0  "magic"0  "damage.@1@2"0  "an"0  "^96f5ff%d%%"0  "base"0  "damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3719
#define __CPPGEN_GNET_SKILL3719
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3719:public Skill
    {
        public:
        enum
        { SKILL_ID = 3719 };
        Skill3719 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3719Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
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
                skill->GetPlayer ()->SetDecmp (26);
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return 0;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.2, 0.3, 0.4, 0.5);
                skill->GetPlayer ()->SetDecmp (104);
                skill->SetPlus (5953);
                skill->SetRatio (1.5);
                skill->SetWooddamage ((skill->GetMagicattack() * _glyph_value) + (skill->GetPlayer()->GetPettype() == 1 ? skill->GetMagicattack () * 0.2 : skill->GetPlayer()->GetPettype() == 5 ? skill->GetMagicattack () * 0.2 : 0));
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
        Skill3719Stub ():SkillStub (3719)
        {
            cls                 = 3;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤¾ç¶¾¹Æ";
            nativename          = "Éñ¡¤¾ç¶¾¹Æ";
            icon                = "Éñ¡¤¾ç¶¾¹Æ°×.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 15;
            attr                = 3;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1601;
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
                restrict_weapons.push_back (292);
            }
#ifdef _SKILL_CLIENT
            effect              = "Éñ_¾ç¶¾¹Æ_·ÉÐÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "¸ºÃæ×´Ì¬Ð§¹ûÔöÇ¿1.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3719Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (130);
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
            static int aarray[10] = { 11208,11208,11208,11208,11208,11208,11208,11208,11208,11208 };
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
            return (float) (27);
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
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetDecresist (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (16000);
            skill->GetVictim ()->SetValue (skill->GetT0 () *
            (1 +
            0.01 * (skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () >
            0 ? skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () : 0)));
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetElementDamage (1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (16000);
            skill->GetVictim ()->SetAmount (skill->GetT0 ());
            skill->GetVictim ()->SetContinuousDamageWood (1);*/
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) ((player->GetPuremagicattack () + 1.5 * player->GetEquipattack () + 5953) * (player->GetRand () <
            player->GetCrit () * 2 ? 1.5 : 1));
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttackdegree ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent2 (PlayerWrapper * player) const
        {
            //return (float) (player->GetMagicattack () + 5953 + 1.5 * player->GetEquipattack ());
            return 0;
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
            return (float) (36);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 26;
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