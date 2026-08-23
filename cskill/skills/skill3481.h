//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
34810  "Î¨Thunder Shock"34811  "^ff5c00Î¨Thunder Shock

^ffcb4aRangeã€€^ffffffRanged Attack
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.8ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.8ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff6.0ã€€ ^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffRanged Weapons
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess


^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Shoot your enemy with the fury of a thunder clap, dealing base
physical damage plus ^96f5ff100%% ^ffffffof weapon damage plus ^96f5ff9020^ffffff as Metal damage.
Deafens the target, reducing Magic Defense by ^96f5ff60%% ^fffffffor ^96f5ff20^ffffff seconds.
Has a ^96f5ff10%% ^ffffffchance of paralyzing the target for ^96f5ff3 ^ffffffseconds.

^a6caf0Costs ^ffffff1^a6caf0 unit of ammo.
^a6caf0Costs ^ffffff20^a6caf0 Chi.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff20%% ^ffcb4aof weapon damage.
^ffcb4aLv5-7: Deals an additional ^96f5ff30%% ^ffcb4aof weapon damage.
^ffcb4aLv8-9: Deals an additional ^96f5ff40%% ^ffcb4aof weapon damage.
^ffcb4aLv10: Deals an additional ^96f5ff50%% ^ffcb4aof weapon damage.@1@2
Deals an additional ^96f5ff%d%% ^ffcb4aof weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3481
#define __CPPGEN_GNET_SKILL3481
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3481:public Skill
    {
        public:
        enum
        { SKILL_ID = 3481 };
        Skill3481 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3481Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (74);
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.2, 0.3, 0.4, 0.5);
                
                skill->GetPlayer ()->SetDecmp (296);
                skill->SetPlus (9020);
                skill->SetRatio (1 + _glyph_value);
                skill->SetGolddamage (skill->GetAttack ());
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
        Skill3481Stub ():SkillStub (3481)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤¾ªÀ×";
            nativename          = "Éñ¡¤¾ªÀ×";
            icon                = "Éñ¡¤¾ªÀ×»Æ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 20;
            arrowcost           = 1;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1309;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (13);
            }
#ifdef _SKILL_CLIENT
            effect              = "2¾ªÀ×.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
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
        virtual ~ Skill3481Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (370);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 800;
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
            skill->GetVictim ()->SetTime (20000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetDecresist (1);
            //SetDecresist (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 10);
            skill->GetVictim ()->SetTime (4000);
            skill->GetVictim ()->SetFix (1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * -1);
            skill->GetVictim ()->SetTime (4000);
            skill->GetVictim ()->SetSealed (1);*/
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
            return (float) (skill->GetPlayer ()->GetRange () + 5);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 21;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.5);
        }
#endif
    };
}
#endif