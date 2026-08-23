//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
35390  "Î¨Ironheart Blessing"35391  "^ff5c00Î¨Ironheart Blessing

^ff0000Requires Violet Dance.
^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4aMeters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aRequired Weapon:ã€€^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Conjure a violent thunderstorm to electrocute your enemy,
dealing base magic damage as Metal damage. Deals additional
damage to players based on your maximum Health or the target's
current Health, whichever is lower, penetrating Defense.
Deals an additional percentage of weapon damage to non-player targets.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: Deals damage to player targets equal to ^96f5ff1.0%%^ffeaab of the lowest Health value.
Deals damage to non-player targets equal to ^96f5ff80%%^ffeaab of your weapon damage.
^ffeaabLv5-7: Deals damage to player targets equal to ^96f5ff1.5%%^ffeaab of the lowest Health value.
Deals damage to non-player targets equal to ^96f5ff120%%^ffeaab of your weapon damage.
^ffeaabLv5-7: Deals damage to player targets equal to ^96f5ff2.0%%^ffeaab of the lowest Health value.
Deals damage to non-player targets equal to ^96f5ff160%%^ffeaab of your weapon damage.
^ffeaabLv10: Deals damage to player targets equal to ^96f5ff2.5%%^ffeaab of the lowest Health value.
Deals damage to non-player targets equal to ^96f5ff200%%^ffeaab of your weapon damage.@1@2
Deals damage to player targets equal to ^96f5ff%.1f%%^ffeaab of the lowest Health value.
Deals damage to non-player targets equal to ^96f5ff%d%%^ffeaab of your weapon damage.@2





"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3539
#define __CPPGEN_GNET_SKILL3539
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3539:public Skill
    {
        public:
        enum
        { SKILL_ID = 3539 };
        Skill3539 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3539Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (80);
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.01, 0.015, 0.02, 0.025);
                float _glyph_plus = skill->GetPlayer ()->GetHp () * _glyph_value;
                float _glyph_value_2 = get_glyph(skill->GetLevel (), 0.8, 1.2, 1.6, 2);
                skill->GetPlayer ()->SetDecmp (320);
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
        Skill3539Stub ():SkillStub (3539)
        {
            cls                 = 7;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤¾²ÐÄÖä";
            nativename          = "Éñ¡¤¾²ÐÄÖä";
            icon                = "Éñ¡¤¾²ÐÄÖä°×.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 2;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1402;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (292);
            }
#ifdef _SKILL_CLIENT
            effect              = "Éñ_¾²ÐÄÖä_ÍÁ_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
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
        virtual ~ Skill3539Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (400);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
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
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000 };
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
            return 600;
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