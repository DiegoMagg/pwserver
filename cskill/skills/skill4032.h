//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
40320  "Î¨Absorb Soul"40321  "^ff5c00Î¨Absorb Soul

^ffcb4aRangeã€€^96f5ff27^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff300^ffffff
^ffcb4aChannelã€€^ffffff5.0ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.8ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff2.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aRequired Weapon:ã€€^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Infuse a portion of your own soul into a powerful magic
attack. Deals ^96f5ff125%%^ffffff of base magic damage plus ^96f5ff2900^ffffff to
player targets. Deals ^96f5ff200%%^ffffff of base magic damage plus ^96f5ff5800^ffffff
to non-player targets. This attack can critically hit, but
does not do extra damage against targets affected by
Nature's Vengeance. Also interrupts the target's channeling.

^ff0000Sanguine Glyph Effect:@1
^ff0000Lv1-4: Deals ^96f5ff140%%^ff0000 of base magic damage plus ^96f5ff2900^ff0000 as Wood damage to player targets.
Deals ^96f5ff210%%^ff0000 of base magic damage plus ^96f5ff5800^ff0000 Wood damage to non-player targets.
^ff0000Lv5-7: Deals ^96f5ff160%%^ff0000 of base magic damage plus ^96f5ff2900^ff0000 as Wood damage to player targets.
Deals ^96f5ff240%%^ff0000 of base magic damage plus ^96f5ff5800^ff0000 Wood damage to non-player targets.
^ff0000Lv8-9: Deals ^96f5ff180%%^ff0000 of base magic damage plus ^96f5ff2900^ff0000 as Wood damage to player targets.
Deals ^96f5ff270%%^ff0000 of base magic damage plus ^96f5ff5800^ff0000 Wood damage to non-player targets.
^ff0000Lv10: Deals ^96f5ff200%%^ff0000 of base magic damage plus ^96f5ff2900^ff0000 as Wood damage to player targets.
Deals ^96f5ff300%%^ff0000 of base magic damage plus ^96f5ff5800^ff0000 Wood damage to non-player targets.@1@2
^ff0000Deals ^96f5ff%d%%^ff0000 of base magic damage plus ^96f5ff2900^ff0000 as Wood damage to player targets.
Deals ^96f5ff%d%%^ff0000 of base magic damage plus ^96f5ff5800^ff0000 Wood damage to non-player targets.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4032
#define __CPPGEN_GNET_SKILL4032
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4032:public Skill
    {
        public:
        enum
        { SKILL_ID = 4032 };
        Skill4032 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4032Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 5000;
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
                skill->GetPlayer ()->SetDecmp (0.2 * 300);
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
                return 800;
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
                float _glyph_value_player = get_glyph(skill->GetLevel (), 1.4, 1.6, 1.8, 2);
                float _glyph_value_mob = get_glyph(skill->GetLevel (), 2.1, 2.4, 2.7, 3);
                
                skill->GetPlayer ()->SetDecmp (0.8 * 300);
                skill->SetPlus (skill->GetTarget ()->GetCls () == 127 ? 5800 : 2900);
                //skill->SetRatio (0);
                //printf("skill->GetTarget ()->GetCls () = %d\n", skill->GetTarget ()->GetCls ());
                //printf("skill->GetPlayer ()->GetCls () = %d\n", skill->GetPlayer ()->GetCls ());
                //printf("_glyph_value_player = %f\n", _glyph_value_player);
                //printf("_glyph_value_mob = %f\n", _glyph_value_mob);
                skill->SetWooddamage (( skill->GetTarget ()->GetCls () == 127 ? _glyph_value_mob : _glyph_value_player ) * skill->GetMagicattack ());
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
        Skill4032Stub ():SkillStub (4032)
        {
            cls                 = 9;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Éã»êÖä";
            nativename          = "Éñ¡¤Éã»êÖä";
            icon                = "Éñ¡¤Éã»êÖäºì.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 3;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1422;
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
            effect              = "÷ÈÁé_¹´»êÉãÆÇ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
            feature             = 901;
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
        virtual ~ Skill4032Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (300);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 800;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 2000;
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
            return (float) (3 + 0.4 * skill->GetLevel ());
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (4 + 0.3 * skill->GetLevel ());
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (27);
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
            return 120;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 80);
            skill->GetVictim ()->SetBreak (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent2 (PlayerWrapper * player) const
        {
            return 0;
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
            return (float) (36);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 26;
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