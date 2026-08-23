//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37250  "Î¨Redstone Venomworm"37251  "^ff5c00Î¨Redstone Venomworm

^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4aMeters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1.5ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.8ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff8.0ã€€^ffcb4aseconds
^ffcb4aRequired Weapon:ã€€^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Fling a blazing sandworm that ignites the target for ^96f5ff15^ffffff seconds,
dealing base magic damage plus ^96f5ff300%%^ffffff of weapon damage plus ^96f5ff3578^ffffff as
Fire damage. The worm burrows into the target for ^96f5ff15^ffffff seconds, lowering
its Physical Defense by ^96f5ff50%%^ffffff. Has a ^96f5ff25%%^ffffff chance to instead reduce Physical
Defense by ^96f5ff180%%^ffffff. Cannot be a critical hit, but has a chance equal to ^96f5fftwice^ffffff your
Critical Rate to deal ^96f5ff1.5^ffffff times as much damage. Stacks up to ^96f5ff10^ffffff times
with other damage-over-time effects and can be detonated by certain skills.

^a6caf0Costs ^ffffff25^a6caf0 Chi.

^ffeaabArgent Glyph Effect:@1
^ffeaabOver-time damage changes into Fire damage.
^ffeaabLv1-4: Deals direct damage equals to ^96f5ff20%%^ffeaab of base magic attack.
^ffeaabLv5-7: Deals direct damage equals to ^96f5ff30%%^ffeaab of base magic attack.
^ffeaabLv8-9: Deals direct damage equals to ^96f5ff40%%^ffeaab of base magic attack.
^ffeaabLv10: Deals direct damage equals to ^96f5ff50%%^ffeaab of base magic attack.@1@2
^ffeaabDeals direct damage equals to ^96f5ff%d%%^ffeaab of base magic attack.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3725
#define __CPPGEN_GNET_SKILL3725
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3725:public Skill
    {
        public:
        enum
        { SKILL_ID = 3725 };
        Skill3725 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3725Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (35);
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.2, 0.3, 0.4, 0.5);
                
                skill->GetPlayer ()->SetDecmp (140);
                skill->SetPlus (3578);
                skill->SetRatio (3);
                skill->SetWooddamage (_glyph_value * skill->GetMagicattack ());
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
        Skill3725Stub ():SkillStub (3725)
        {
            cls                 = 3;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤³àÑÒ¹Æ";
            nativename          = "Éñ¡¤³àÑÒ¹Æ";
            icon                = "Éñ¡¤³àÑÒ¹Æ°×.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 25;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 3;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1602;
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
            effect              = "Ñý¾«_ÌúÑÒ¹Æ¸Ä_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
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
        virtual ~ Skill3725Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (175);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 800;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 8000,8000,8000,8000,8000,8000,8000,8000,8000,8000 };
            return aarray[skill->GetLevel () - 1];
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
            skill->GetVictim ()->SetTime (21000);
            //skill->GetVictim ()->SetRatio (skill->GetT2() == 2 ? 0.5 : 1.8);
            skill->GetVictim ()->SetRatio ((rand()%100)<25 ? 1.8 : 0.5 );
            skill->GetVictim ()->SetDecdefence (1);
            
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (16000);
            skill->GetVictim ()->SetValue (skill->GetT3 () *
            (1 +
            0.01 * (skill->GetT4 () - skill->GetPlayer ()->GetDefenddegree () >
            0 ? skill->GetT4 () - skill->GetPlayer ()->GetDefenddegree () : 0)));
            skill->GetVictim ()->SetAmount (3);
            skill->GetVictim ()->SetElementDamage (1);
            
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (6 * player->GetEquipattack () + 6427);
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
            return (float) (player->GetRand () < 25 ? 1 : 2);
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent3 (PlayerWrapper * player) const
        {
            return (float) ((player->GetPuremagicattack () + 3 * player->GetEquipattack () + 3578) * (player->GetRand () <
            player->GetCrit () * 2 ? 1.5 : 1));
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent4 (PlayerWrapper * player) const
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