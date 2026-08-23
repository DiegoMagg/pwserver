//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
54930  "唯Inner Serenity"54931  "^ff5c00唯Inner Serenity

^ffcb4aMana銆€^96f5ff%d^ffffff
^ffcb4aChannel銆€^ffffff0.1銆€^ffcb4aseconds
^ffcb4aCast銆€^ffffff0.5銆€^ffcb4aseconds
^ffcb4aCooldown銆€^ffffff60 銆€^ffcb4aseconds
^ffcb4aWeapon銆€^ffffffSword Shield, Unarmed
^ffcb4aGlyph Bonus銆€^ff5c00Martial Prowess

^ffcb4aRequired Cultivation銆€^ffffffCelestial Saint
Immune to movement control effects. Also increases Movement Speed by ^96f5ff50%%^ffffff.
Lasts ^96f5ff10^ffffff seconds. Restores ^96f5ff10^ffffff Shield Energy.

^a6caf0Costs ^ffffff50^a6caf0 Chi

^ff0000Ethereal Glyph Effect@1
^ff0000Lv1-4: Restores ^96f5ff30^ff0000 Shield Energy. Has a ^96f5ff20%%^ff0000 chance
to immediately reset the cooldown of Shield of Halo.
^ff0000Lv5-7: Restores^96f5ff70^ff0000 Shield Energy. Has a ^96f5ff30%%^ff0000 chance
to immediately reset the cooldown of Shield of Halo.
^ff0000Lv8-9: Restores ^96f5ff110^ff0000 Shield Energy. Has a ^96f5ff40%%^ff0000 chance
to immediately reset the cooldown of Shield of Halo.
^ff0000Lv10: Restores ^96f5ff150^ff0000 Shield Energy. Has a ^96f5ff50%%^ff0000 chance
to immediately reset the cooldown of Shield of Halo.@1@2
Restores ^96f5ff%d^ff0000 Shield Energy. Has a ^96f5ff%d%%^ff0000 chance
to immediately reset the cooldown of Shield of Halo.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5493
#define __CPPGEN_GNET_SKILL5493
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5493:public Skill
    {
        public:
        enum
        { SKILL_ID = 5493 };
        Skill5493 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5493Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * 294);
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
                skill->GetPlayer ()->SetDecmp (0.8 * 294);
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
        Skill5493Stub ():SkillStub (5493)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"神·回本溯源";
            nativename          = "神·回本溯源";
            icon                = "神回本溯源红.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 50;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59830);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5112, 1));
            runes_attr          = 1;
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
        virtual ~ Skill5493Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (294);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 567;
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
            return (float) (0);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 294);
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
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetSpeedup (1);
            
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetFreemove (1);
            
            int _glyph_value = get_glyph(skill->GetLevel (), 30, 70, 110, 150);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (_glyph_value);
            skill->GetVictim ()->EnhanceShieldEnergy (1);
            
            int _glyph_value_2 = get_glyph(skill->GetLevel (), 20, 30, 40, 50);
            
            skill->GetVictim ()->SetProbability (1.0 * _glyph_value_2);
            skill->GetVictim ()->SetValue (1203);
            skill->GetVictim ()->SetRatio (5101);
            skill->GetVictim ()->SetAmount (5155);
            skill->GetVictim ()->SetNewValue(5156);
            skill->GetVictim ()->SetNewValue2(5219);
            skill->GetVictim ()->SetResetCooldownFeatureWith4SkillsID(1);
            
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