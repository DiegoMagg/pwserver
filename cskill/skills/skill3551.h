//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
35510  "Î¨Chromatic Healing Beam"35511  "^ff5c00Î¨Chromatic Healing Beam

^ff0000Requires Violet Dance.
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff3.5ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff3.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aRequired Weapon:ã€€^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Conjure a violent thunderstorm to electrocute your enemy,
dealing base magic damage as Metal damage. Deals additional
damage to players based on your maximum Health or the target's
current Health, whichever is lower, penetrating Defense.
Deals an additional percentage of weapon damage to non-player targets.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: Deals damage to player targets equal to ^96f5ff2%%^ffeaab of the lowest Health value.
Deals damage to non-player targets equal to ^96f5ff160%%^ffeaab of your weapon damage.
^ffeaabLv5-7: Deals damage to player targets equal to ^96f5ff3%%^ffeaab of the lowest Health value.
Deals damage to non-player targets equal to ^96f5ff240%%^ffeaab of your weapon damage.
^ffeaabLv5-7: Deals damage to player targets equal to ^96f5ff4%%^ffeaab of the lowest Health value.
Deals damage to non-player targets equal to ^96f5ff320%%^ffeaab of your weapon damage.
^ffeaabLv10: Deals damage to player targets equal to ^96f5ff5%%^ffeaab of the lowest Health value.
Deals damage to non-player targets equal to ^96f5ff400%%^ffeaab of your weapon damage.@1@2
Deals damage to player targets equal to ^96f5ff%d%%^ffeaab of the lowest Health value.
Deals damage to non-player targets equal to ^96f5ff%d%%^ffeaab of your weapon damage.@2





"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3551
#define __CPPGEN_GNET_SKILL3551
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3551:public Skill
    {
        public:
        enum
        { SKILL_ID = 3551 };
        Skill3551 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3551Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 3500;
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
                skill->GetPlayer ()->SetDecmp (240);
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 10;
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
                return 1000;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.02, 0.03, 0.04, 0.05);
                float _glyph_plus = skill->GetPlayer ()->GetHp () * _glyph_value;
                float _glyph_value_2 = get_glyph(skill->GetLevel (), 1.6, 2.4, 3.2, 4);
                
                skill->GetPlayer ()->SetDecmp (960);
                skill->SetPlus (skill->GetTarget ()->GetCls () != -1 ? _glyph_plus : 0);
                skill->SetRatio (skill->GetTarget ()->GetCls () != -1 ? 0 : _glyph_value_2);
                skill->SetGolddamage (skill->GetMagicattack ());
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
        Skill3551Stub ():SkillStub (3551)
        {
            cls                 = 7;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÎåÆø³¯Ôª";
            nativename          = "Éñ¡¤ÎåÆø³¯Ôª";
            icon                = "Éñ¡¤ÎåÆø³¯Ôª°×.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 2;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1406;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÎåÆø³¯Ôª_ÍÁ_»÷ÖÐ.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
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
        virtual ~ Skill3551Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (1200);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 2000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 3000,3000,3000,3000,3000,3000,3000,3000,3000,3000 };
            return aarray[skill->GetLevel () - 1];
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
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 11208,11208,11208,11208,11208,11208,11208,11208,11208,11208 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (25);
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
            return (float) (28);
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
            return 4800;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            //skill->GetVictim()->SetValue (skill->GetPlayer()->GetMaxhp () * 0.01);
            //skill->GetVictim()->SetDirecthurt (1);
            
            float _glyph_value = get_glyph(skill->GetLevel (), 0.01, 0.015, 0.02, 0.025);
            skill->GetVictim()->SetProbability (1.0 * skill->GetTarget ()->GetCls () != -1 ? 100 : 0);
            skill->GetVictim ()->SetValue (skill->GetTarget ()->GetCls () != -1 ? skill->GetT0() < skill->GetPlayer ()->GetMaxhp () ? skill->GetT0() * _glyph_value : skill->GetPlayer ()->GetMaxhp () * _glyph_value : 1);
            skill->GetVictim ()->SetPurehurtFromHp (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetMaxhp ());
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
            return (float) (35);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 2;
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