//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39280  "Î¨Blade Tornado"39281  "^ff5c00Î¨Blade Tornado

^ffcb4aManaã€€^96f5ff495^ffffff
^ffcb4aChannelã€€^ffffff0.4ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff180.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Melee weapon
^ffcb4aGlyphã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Create a whirling tempest of fiery rage for ^96f5ff12^ffffffseconds. Every ^96f5ff3^ffffff seconds,
all enemies within ^96f5ff10^ffffffmeters will take damage. Deals base physical damage
plus ^96f5ff450%%^ffffff of weapon damage plus ^96f5ff20000^ffffff physical
damage and slows the target by ^96f5ff30%%^ffffff. Lasts ^96f5ff3^ffffff seconds.
Reduces incoming damage by ^96f5ff50%%^ffffff and
makes you immune to all control effects. Cannot be a critical strike, but has a chance to
double your Critical Rate and deal ^96f5ff1.5^ffffff times damage.

Recharges ^96f5ff2^ffffff Sparks over a duration of ^96f5ff12^ffffff seconds.


^a6caf0Costs ^ffffff3^a6caf0 Sparks.

^00ffffEthereal Glyph Effect:@1
^00ffffLv1-4: Recharges^ffffff240.
^00ffffLv5-7: Recharges^ffffff260.
^00ffffLv8-9: Recharges^ffffff280.
^00ffff Lv10: Recharges^ffffff300.@1@2
^00ffffRecharges^ffffff%d.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3928
#define __CPPGEN_GNET_SKILL3928
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3928:public Skill
    {
        public:
        enum
        { SKILL_ID = 3928 };
        Skill3928 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3928Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 400;
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
                skill->GetPlayer ()->SetDecmp (99);
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
                return 1700;
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
                skill->GetPlayer ()->SetDecmp (396);
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
        Skill3928Stub ():SkillStub (3928)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Ì«ÐéÖïÉñ¾÷";
            nativename          = "Éñ¡¤Ì«ÐéÖïÉñ¾÷";
            icon                = "Éñ¡¤Ì«ÐéÖïÉñ¾÷À¶.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 300;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2905;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÎäÏÀ_¿ñ·ç.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "»ñµÃÔªÆøÔö¼Ó.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3928Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (495);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1700;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 180000,180000,180000,180000,180000,180000,180000,180000,180000,180000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 5000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 11208,11208,11208,11208,11208,11208,11208,11208,11208,11208 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (10);
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
            return 100;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (10);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (3955);
            skill->GetVictim ()->SetAuracurse (1);
            
            int _glyph_value = get_glyph(skill->GetLevel (), 240, 260, 280, 300);
            
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetAmount (_glyph_value);
            skill->GetVictim ()->SetFreemoveapgen (1);
            
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (226);
            skill->GetVictim ()->SetAmount (111);
            skill->GetVictim ()->SetValue (2);
            skill->GetVictim ()->SetInsertvstate (1);
            
            //skill->GetVictim ()->SetTime (12000);
            //skill->GetVictim ()->SetDenyattackcmd (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttackdegree ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) ((player->GetPureattack () + 4.5 * player->GetWeapondamage () + 20000 +
            (player->GetSoulpower () - player->GetLevel () * player->GetLevel () - 50 * player->GetLevel ()) * 0.2));
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent2 (PlayerWrapper * player) const
        {
            return (float) (player->GetRand () < player->GetCrit () * 2 ? 15 : 10);
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
            return (float) (20);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 9;
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