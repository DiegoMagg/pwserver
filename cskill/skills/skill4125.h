//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
41250  "Î¨Constellation Arc"41251  "^ff5c00Î¨Constellation Arc

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff152^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.1ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff6.0ã€€^ffcb4a seconds
^ffcb4aWeaponã€€^ffffffSaber
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Sweep your blade into a mighty attack, using the
points of the constellations as your guide. Deals
base physical damage plus ^96f5ff200%%^ffffff of weapon damage plus
^96f5ff10428^ffffff, and decreases the target's Physical Defense
from gear by ^96f5ff60%%^ffffff for ^96f5ff10^ffffff seconds.
If the target is a player, Physical Defense will instead be reduced by ^96f5ff90%%^ffffff.

^a6caf0Costs ^ffffff30^a6caf0 Chi.

^ffa4a9Combo Skill: Default hotkey ^59EE4C E
^ffa4a9Required Skill: ^59EE4CEverlasting Ode

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff30%%^ffcb4a of weapon damage.
^ffcb4aLv5-7: Deals an additional ^96f5ff40%%^ffcb4a of weapon damage.
^ffcb4aLv8-9: Deals an additional ^96f5ff50%%^ffcb4a of weapon damage.
^ffcb4aLv10: Deals an additional ^96f5ff60%%^ffcb4a of weapon damage.@1@2
Deals an additional ^96f5ff%d%%^ffcb4a of weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4125
#define __CPPGEN_GNET_SKILL4125
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4125:public Skill
    {
        public:
        enum
        { SKILL_ID = 4125 };
        Skill4125 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4125Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * 152);
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
                return 1101;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.3, 0.4, 0.5, 0.6);
                
                skill->GetPlayer ()->SetDecmp (0.8 * 152);
                skill->SetRatio (2 + _glyph_value);
                skill->SetPlus (10428);
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
        Skill4125Stub ():SkillStub (4125)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÁÐÐÇ";
            nativename          = "Éñ¡¤ÁÐÐÇ";
            icon                = "Éñ¡¤ÁÐÐÇ»Æ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 30;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1018;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44878);
            }
#ifdef _SKILL_CLIENT
            effect              = "Ò¹Ó°_ÁÐÐÇ_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            combosk_preskill    = 2564;
            combosk_interval    = 6000;
            runes_attr          = 2;
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
        virtual ~ Skill4125Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (152);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1101;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 6000,6000,6000,6000,6000,6000,6000,6000,6000,6000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 30000000 };
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
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (10101);
            skill->GetVictim ()->SetRatio (skill->GetPlayer ()->GetCls () == 127 ? 0.6 : 0.9);
            skill->GetVictim ()->SetDecdefence (1);
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
            return (float) (skill->GetPlayer ()->GetRange () + 1.35 * 5.5);
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