//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
52170  "唯Heavenly Arbitration"52171  "^ff5c00唯Heavenly Arbitration

^ffcb4aRange銆€^ffffff23^ffcb4a銆€銆€meters
^ffcb4aMana銆€^96f5ff165.6^ffffff
^ffcb4aChannel銆€^ffffff0.1銆€^ffcb4asecond
^ffcb4aCast銆€^ffffff1.0銆€^ffcb4asecond
^ffcb4aCooldown銆€^ffffff5.0銆€^ffcb4aseconds
^ffcb4aChi Gained銆€^ffffff10
^ffcb4aWeapon銆€^ffffffSword Shield
^ffcb4aGlyph Bonus銆€^ff5c00Dragon's Might

^ffcb4aRequired Cultivation銆€^ffffffCelestial Saint
Slashes upward with your heavy sword, dealing Physical Damage to the target equal to Physical Attack
plus ^96f5ff100%%^ffffff gear Attack and ^96f5ff7722^ffffff.

^ff0000Sanguine Glyph Effect:@1
^ff0000LV1-4: Upon landing a critical hit, deals an additional Penetration damage equal to
^96f5ff2%%^ff0000 of your Max HP, but no more than
^96f5ff10%% of the target's Max HP. Not effective against monsters.
^ff0000LV5-7: Upon landing a critical hit, deals an additional Penetration damage equal to
^96f5ff3%%^ff0000 of your Max HP, but no more than
^96f5ff10%% of the target's Max HP. Not effective against monsters.
^ff0000LV8-9: Upon landing a critical hit, deals an additional Penetration damage equal to
^96f5ff4%%^ff0000 of your Max HP, but no more than
^96f5ff10%% of the target's Max HP. Not effective against monsters.
^ff0000LV10: Upon landing a critical hit, deals an additional Penetration damage equal to
^96f5ff5%%^ff0000 of your Max HP, but no more than
^96f5ff10%% of the target's Max HP. Not effective against monsters. @1@2
Upon landing a critical hit, deals an additional Penetration damage equal to
^96f5ff%d%%^ff0000 of your Max HP, but no more than
^96f5ff10%%^96f5ff of the target's Max HP. Not effective against monsters. @2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5217
#define __CPPGEN_GNET_SKILL5217
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5217:public Skill
    {
        public:
        enum
        { SKILL_ID = 5217 };
        Skill5217 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5217Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * (165.6));
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
                skill->GetPlayer ()->SetDecmp (0.8 * (165.6));
                skill->SetPlus (7722);
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
        Skill5217Stub ():SkillStub (5217)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"神·天裁式";
            nativename          = "神·天裁式";
            icon                = "神天裁式红.dds";
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
            time_type           = 0;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59830);
            }
#ifdef _SKILL_CLIENT
            effect              = "羽锋_纵斩_击中01.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5151, 1));
            pre_skills.push_back (std::pair < ID, int >(5152, 1));
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "正面状态效果增强1.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill5217Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (165);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 5000;
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
            return (float) (23);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 165.6);
            
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
            
            float _glyph_value = get_glyph(skill->GetLevel (), 0.02, 0.03, 0.04, 0.05);
            
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPlayer ()->CheckCriticalDamage () ? 100 : 0));
            skill->GetVictim ()->SetValue (skill->GetTarget ()->GetCls () != -1 ? ((skill->GetPlayer ()->GetMaxhp () * _glyph_value) >
            (skill->GetTarget ()->GetMaxhp () * 0.1) ? (skill->GetTarget ()->GetMaxhp () * 0.1) : (skill->GetPlayer ()->GetMaxhp () * _glyph_value)) : 1);
            skill->GetVictim ()->SetPurehurtFromHp (1);
            
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
            return (float) (38);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 3;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
        }
#endif
    };
}
#endif