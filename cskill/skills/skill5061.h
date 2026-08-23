//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50610  "Î¨Burning Flutter"50611  "^ff5c00Î¨Burning Flutter   ã€€
ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€
^ffcb4aManaã€€^96f5ff210^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCharge Cooldownã€€^ff000035.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffFirearm
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Leaps ^96f5ff25^ffffff meters forward and gains ^ff0000Life Straggler^ffffff effect: ^ffffff
the next time you cast certain Î¨ Verdant skills, it will be guaranteed a Critical Hit, with
additional damage. Critical Damage is increased by ^96f5ff10%%^ffffff for ^96f5ff5^ffffff seconds.

^ff0000Sanguine Glyph Effect@1
Can charge up three times. Increases the Critical Damage by Life Straggler.
^ff0000Lv1-4:Effect damage is increased to ^96f5ff20%%^ff0000. Charge cooldown is reduced to ^96f5ff30^ff0000 seconds.
^ff0000Lv5-7:Effect damage is increased to ^96f5ff30%%^ff0000. Charge cooldown is reduced to ^96f5ff25^ff0000 seconds.
^ff0000Lv8-9:Effect damage is increased to ^96f5ff40%%^ff0000. Charge cooldown is reduced to ^96f5ff20^ff0000 seconds.
^ff0000Lv10: Effect damage is increased to ^96f5ff50%%^ff0000. Charge cooldown is reduced to ^96f5ff15^ff0000 seconds.
@1@2
Can charge up three times.. Life Straggler: the next time you cast certain Î¨ Verdant skills, it will be guaranteed a Critical Hit, with
additional damage. Critical Damage is increased by
^96f5ff%d%%^ff0000. Charge cooldown is reduced to^96f5ff%d^ff0000 seconds@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5061
#define __CPPGEN_GNET_SKILL5061
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5061:public Skill
    {
        public:
        enum
        { SKILL_ID = 5061 };
        Skill5061 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5061Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (10);
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
                skill->GetPlayer ()->SetDecmp (200);
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
        Skill5061Stub ():SkillStub (5061)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÑæÎèÆ®É±";
            nativename          = "Éñ¡¤ÑæÎèÆ®É±";
            icon                = "ÉñÑæÎèÆ®É±ºì.dds";
#endif
            max_level           = 1;
            type                = 8;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2904;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59831);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
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
        virtual ~ Skill5061Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (210);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 601;
        }
        int GetCoolingtime (Skill * skill) const
        {
            int _glyph_value = get_glyph(skill->GetLevel (), 30000, 25000, 20000, 15000);
            return _glyph_value;
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
            return (float) (25);
        }
        int GetCoolDownLimit (Skill * skill) const
        {
            static int aarray[10] = { 3,3,3,3,3,3,3,3,3,3 };
            return aarray[skill->GetLevel () - 1];
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
            int _glyph_value = get_glyph(skill->GetLevel (), 20, 30, 40, 50);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (5100);
            skill->GetVictim ()->SetRatio (_glyph_value); //Percent
            skill->GetVictim ()->SetGlyphCritical2 (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (5100);
            skill->GetVictim ()->SetAmount (5040); //Skill (Ind) --
            skill->GetVictim ()->SetValue (5024); //Skill2 (Presa) --
            skill->GetVictim ()->SetNewValue (5030); //Skill3 (Neon) --
            skill->GetVictim ()->SetNewValue2 (5046); //Skill4 (Caos) --
            skill->GetVictim ()->SetNewValue3 (5006); //Skill5 (Banimento) --
            skill->GetVictim ()->SetNewValue4 (5012); //Skill6 (Fluxo) --
            skill->GetVictim ()->SetNewValue5 (5018); //Skill7 (AfeiÃ§Ã£o) --
            skill->GetVictim ()->SetNewValue6 (6898); //Skill8 (Grito)
            skill->GetVictim ()->SetNewValue7 (6382); //Skill9 (MarÃ©)
            skill->GetVictim ()->SetRatio (100); //Percent
            skill->GetVictim ()->SetGlyphCriticalAtr (1);
            
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
            return (float) (1);
        }
#endif
    };
}
#endif