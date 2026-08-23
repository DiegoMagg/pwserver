//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39020  "Î¨Ocean's Edge"39021  "^ff5c00Î¨Ocean's Edge

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff3.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffMelee weapon
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Slash an opponent with your magic-imbued weapon,
dealing base physical damage plus ^96f5ff2800^ffffff physical damage.

Different weapon types have different effects.
Axe and Hammer: Slows the target by^96f5ff60%%^ffffff. Lasts ^96f5ff10^ffffffseconds. Has ^96f5ff20%%^ffffff chance to freeze the target for ^96f5ff3^ffffff seconds.
Polearm: Increases the range to ^96f5ff20^ffffffmeters. Deals ^96f5ff150%%^ffffff
of weapon damage.
Blades and Swords: Deals an additional ^96f5ff310%%^ffffff of weapon damage plus ^96f5ff1864^ffffff.
Other weapons: Same as Axe and Hammer.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff60%%^ffcb4a of weapon damage plus ^96f5ff2208^ffcb4a.
^ffcb4aLv5-7: Deals an additional ^96f5ff80%%^ffcb4a of weapon damage plus ^96f5ff3312^ffcb4a.
^ffcb4aLv8-9: Deals an additional ^96f5ff100%%^ffcb4a of weapon damage plus ^96f5ff4416^ffcb4a.
^ffcb4a Lv10: Deals an additional ^96f5ff120%%^ffcb4a of weapon damage plus ^96f5ff5520^ffcb4a.@1@2
^ffcb4aDeals an additional ^96f5ff%d%%^ffcb4a of weapon damage plus ^96f5ff%d^ffcb4a.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL902
#define __CPPGEN_GNET_SKILL902
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill902:public Skill
    {
        public:
        enum
        { SKILL_ID = 902 };
        Skill902 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill902Stub:public SkillStub
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
                skill->SetPlus (0);
                skill->SetRatio (0.2);
                skill->SetEarthdamage (skill->GetMagicattack ());
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
        Skill902Stub ():SkillStub (902)
        {
            cls                 = 1;
#ifdef _SKILL_CLIENT
            name                = L"ÍÁÁé»÷";
            nativename          = "ÍÁÁé»÷";
            icon                = "ÍÁÁé»÷.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 6;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
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
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÐÂµØ¸¿»÷ÖÐ.sgc";
#endif
            range.type          = 0;
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
        virtual ~ Skill902Stub ()
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
            static int aarray[10] = { 79 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
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
            return (float) (32);
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
            /*skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetDecresist (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetReducefire (1);*/
            /*skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (0.6 + (skill->GetTarget ()->GetCls () == -1 ? (skill->GetTarget ()->GetLevel () < skill->GetPlayer ()->GetLevel () ? 0.4 : 0) : 0));
            skill->GetVictim ()->SetReducefire2 (1);*/
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetDecresist (1);
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
            return (float) (40);
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