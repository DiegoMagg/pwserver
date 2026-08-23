//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50060  "Î¨Flame: Deadly Expel"50061  "^ff5c00Î¨Flame: Deadly Expel

^ffcb4aRangeã€€^ffffffRanged
^ffcb4aManaã€€^96f5ff151^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff5.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aWeaponã€€^ffffffFirearm
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation ã€€^ffffffChaotic Soul
Attack all enemies within a ^96f5ff60^ffffff degree fan shape area in front of you,
dealing physical damage equal to your base Physical Attack plus ^96f5ff5388^ffffff
physical damage. In the next ^96f5ff5^ffffff seconds, lowers the target's Physical Defense
by ^96f5ff50%%^ffffff of its gear value.

The cooldown time of ^96f5ffÎ¨Murderous Indulgence^ffffff is reduced
by ^96f5ff0.5^ffffff seconds per use of this skill.
^ffffffThe cooldown time will not be reduced for ^96f5ffArgent Glyph Effect of Î¨Murderous Indulgence^ffffff.

^00ff00Verdant Glyph Effect:@1
First, use Î¨Burning Flutter to get the Life Straggler status;
Life Straggler status increases Damage and Crit Damage.
^00ff00Lv1-4: Deals an additional ^96f5ff90%%^00ff00 of Weapon Attack.
^00ff00Lv5-7: Deals an additional ^96f5ff100%%^00ff00 of Weapon Attack.
^00ff00Lv8-9: Deals an additional ^96f5ff110%%^00ff00 of Weapon Attack.
^00ff00Lv10: Deals an additional ^96f5ff120%%^00ff00 of Weapon Attack.@1@2
Can trigger Life Straggler, increasing damage by ^96f5ff%d%%^00ff00 Weapon Attack.
@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5006
#define __CPPGEN_GNET_SKILL5006
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5006:public Skill
    {
        public:
        enum
        { SKILL_ID = 5006 };
        Skill5006 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5006Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 100;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (151));
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.9, 1, 1.1, 1.2);
                float _glyph_ratio_plus = skill->GetPlayer ()->CheckBuffState(429) ? _glyph_value : 0;
                
                skill->GetPlayer ()->SetDecmp (0.8 * (151));
                skill->SetPlus (5338);
                skill->SetRatio (_glyph_ratio_plus);
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
        Skill5006Stub ():SkillStub (5006)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤¡ºÑæ¡»ÖðÉ±";
            nativename          = "Éñ¡¤¡ºÑæ¡»ÖðÉ±";
            icon                = "ÉñÑæÖðÉ±ÂÌ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1313;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59831);
            }
#ifdef _SKILL_CLIENT
            effect              = "Éñ»ú_É¢µ¯_»÷ÖÐ.sgc";
#endif
            range.type          = 4;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
            feature             = 1302;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ÕýÃæ×´Ì¬Ð§¹ûÔöÇ¿2.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill5006Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (151);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 735;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 5000;
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
            static int aarray[10] = { 1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange ());
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange () - 1);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (60));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange ());
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
            skill->GetVictim ()->SetTime (5100);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetDecdefence (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (-1); //feature
            skill->GetVictim ()->SetRatio (500); //time to reduce
            skill->GetVictim ()->SetAmount (5043); //exclude skill
            skill->GetVictim ()->SetNewValue (5038); //id1
            skill->GetVictim ()->SetNewValue2 (5039); //id2
            skill->GetVictim ()->SetNewValue3 (5040); //id3
            skill->GetVictim ()->SetNewValue4 (5041); //id4
            skill->GetVictim ()->SetNewValue5 (5042); //id4
            skill->GetVictim ()->SetDecCooldownFeatureWith5SkillsID (1);
            
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
            return (float) (skill->GetPlayer ()->GetRange () + 5);
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