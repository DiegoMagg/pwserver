//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50450  "Î¨Silent Mayhem"50451  "^ff5c00Î¨Silent Mayhem

^ffcb4aRangeã€€^ffffffRanged
^ffcb4aManaã€€^96f5ff305^ffffff
^ffcb4aChannelã€€^ffffffCharge
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff15.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff50
^ffcb4aWeaponã€€^ffffffFirearm
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Cast range is increased by ^96f5ff10.0^ffffff meters. Can charge up to ^96f5ff2.5^ffffff seconds,
dealing Physical Attack equal to your base Physical Attack plus ^96f5ff300%%^ffffff of gear Attack
plus ^96f5ff6479^ffffff.

If the skill is released after a ^96f5ff2.5^ffffff second charge,
the cooldown time of ^96f5ffÎ¨Gilded Blaze^ffffff will be removed.
^ffffffThe cooldown time will not be removed for ^96f5ffArgent Glyph Effect of Î¨Gilded Blaze^ffffff.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff80%%^ffcb4a of Weapon Attack plus ^96f5ff1596^ffcb4a.
^ffcb4aLv5-7: Deals an additional ^96f5ff120%%^ffcb4a of Weapon Attack plus ^96f5ff2394^ffcb4a.
^ffcb4aLv8-9: Deals an additional ^96f5ff160%%^ffcb4a of Weapon Attack plus ^96f5ff3192^ffcb4a.
^ffcb4aLv10: Deals an additional ^96f5ff200%%^ffcb4a of Weapon Attack plus ^96f5ff3990^ffcb4a.@1@2
^ffcb4aDeals an additional ^96f5ff%d%%^ffcb4a of Weapon Attack plus ^96f5ff%d^ffcb4a.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5045
#define __CPPGEN_GNET_SKILL5045
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5045:public Skill
    {
        public:
        enum
        { SKILL_ID = 5045 };
        Skill5045 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5045Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 2500;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (305));
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.8, 1.2, 1.6, 2.0);
                int _glyph_value_2 = get_glyph(skill->GetLevel (), 1596, 2394, 3192, 3990);
                skill->GetPlayer ()->SetDecmp (0.8 * (305));
                skill->SetPlus ((skill->GetCharging () / 2500) * 6479 + _glyph_value_2);
                skill->SetRatio (3.0 + _glyph_value);
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
        Skill5045Stub ():SkillStub (5045)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤³¾Ä¬Éñ»è";
            nativename          = "Éñ¡¤³¾Ä¬Éñ»è";
            icon                = "Éñ³¾Ä¬Éñ»è»Æ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 50;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 3;
            showorder           = 1301;
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
            effect              = "ÐîÁ¦¾Ñ»÷_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
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
        virtual ~ Skill5045Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (305);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 99 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000 };
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
            skill->GetVictim ()->SetProbability (1.0 * skill->GetCharging () >= 2500 ? 100 : 0);
            skill->GetVictim ()->SetValue (-1); //feature
            skill->GetVictim ()->SetRatio (30000); //time to reduce
            skill->GetVictim ()->SetAmount (5056); //exclude skill
            skill->GetVictim ()->SetNewValue (5051); //id1
            skill->GetVictim ()->SetNewValue2 (5052); //id2
            skill->GetVictim ()->SetNewValue3 (5053); //id3
            skill->GetVictim ()->SetNewValue4 (5054); //id4
            skill->GetVictim ()->SetNewValue5 (5055);
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
        float GetHitrate (Skill * skill) const
        {
            return (float) (1);
        }
#endif
    };
}
#endif