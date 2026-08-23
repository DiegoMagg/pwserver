//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39270  "Î¨Blade Tornado"39271  "^ff5c00Î¨Blade Tornado

^ffcb4aManaã€€^96f5ff495^ffffff
^ffcb4aChannelã€€^ffffff0.4ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff180.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Melee weapon
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Create a whirling tempest of fiery rage for ^96f5ff5^ffffff seconds.
Every ^ff5c001^ffffffsecond,
all enemies within ^96f5ff10^ffffff meters will take damage. Deals
weapon damage plus ^96f5ff100%%^ffffff of weapon Attack plus^96f5ff4000^ffffff
physical damage and slows target by ^96f5ff30%%^ffffff. Lasts ^96f5ff3^ffffff seconds.
Reduces incoming damage by^96f5ff50%%^ffffff and
makes you immune to all control effects. Cannot be a critical strike,
but has a chance to
double your Critical Rate and deal ^96f5ff1.5^ffffff times damage.

Recharges^96f5ff2^ffffff Sparks over a duration ^96f5ff5^ffffff seconds.


^a6caf0Costs ^ffffff3^a6caf0Sparks.

^00ff00Golden Glyph Effect:@1
Attacks per second.
^00ff00Lv1-4: Deals an additional ^96f5ff200%%^00ff00 of weapon damage plus ^96f5ff5000^00ff00.
^00ff00Lv5-7: Deals an additional ^96f5ff300%%^00ff00 of weapon damage plus ^96f5ff6000^00ff00.
^00ff00Lv8-9: Deals an additional ^96f5ff400%%^00ff00 of weapon damage plus ^96f5ff7000^00ff00.
^00ff00  Lv10: Deals an additional ^96f5ff500%%^00ff00 of weapon damage plus ^96f5ff8000^00ff00.@1@2
^00ff00Deals an additional^96f5ff%d%%^00ff00 of weapon damage plus ^96f5ff%d^00ff00 damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3927
#define __CPPGEN_GNET_SKILL3927
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3927:public Skill
    {
        public:
        enum
        { SKILL_ID = 3927 };
        Skill3927 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3927Stub:public SkillStub
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
        Skill3927Stub ():SkillStub (3927)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Ì«ÐéÖïÉñ¾÷";
            nativename          = "Éñ¡¤Ì«ÐéÖïÉñ¾÷";
            icon                = "Éñ¡¤Ì«ÐéÖïÉñ¾÷ÂÌ.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 300;
            arrowcost           = 0;
            apgain              = 8;
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
            gfxfilename         = "Ö±½ÓÉËº¦Ôö¼Ó2.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3927Stub ()
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
            
            skill->GetVictim ()->SetTime (5000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetAmount (204);
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
            float _glyph_value = get_glyph(player->GetSkilllevel (3927), 2.0, 3.0, 4.0, 5.0);
            int _glyph_value_2 = get_glyph(player->GetSkilllevel (3927), 5000, 6000, 7000, 8000);
            
            return (float) ((player->GetPureattack () + (4.5 + _glyph_value) * player->GetWeapondamage () + (20000 + _glyph_value_2) +
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