//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
45070  "Î¨Arcane Antinomy"45071  "^ff5c00Î¨Arcane Antinomy

^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1ã€€^ffcb4asecond
^ffcb4aCastã€€^ffffff1ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff2ã€€^ffcb4aminutes
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instrument

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Tap into both natural and arcane magics, creating a powerful blast
from their antipodal energy that removes all of your target's mana.

^a6caf0Costs ^ffffff1 ^a6caf0Spark.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: Drains the target's mana every ^96f5ff3^ffeaab seconds. Lasts ^96f5ff3^ffeaab seconds.
^ffeaabLv5-7: Drains the target's mana every ^96f5ff3^ffeaab seconds. Lasts ^96f5ff6^ffeaab seconds.
^ffeaabLv8-9: Drains the target's mana every ^96f5ff3^ffeaab seconds. Lasts ^96f5ff9^ffeaab seconds.
^ffeaabLv10: Drains the target's mana every ^96f5ff3^ffeaab seconds. Lasts ^96f5ff12^ffeaab seconds.@1@2
^ffeaabDrains the target's mana every ^96f5ff3^ffeaab seconds. Lasts ^96f5ff%d^ffeaab seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4507
#define __CPPGEN_GNET_SKILL4507
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4507:public Skill
    {
        public:
        enum
        { SKILL_ID = 4507 };
        Skill4507 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4507Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
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
                skill->GetPlayer ()->SetDecmp (500);
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
                int temp = (skill->GetPlayer ()->GetMaxmp () * 1.5);
                
                skill->GetPlayer ()->SetDecmp (500);
                skill->SetRatio (1);
                skill->SetDamage (temp + skill->GetMagicattack () + (skill->GetAttack () * 0.2));
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
        Skill4507Stub ():SkillStub (4507)
        {
            cls                 = 3;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÃÄÐÄÖä";
            nativename          = "Éñ¡¤ÃÄÐÄÖä";
            icon                = "ÉñÃÄÐÄÖä°×.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 6;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2454;
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
            effect              = "¹ÖÎïÈËÃæÌÒ»¨¼¼ÄÜ¹¥»÷.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "¸ºÃæ×´Ì¬Ð§¹ûÔöÇ¿2.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill4507Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (1000);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 120000,120000,120000,120000,120000,120000,120000,120000,120000,120000 };
            return aarray[skill->GetLevel () - 1];
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
            int _glyph_value = get_glyph(skill->GetLevel (), 3000, 6000, 9000, 12000);
            int _target_mp = skill->GetPlayer ()->GetMaxmp ();
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (_glyph_value);
            skill->GetVictim ()->SetAmount (_target_mp);
            skill->GetVictim ()->SetMagicleak (1);
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
            return 20;
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