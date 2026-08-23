//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69560  "Î¨Hurling Rock"69561  "^ff5c00Î¨Hurling Rockã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€

^ffcb4aRequires Snow Ape form
^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4ameter(s)
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.7ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff60.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffCudgel, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Smashes enemies within ^96f5ff8^ffffff meters of the target
with giant rocks. Deals ^96f5ff140%%^ffffff of base
damage plus ^96f5ff9410^ffffff of physical damage. Increases the damage
they take by ^96f5ff30%%^ffffff while grounding them for ^96f5ff10^ffffff seconds.
This effect can coexist with Heaven's Flame.
This effect will cancel Extreme Poison.

^ffa4a9Petrifaction. Immune to all negative effects while using the skill.
Cannot be canceled.

^a6caf0Costs ^ffffff50^a6caf0 Chi to cast.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Range increased by ^96f5ff1^00ff00 meters.
^00ff00Lv5-7: Range increased by ^96f5ff2^00ff00 meters.
^00ff00Lv8-9: Range increased by ^96f5ff3^00ff00 meters.
^00ff00Lv10: Range increased by ^96f5ff4^00ff00 meters.@1@2
^00ff00Range increased by ^96f5ff%d^00ff00 meters.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6956
#define __CPPGEN_GNET_SKILL6956
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6956:public Skill
    {
        public:
        enum
        { SKILL_ID = 6956 };
        Skill6956 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6956Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 700;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->GetPlayer()->SetDecmp(0.2 * (285));
                skill->GetPlayer()->SetFreemoveMonkey(1);
                skill->GetPlayer()->SetPray(1);
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State2 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 1000;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->GetPlayer()->SetDecmp(0.2 * (285));
                skill->SetPlus(9410);
                skill->SetRatio(1.4);
                skill->SetDamage(skill->GetAttack());
                skill->GetPlayer()->SetPerform(1);
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State3 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 0;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
        Skill6956Stub ():SkillStub (6956)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ºÆÖÀÇ¬À¤";
            nativename          = "Éñ¡¤ºÆÖÀÇ¬À¤";
            icon                = "ÉñºÆÖÀÇ¬À¤ÂÌ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 50;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1501;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (69843);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "2021_°×Ô³ºï_¾ÞÊ¯Í¶ÖÀ_Ê©·ÅÂä_»÷ÖÐ1.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(6495, 1));
            runes_attr          = 2;
            immune_casting      = 1;
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
        virtual ~ Skill6956Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (285);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius(Skill *skill) const
        {
            return (float)(8);
        }
        float GetAttackdistance(Skill *skill) const
        {
            return (float)(0);
        }
        float GetAngle(Skill *skill) const
        {
            return (float)(1 - 0.0111111 * (0));
        }
        float GetPraydistance(Skill *skill) const
        {
            float _glyph_value = get_glyph((skill->GetLevel ()), 1, 2, 3, 4);
            
            return (float)(skill->GetPlayer()->GetRange() + 30 + _glyph_value);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction(Skill *skill, wchar_t *buffer, int length, wchar_t *format) const
        {
            return _snwprintf(buffer, length, format);
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity(Skill *skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        int GetMaxAbility (Skill *skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetDizzy (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetDeeppoision (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool TakeEffect(Skill *skill) const
        {;
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetEffectdistance(Skill *skill) const
        {
            float _glyph_value = get_glyph((skill->GetLevel ()), 1, 2, 3, 4);
            
            return (float)(skill->GetPlayer()->GetRange() + 40 + _glyph_value);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed(Skill *skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate(Skill *skill) const
        {
            return (float)(1.0);
        }
#endif
    };
}
#endif