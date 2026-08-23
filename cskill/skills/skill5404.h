//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
54040  "Î¨Essential Sutra"54041  "^ff5c00Î¨Essential Sutra

^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff120.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Consume Chi to recover ^96f5ff20%% ^ffffffof your maximum Mana and
remove the channeling time from all spells for ^96f5ff6^ffffff seconds.
Immune to all negative status effects. Certain Î¨ skills don't cost Chi:
Including: Blade Tempest, Black Ice Dragon Strike, Mountain's Seize.

^a6caf0Costs ^ffffff3^a6caf0 Sparks.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLV1-4: Cooldown is reduced to ^96f5ff120^ffcb4a seconds.
^ffcb4aLV5-7: Cooldown is reduced to ^96f5ff110^ffcb4a seconds.
^ffcb4aLV8-9: Cooldown is reduced to ^96f5ff100^ffcb4a seconds.
^ffcb4aLV10: Cooldown is reduced to ^96f5ff90^ffcb4a seconds.@1@2
^ffcb4aCooldown is reduced to ^96f5ff%d^ffcb4a seconds. @2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5404
#define __CPPGEN_GNET_SKILL5404
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5404:public Skill
    {
        public:
        enum
        { SKILL_ID = 5404 };
        Skill5404 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5404Stub:public SkillStub
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
        Skill5404Stub ():SkillStub (5404)
        {
            cls                 = 1;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤°ãÈôÐÄ¾­";
            nativename          = "Éñ¡¤°ãÈôÐÄ¾­";
            icon                = "Éñ°ãÈôÐÄ¾­»Æ.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 300;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 41;
            eventflag           = 1;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 1217;
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
            effect              = "°ãÈôÐÄ¾­.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(183, 1));
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
        virtual ~ Skill5404Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            int _glyph_value = get_glyph(skill->GetLevel (), 120000, 110000, 100000, 90000);
            return _glyph_value;
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
            static int aarray[10] = { 5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000 };
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
            skill->GetVictim ()->SetRatio (0.2);
            skill->GetVictim ()->SetScaleincmp (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetFastpray (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetCleardebuff2 (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetImmuneall (1);
            
            // Reduz a canalizaÃ§Ã£o das habilidades 59
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetAmount (3696); //Skill
            skill->GetPlayer ()->SetValue (3702); //Skill2
            skill->GetPlayer ()->SetNewValue (3708); //Skill3
            skill->GetVictim ()->SetRatio (1); //Value
            skill->GetVictim ()->SetNewValue2 (0);
            skill->GetVictim ()->SetGlyphCasting (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (10100);
            skill->GetVictim ()->SetAmount (3696); //Skill 1
            skill->GetPlayer ()->SetValue (3702); // skill 2
            skill->GetPlayer ()->SetNewValue (3708); // skill 3
            skill->GetPlayer ()->SetNewValue2 (107); //feature1
            skill->GetPlayer ()->SetNewValue3 (108); //feature2
            skill->GetPlayer ()->SetNewValue4 (109); //feature3
            skill->GetPlayer ()->SetNewValue5 (3); //quantidaade de skills
            skill->GetVictim ()->SetRatio (200); //Percent
            skill->GetVictim ()->SetGlyphApCostMulti (1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (10100);
            skill->GetVictim ()->SetAmount (3696); //Skill
            skill->GetPlayer ()->SetValue (107); // Feature
            skill->GetVictim ()->SetRatio (100); //Percent
            skill->GetVictim ()->SetGlyphApCost (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (10100);
            skill->GetVictim ()->SetAmount (3702); //Skill
            skill->GetPlayer ()->SetValue (108); // Feature
            skill->GetVictim ()->SetRatio (100); //Percent
            skill->GetVictim ()->SetGlyphApCost (1);*/
            
            
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool TakeEffect (Skill * skill) const
        {
            skill->GetPlayer ()->SetIncmpgen (2 * skill->GetLevel ());
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetEffectdistance (Skill * skill) const
        {
            return (float) (30);
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