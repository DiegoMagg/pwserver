//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
54130  "Î¨Divine Moonlight"54131  "^ff5c00Î¨Divine Moonlight

^ffcb4aRangeã€€^ffffff20^ffcb4aã€€ã€€meters
^ffcb4aManaã€€^96f5ff100^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4asecond
^ffcb4aCastã€€^ffffff0.5ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffSaber
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation ã€€^ffffffChaotic Soul
Bathe the target in divine moonlight, putting it to sleep for ^96f5ff6^ffffff seconds.
Attacks the target ^96f5ff5^ffffff seconds later, dealing ^96f5ff8589^ffffff Earth damage.

^a6caf0Costs ^ffffff10 ^a6caf0Chi.

^00ffffEthereal Glyph Effect:@1
Has a ^ffffff50%%^00ffff chance to deal the following damage:
^00ffffLV1-4: Deals an additional Earth damage equal to ^ffffff80%%^00ffff of Weapon Attack
^00ffffLV5-7: Deals an additional Earth damage equal to ^ffffff120%%^00ffff of Weapon Attack
^00ffffLV8-9: Deals an additional Earth damage equal to ^ffffff160%%^00ffff of Weapon Attack
^00ffffLV10: Deals an additional Earth damage equal to ^ffffff200%%^00ffff of Weapon Attack @1@2
Has a ^ffffff50%%^00ffff chance to deal an additional Earth damage equal to ^ffffff%d%%^00ffff
of Weapon Attack. @2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5413
#define __CPPGEN_GNET_SKILL5413
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5413:public Skill
    {
        public:
        enum
        { SKILL_ID = 5413 };
        Skill5413 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5413Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 67;
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
                skill->GetPlayer ()->SetDecmp (20);
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
                return 535;
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
                skill->GetPlayer ()->SetDecmp (80);
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
        Skill5413Stub ():SkillStub (5413)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÉñÕÕ";
            nativename          = "Éñ¡¤ÉñÕÕ";
            icon                = "ÉñÉñÕÕÀ¶.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 10;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1020;
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
#ifdef _SKILL_CLIENT
            effect              = "Ò¹Ó°_ÉñÕÕ_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2744, 1));
            pre_skills.push_back (std::pair < ID, int >(2745, 1));
            runes_attr          = 3;
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
        virtual ~ Skill5413Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (100);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 535;
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
            static int aarray[10] = { 50000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
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
            return (float) (20);
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
            return 1000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            float _glyph_value = get_glyph(skill->GetLevel (), 0.8, 1.2, 1.2, 2);
            
            /*printf("skill 5413 GetPerformerCurAttack: %d \n", skill->GetPerformerCurAttack());
            printf("skill 5413 GetPerformerCurGetAttack: %d \n", skill->GetPerformerCurGetAttack());
            printf("skill 5413: GetPerformerCurGetEquipAttack: %d \n", skill->GetPerformerCurGetEquipAttack());
            printf("skill 5413: GetPerformerCurGetWeaponAttack: %d \n", skill->GetPerformerCurGetWeaponAttack());*/
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetValue (8589 + (skill->GetRand() > 50 ? _glyph_value * skill->GetPerformerCurGetAttack () : 0));
            skill->GetVictim ()->SetDelayearthhurt (1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * 50);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetValue (8589 + (skill->GetRand() > 50 ? _glyph_value * skill->GetPlayer ()->GetWeapondamage () : 0));
            skill->GetVictim ()->SetDelayearthhurt (1);*/
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetSleep (1);
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
            return (float) (25);
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