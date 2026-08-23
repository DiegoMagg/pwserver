//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39520  "Î¨Drake's Breath Bash"39521  "^ff5c00Î¨Drake's Breath Bash

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.6ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aRequired Weapon:ã€€^ffffffUnarmed, Fist or Claw
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Focus your energy into your fists, then release into all
enemies in a ^96f5ff15^ffffff-meter line.
Deals base physical damage plus
^96f5ff100%% ^ffffffof weapon damage plus ^96f5ff11504^ffffff.
Half of this damage is Fire
damage. For the next ^96f5ff15 ^ffffffseconds, all your normal attacks
deal extra fire damage equal to ^96f5ff120%% ^ffffffof your weapon damage.
This attack is guaranteed to hit.

^a6caf0Costs ^ffffff2^a6caf0 Sparks.

^00ffffEthereal Glyph Effect:@1^00ffff
^00ffffLv1-4: If used within ^ffffff4 ^00ffffseconds, your next ^ffffffÎ¨Myriad Sword Stance ^00ffffwill have no cooldown.
^00ffffLv5-7: If used within ^ffffff5 ^00ffffseconds, your next ^ffffffÎ¨Myriad Sword Stance ^00ffffwill have no cooldown.
^00ffffLv8-9: If used within ^ffffff6 ^00ffffseconds, your next ^ffffffÎ¨Myriad Sword Stance ^00ffffwill have no cooldown.
^00ffffLv10: If used within ^ffffff7 ^00ffffseconds, your next ^ffffffÎ¨Myriad Sword Stance ^00ffffwill have no cooldown.@1@2
^00ffffIf used within ^ffffff%d ^00ffffseconds, your next ^ffffffÎ¨Myriad Sword Stance ^00ffffwill have no cooldown.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3952
#define __CPPGEN_GNET_SKILL3952
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3952:public Skill
    {
        public:
        enum
        { SKILL_ID = 3952 };
        Skill3952 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3952Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 600;
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
                skill->GetPlayer ()->SetDecmp (61);
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
                skill->GetPlayer ()->SetDecmp (244);
                skill->SetPlus (11504);
                skill->SetRatio (1);
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
        Skill3952Stub ():SkillStub (3952)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÔÆÁú¾ÅÏÖ";
            nativename          = "Éñ¡¤ÔÆÁú¾ÅÏÖ";
            icon                = "Éñ¡¤ÔÆÁú¾ÅÏÖÀ¶.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1112;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "1ÔÆÁú¾ÅÏÖ.sgc";
#endif
            range.type          = 1;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
            feature             = 5;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ÕýÃæ×´Ì¬Ð§¹ûÔöÇ¿1.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3952Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (305);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
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
        float GetRadius (Skill * skill) const
        {
            return (float) (4);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (15);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetCurweaponRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, const wchar_t * buffer, int length, const wchar_t * format) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 10000;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetRatio (1.2);
            skill->GetVictim ()->SetFireblade (1);
            
            int _glyph_value = get_glyph(skill->GetLevel (), 4000, 5000, 6000, 7000);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (100 + _glyph_value);
            skill->GetVictim ()->SetRatio (3943);
            skill->GetVictim ()->SetValue (6);
            skill->GetVictim ()->SetFreecooldown(1);
            
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
            return (float) (skill->GetPlayer ()->GetCurweaponRange () + 16);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 11;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (5);
        }
#endif
    };
}
#endif