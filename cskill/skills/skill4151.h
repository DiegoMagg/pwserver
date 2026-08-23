//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
41510  "Î¨Slash of Pride"41511  "^ff5c00Î¨Slash of Pride

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff200^ffffff
^ffcb4aChannelã€€^ffffffCharge
^ffcb4aCastã€€^ffffff0.6ã€€^ffcb4asecond
^ffcb4aCooldownã€€^96f5ff15ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffSaber
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Charge your weapon for ^96f5ff2.2^ffffff seconds, then unleash the
stored energy against all targets within ^96f5ff12^ffffff meters, dealing base
physical damage plus ^96f5ff310%%^ffffff of weapon damage plus ^96f5ff7634^ffffff. Stuns the targets for ^96f5ff1^ffffff second.
Deals an additional ^96f5ff30%%^ffffff damage when fully charged.

^00ffffEthereal Glyph Effect:@1
Adds disarm effect when fully charged, disarm the target for up to ^ffffff5^00ffff seconds
^00ffffLV1-4: Max charge time is reduced to ^ffffff2.0 ^00ffffseconds.
^00ffffLV5-7: Max charge time is reduced to ^ffffff1.9 ^00ffffseconds.
^00ffffLV8-9: Max charge time is reduced to ^ffffff1.8 ^00ffffseconds.
^00ffffLV10: Max charge time is reduced to ^ffffff1.7 ^00ffffseconds.@1@2
Adds disarm effect when fully charged, disarm the target for up to ^ffffff5^00ffff seconds.
Max charge time is reduced to ^ffffff%.1f ^00ffffseconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4151
#define __CPPGEN_GNET_SKILL4151
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4151:public Skill
    {
        public:
        enum
        { SKILL_ID = 4151 };
        Skill4151 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4151Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                int _glyph_value = get_glyph(skill->GetLevel (), 2000, 1900, 1800, 1700);
                return _glyph_value;
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
                return 602;
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
                int _glyph_value = get_glyph(skill->GetLevel (), 2000, 1900, 1800, 1700);
                
                skill->GetPlayer ()->SetDecmp (200);
                skill->SetPlus ((skill->GetCharging () / _glyph_value) * 7634.0);
                skill->SetRatio ((skill->GetCharging () / _glyph_value) * 3.1 + (skill->GetCharging () >= _glyph_value ? 0.3 : 0 ));
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
        Skill4151Stub ():SkillStub (4151)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤°ÁÕ¶";
            nativename          = "Éñ¡¤°ÁÕ¶";
            icon                = "Éñ¡¤°ÁÕ¶À¶.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 3;
            showorder           = 1005;
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
            effect              = "Ò¹Ó°_°ÁÕ¶_»÷ÖÐ.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "Ò÷³ªÊ±¼äËõ¶Ì.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill4151Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (200);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 602;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
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
            return (float) (12);
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
            return 1000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (2000);
            skill->GetVictim ()->SetDizzy (1);
            
            int _glyph_value = get_glyph(skill->GetLevel (), 2000, 1900, 1800, 1700);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime ( skill->GetT0 () >= _glyph_value ? 5000 : 0);
            skill->GetVictim ()->SetWeapondisabled (1);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetCharging ());
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
            return (float) (10);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (2.8);
        }
#endif
    };
}
#endif