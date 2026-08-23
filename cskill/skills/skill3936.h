//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39360  "Î¨Heaven's Flame"39361  "^ff5c00Î¨Heaven's Flame

^ffcb4aRangeã€€^ffffff8ã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.4ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.2ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffA/H
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Summon a blazing dragon to blast all enemies
within ^96f5ff12^ffffff of your opponent,
dealing base physical damage by^96f5ff100%%^ffffff of weapon damage
plus ^96f5ff5975^ffffff. Also increases the damage they take for the next ^96f5ff8^ffffff
seconds by ^96f5ff%d%%^ffffff. Restores
^96f5ff50^ffffff Chi after use. This attack is guaranteed to hit.

^a6caf0Costs 2^ffffff^a6caf0 Sparks.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: Deals an additional ^96f5ff40%% ^ffeaabof weapon damage.
^ffeaabLv5-7: Deals an additional ^96f5ff60%% ^ffeaabof weapon damage.
^ffeaabLV8-9: Deals an additional ^96f5ff80%% ^ffeaabof weapon damage.
^ffeaabLV10 : Deals an additional ^96f5ff100%% ^ffeaabof weapon damage.@1@2
^ffeaabDeals an additional ^96f5ff%d%% ^ffeaabof weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3936
#define __CPPGEN_GNET_SKILL3936
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3936:public Skill
    {
        public:
        enum
        { SKILL_ID = 3936 };
        Skill3936 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3936Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 400;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->GetPlayer()->SetDecmp(61);
                skill->GetPlayer()->SetPray(1);
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 1;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State2:public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 1200;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                float _glyph_value = get_glyph(skill->GetLevel (), 0.4, 0.6, 0.8, 1);
                
                skill->GetPlayer ()->SetDecmp (244);
                skill->SetPlus (5975);
                skill->SetRatio (1 + _glyph_value);
                skill->SetDamage (skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (1);
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State3:public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 0;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
        Skill3936Stub ():SkillStub (3936)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Ìì»ð¿ñÁú";
            nativename          = "Éñ¡¤Ìì»ð¿ñÁú";
            icon                = "Éñ¡¤Ìì»ð¿ñÁú°×.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 50;
            attr                = 7;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1120;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (9);
            }
#ifdef _SKILL_CLIENT
            effect              = "1°ÔÍõÏ×¶¦.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
            feature             = 2;
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
        virtual ~ Skill3936Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (305);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1200;
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
            static int aarray[10] = { 2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 11208,11208,11208,11208,11208,11208,11208,11208,11208,11208 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius(Skill *skill) const
        {
            return (float)(12);
        }
        float GetAttackdistance(Skill *skill) const
        {
            return (float)(0);
        }
        float GetAngle(Skill *skill) const
        {
            return (float)(1 - 0.0111111 * (60 + 2.5 * skill->GetLevel()));
        }
        float GetPraydistance(Skill *skill) const
        {
            return (float) (8);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction(Skill *skill, wchar_t *buffer, int length, wchar_t *format) const
        {
            return _snwprintf(buffer, length, format, 305, 100);
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity(Skill *skill) const
        {
            return 10000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack(Skill *skill) const
        {
            skill->GetVictim()->SetProbability(1.0 * 100);
            skill->GetVictim()->SetTime(8000);
            skill->GetVictim()->SetRatio(1);
            skill->GetVictim()->SetInchurt(1);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe(Skill *skill) const
        {
            /*skill->GetVictim()->SetProbability(1.0 * 100);
            skill->GetVictim()->SetTime(1000);
            skill->GetVictim()->SetShowicon(0);
            skill->GetVictim()->SetAmount(50);
            skill->GetVictim()->SetValue(0);
            skill->GetVictim()->SetApgencont2(1);*/
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool TakeEffect(Skill *skill) const
        {
            ;
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetEffectdistance(Skill *skill) const
        {
            return (float) (19.7);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed(Skill *skill) const
        {
            return 14;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate(Skill *skill) const
        {
            return (float)(3);
        }
#endif
    };
}
#endif