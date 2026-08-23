//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
44200  "Î¨Dragon Rising"44201  "^ff5c00Î¨Dragon Rising

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff140^ffffff
^ffcb4aChannelã€€^ffffff0.4ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.2ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff15.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffA/H, Polearm, Blade and Sword
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Swing your weapon in a rising attack, dealing
base physical damage plus ^96f5ff105%%^ffffff of weapon damage plus ^96f5ff5834^ffffff
and stunning the target for ^96f5ff5^ffffff seconds.
Never misses.

Different weapon type have different effects.
Axes, Hammers, and Polearms stun the target for ^96f5ff7^ffffff seconds.
Polearms: The range is increased to ^96f5ff20^ffffff meters and paralyzes the target for ^96f5ff5^ffffff seconds.
Blades and Swords will not Paralyze the target, but the channeling time is reduced to ^96f5ff0.1^ffffff seconds,
cast time is reduced to ^96f5ff1.0^ffffff second, and deals additional physical damage equal to ^96f5ff700%%^ffffff
of weapon damage.

^a6caf0Costs ^ffffff80^a6caf0 Chi.

^00ff00Verdant Glyph Effect@1@1
^00ff00LV1-4: Poleblades, Pikes, and Clubs additionally deal a constant Physical damage over ^96f5ff6^00ff00 seconds equal to ^96f5ff200%%^00ff00 of Weapon Attack.
^00ff00Lv5-7: Poleblades, Pikes, and Clubs additionally deal a constant Physical damage over ^96f5ff6^00ff00 seconds equal to ^96f5ff300%%^00ff00 of Weapon Attack.
^00ff00Lv8-9: Poleblades, Pikes, and Clubs additionally deal a constant Physical damage over ^96f5ff6^00ff00 seconds equal to ^96f5ff400%%^00ff00 of Weapon Attack.
^00ff00 Lv10 : Poleblades, Pikes, and Clubs additionally deal a constant Physical damage over ^96f5ff6^00ff00 seconds equal to ^96f5ff500%%^00ff00 of Weapon Attack.@1@2
^00ff00Poleblades, Pikes, and Clubs additionally deal a constant Physical damage over ^96f5ff6^00ff00 seconds equal to ^96f5ff%d%%^00ff00 of Weapon Attack.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4420
#define __CPPGEN_GNET_SKILL4420
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4420:public Skill
    {
        public:
        enum
        { SKILL_ID = 4420 };
        Skill4420 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4420Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return skill->GetPlayer ()->GetCurWeapon () == 1 ? 100 : 400;
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
                skill->GetPlayer ()->SetDecmp (28);
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
                return skill->GetPlayer ()->GetCurWeapon () == 1 ? 1000 : 1200;
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
                skill->GetPlayer ()->SetDecmp (112);
                skill->SetPlus (5834);
                skill->SetRatio (skill->GetPlayer ()->GetCurWeapon () == 1 ? 7 : 1.05);
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
        Skill4420Stub ():SkillStub (4420)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÉýÁúÆÆ";
            nativename          = "Éñ¡¤ÉýÁúÆÆ";
            icon                = "ÉñÉýÁúÆÆÂÌ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 80;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1117;
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
            {
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (5);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÐÂ_°ÔÍõÁú·É.sgc";
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
        virtual ~ Skill4420Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (140);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1200;
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
            static int aarray[10] = { 50000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
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
            //ï¿½ï¿½ï¿½ï¿½ï¿? +10 ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿?
            return (float) (0 + (skill->GetPlayer ()->GetCurweapon () == 5 ? 10 : 0));
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetCurWeapon () == 5 ? 20 : skill->GetPlayer ()->GetRange ());
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
            return 7000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPerformerCurWeapon () == 5 ? 100 : skill->GetPerformerCurWeapon () == 9 ? 100 : 0));
            skill->GetVictim ()->SetTime (5500 + (skill->GetPerformerCurWeapon () == 9 ? 3000 : 0));
            skill->GetVictim ()->SetValue (2);
            skill->GetVictim ()->SetPalsy (1);
            
            float _glyph_value = get_glyph(skill->GetLevel (), 2.0, 3.0, 4.0, 5.0);
            
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPerformerCurWeapon () == 5 ? 100 : 0));
            //skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer ()->GetCurWeapon () == 5 ? 100 : 0);
            skill->GetVictim ()->SetTime (6500);
            skill->GetVictim ()->SetAmount (_glyph_value * skill->GetT1 ());
            skill->GetVictim ()->SetBleeding (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetCurWeapon());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            
            return (float) (2 * player->GetEquipattack());
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
            return (float) (skill->GetPlayer ()->GetCurWeapon () == 5 ? 28 : skill->GetPlayer ()->GetRange () + 8);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 13;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.7);
        }
#endif
    };
}
#endif