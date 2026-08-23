//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50150  "Î¨Flame: Deadly Flow"50151  "^ff5c00Î¨Flame: Deadly Flow

^ffcb4aRangeã€€^ffffffRanged
^ffcb4aManaã€€^96f5ff178^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff5.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aWeaponã€€^ffffffFirearm
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation ã€€^ffffffChaotic Soul
The Technician detonates an explosive at the target's location,
attacking it as well as all enemy targets within ^96f5ff8^ffffff meters, dealing Fire Damage
equal to base Physical Attack plus ^96f5ff5338^ffffff. For each additional enemy within
the effect range, the caster gains ^96f5ff2^ffffff Chi.

The cooldown time of ^96f5ffÎ¨Murderous Indulgence^ffffff is reduced
by ^96f5ff0.5^ffffff seconds per use of this skill.
^ffffffThe cooldown time will not be reduced for ^96f5ffArgent Glyph Effect of Î¨Murderous Indulgence^ffffff.

^ffeaabArgent Glyph Effect:@1
Can be charged up twice, with an interval of ^96f5ff5^ffeaab seconds.
^ffeaabLv1-4: Deals an additional ^96f5ff50%%^ffeaab of Weapon Attack.
^ffeaabLv5-7: Deals an additional ^96f5ff60%%^ffeaab of Weapon Attack.
^ffeaabLv8-9: Deals an additional ^96f5ff70%%^ffeaab of Weapon Attack.
^ffeaabLv10: Deals an additional ^96f5ff80%%^ffeaab of Weapon Attack.@1@2
^ffeaabCan be charged up twice, dealing an additional damage equal to ^96f5ff%d%%^ffeaab of Weapon Attack.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5015
#define __CPPGEN_GNET_SKILL5015
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5015:public Skill
    {
        public:
        enum
        { SKILL_ID = 5015 };
        Skill5015 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5015Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 100;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (178));
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
                return 700;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.5, 0.6, 0.7, 0.8);
                
                skill->GetPlayer ()->SetDecmp (0.8 * (178));
                skill->SetPlus (5338);
                skill->SetRatio (_glyph_value);
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
        Skill5015Stub ():SkillStub (5015)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤¡ºÑæ¡»Á÷É±";
            nativename          = "Éñ¡¤¡ºÑæ¡»Á÷É±";
            icon                = "ÉñÑæÁ÷É±°×.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1310;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59831);
            }
#ifdef _SKILL_CLIENT
            effect              = "Éñ»ú_Áñµ¯Éä»÷_»÷ÖÐ.sgc";
#endif
            range.type          = 3;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 3;
            feature             = 1301;
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
        virtual ~ Skill5015Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (178);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 701;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 5000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 89 };
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
        float GetRadius (Skill * skill) const
        {
            return (float) (8);
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
        int GetCoolDownLimit (Skill * skill) const
        {
            static int aarray[10] = { 2,2,2,2,2,2,2,2,2,2 };
            return aarray[skill->GetLevel () - 1];
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
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (-1); //feature
            skill->GetVictim ()->SetRatio (500); //time to reduce
            skill->GetVictim ()->SetAmount (5043); //exclude skill
            skill->GetVictim ()->SetNewValue (5038); //id1
            skill->GetVictim ()->SetNewValue2 (5039); //id2
            skill->GetVictim ()->SetNewValue3 (5040); //id3
            skill->GetVictim ()->SetNewValue4 (5041); //id4
            skill->GetVictim ()->SetNewValue5 (5042); //id4
            skill->GetVictim ()->SetDecCooldownFeatureWith5SkillsID (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (2 * skill->GetT0 ());
            skill->GetVictim ()->SetAp (1);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetTargetregionplayernum ());
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
            return (float) (skill->GetPlayer ()->GetRange () + 8);
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