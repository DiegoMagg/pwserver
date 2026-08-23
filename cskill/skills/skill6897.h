//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
68970  "Î¨Flame: Deadly Shriek"68971  "^ff5c00Î¨Flame: Deadly Shriek

^ffcb4aRangeã€¢ã^ffffffRanged
^ffcb4aManaã€¢ã^96f5ff151^ffffff
^ffcb4aChannelã€¢ã^ffffff0.2ã€¢ã^ffcb4aseconds
^ffcb4aCastã€¢ã^ffffff0.5ã€¢ã^ffcb4aseconds
^ffcb4aCooldownã€¢ã^ffffff1.0ã€¢ã^ffcb4asecond
^ffcb4aChi Gainedã€¢ã^ffffff15
^ffcb4aWeaponã€¢ã^ffffffFirearm
^ffcb4aGlyph Bonusã€¢ã^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€¢ã^ffffffCelestial Saint
Basic attack of Technicians, dealing base physical
damage plus ^96f5ff50%%^ffffff of weapon
damage and ^96f5ff3833^ffffff additional Physical Damage.

The cooldown time of ^96f5ffÎ¨Murderous Indulgence^ffffff
is reduced by ^96f5ff0.5^ffffff seconds per use of this skill.
^ffffffThe cooldown time will not be reduced for ^96f5ffArgent Glyph Effect of Î¨Murderous Indulgence^ffffff.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff20%%^ffcb4a of weapon damage.
^ffcb4aLv5-7: Deals an additional ^96f5ff30%%^ffcb4a of weapon damage.
^ffcb4aLv8-9: Deals an additional ^96f5ff40%%^ffcb4a of weapon damage.
^ffcb4aLv10: Deals an additional ^96f5ff50%%^ffcb4a of weapon damage.@1@2
Deals an additional ^96f5ff%d%%^ffcb4a of weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6897
#define __CPPGEN_GNET_SKILL6897
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6897:public Skill
    {
        public:
        enum
        { SKILL_ID = 6897 };
        Skill6897 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6897Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 200;
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
                return 1100;
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
                
                skill->GetPlayer ()->SetDecmp (0.8 * (151));
                skill->SetPlus (3833);
                skill->SetRatio (0.5 + _glyph_value);
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
        Skill6897Stub ():SkillStub (6897)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤¡ºÑæ¡»ÃùÉ±";
            nativename          = "Éñ¡¤¡ºÑæ¡»ÃùÉ±";
            icon                = "ÉñÑæÃùÉ±»Æ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 15;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1024;
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
            effect              = "Éñ»ú_ÆÕÍ¨Ò»»÷_»ð01·ÉÐÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(4959, 1));
            pre_skills.push_back (std::pair < ID, int >(4960, 1));
            runes_attr          = 1;
            feature             = 1301;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "Ö±½ÓÉËº¦Ôö¼Ó1.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill6897Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (151);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 669;
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
            return (float) (skill->GetPlayer ()->GetRange () + 8);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 3;
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