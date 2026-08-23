//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
35150  "Î¨Wings of Grace"35151  "^ff5c00Î¨Wings of Grace

^ffcb4aManaã€€^ffffff100
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff2.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnlimited
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Focus all of your energy into your wings, increasing your skill damage
for ^96f5ff15 ^ffffffseconds. You are immune to damage while channeling this skill.

^a6caf0Costs ^ffffff50 ^a6caf0Chi

^ffeaabArgent Glyph Effect@1
^ffeaabLv1-4:The skill damage of player targets is increased by ^96f5ff20%%^ffeaab,
non-player targets by ^96f5ff40%%^ffeaab
^ffeaabLv5-7:The skill damage of player targets is increased by ^96f5ff30%%^ffeaab,
non-player targets by ^96f5ff60%%^ffeaab
^ffeaabLv8-9:The skill damage of player targets is increased by ^96f5ff40%%^ffeaab,
non-player targets by ^96f5ff80%%^ffeaab
^ffeaab Lv10 :The skill damage of player targets is increased by ^96f5ff50%%^ffeaab,
non-player targets by ^96f5ff100%%^ffeaab@1@2
The skill damage of player targets is increased by ^96f5ff%d%%^ffeaab,
non-player targets by ^96f5ff%d%%^ffeaab@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3515
#define __CPPGEN_GNET_SKILL3515
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3515:public Skill
    {
        public:
        enum
        { SKILL_ID = 3515 };
        Skill3515 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3515Stub:public SkillStub
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
                return 2000;
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
        Skill3515Stub ():SkillStub (3515)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÉñÓ¥ÒíÑï";
            nativename          = "Éñ¡¤ÉñÓ¥ÒíÑï";
            icon                = "Éñ¡¤ÉñÓ¥ÒíÑï°×.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 50;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1320;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (13);
            }
            {
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (291);
            }
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÉñÓ¥Ö®Òí.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "Ö±½ÓÉËº¦Ôö¼Ó2.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3515Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (100);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 2000;
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
            static int aarray[10] = { 69600 };
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
            return (float) (0);
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
            skill->GetVictim ()->SetTime (3400);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetInvincible (1);
            
            float _glyph_value_mob = get_glyph(skill->GetLevel (), 0.4, 0.6, 0.8, 1);
            float _glyph_value = get_glyph(skill->GetLevel (), 0.2, 0.3, 0.4, 0.5);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetRatio (_glyph_value_mob);
            skill->GetVictim ()->SetEnhanceskilldamageBarbian (1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetRatio (_glyph_value);
            skill->GetVictim ()->SetAmount (25);
            skill->GetVictim ()->SetValue (2);
            skill->GetVictim ()->SetInchurt6 (1);*/

            skill->GetVictim()->SetProbability(1.0 * 100);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetRatio (_glyph_value);
            skill->GetVictim ()->SetInchurtTM (1);
            
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
            return (float) (1 + 0.05 * skill->GetLevel ());
        }
#endif
    };
}
#endif