//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69950  "Î¨Umbral Stalker"69951  "^ff5c00Î¨Umbral Stalker

^ffcb4aManaã€€^96f5ff267^ffffff
^ffcb4aCastã€€^ffffffInstantã€€^ffcb4a
^ffcb4aCooldownã€€^ffffff270.0ã€€^ffcb4a seconds
^ffcb4aWeaponã€€^ffffffSaber, Unarmed
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Cloak yourself in shadows, increasing your
Speed by ^96f5ff100%%^ffffff and hiding
yourself from attacks for ^96f5ff10^ffffff seconds. While
Umbral Stalker is active, you cannot take
damage or be targeted by anyone, but you
cannot use skills or make attacks.

^a6caf0Costs ^ffffff30^a6caf0 Chi.

^00ffffEthereal Glyph Effect:@1
^00ffffLv1-4: Increases movement speed by ^ffffff120%%.
^00ffffLv5-7: Increases movement speed by ^ffffff130%%.
^00ffffLv8-9: Increases movement speed by ^ffffff140%%.
^00ffffLv10: Increases movement speed by ^ffffff150%%@1@2
^00ffffIncreases movement speed by ^ffffff%d%%^00ffff@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6995
#define __CPPGEN_GNET_SKILL6995
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6995:public Skill
    {
        public:
        enum
        { SKILL_ID = 6995 };
        Skill6995 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6995Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (267);
                skill->GetPlayer ()->SetPerform (1);
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
        Skill6995Stub ():SkillStub (6995)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Ó°¶Ý";
            nativename          = "Éñ¡¤Ó°¶Ý";
            icon                = "ÉñÓ°¶ÝÀ¶.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 30;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 1001;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44878);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "Ò¹Ó°_Ó°¶Ý_»÷ÖÐ.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2774, 1));
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill6995Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (267);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 270000,270000,270000,270000,270000,270000,270000,270000,270000,270000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 5000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 72337,72337,72337,72337,72337,72337,72337,72337,72337,72337 };
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
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetForbidbeselected (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetInvincible7 (1);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetValue (48);
            skill->GetVictim ()->SetBeastieform (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetSealed2 (1);
            
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetDenyattackcmd (1);
            
            float _glyph_value = get_glyph(skill->GetLevel (), 1.2, 1.3, 1.4, 1.5);
            
            // New
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetRatio (_glyph_value);
            skill->GetVictim ()->SetSpeedup (1);
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
            return (float) (5);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (0);
        }
#endif
    };
}
#endif