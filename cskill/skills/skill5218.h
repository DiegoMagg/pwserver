//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
52180  "唯Heavenly Arbitration"52181  "^ff5c00唯Heavenly Arbitration

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

^ffeaabArgent Glyph Effect:@1
In Shattered Dream status:
^ffeaabLV1-4: Increases damage by ^96f5ff80%%^ffeaab of your Weapon Attack.
^ffeaabLV5-7: Increases damage by ^96f5ff120%%^ffeaab of your Weapon Attack.
^ffeaabLV8-9: Increases damage by ^96f5ff160%%^ffeaab of your Weapon Attack.
^ffeaabLV10: Increases damage by ^96f5ff200%%^ffeaab of your Weapon Attack. @1@2
In Shattered Dream status, increases damage by ^96f5ff%d%%^ffeaab of your Weapon Attack.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5218
#define __CPPGEN_GNET_SKILL5218
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5218:public Skill
    {
        public:
        enum
        { SKILL_ID = 5218 };
        Skill5218 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5218Stub:public SkillStub
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.8, 1.2, 1.6, 2);
                float _glyph_value_plus = skill->GetPlayer ()->IsFilterExist (4460) ? _glyph_value : 0;
                
                skill->GetPlayer ()->SetDecmp (0.8 * (165.6));
                skill->SetPlus (7722);
                skill->SetRatio (1 + _glyph_value_plus);
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
        Skill5218Stub ():SkillStub (5218)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"神·天裁式";
            nativename          = "神·天裁式";
            icon                = "神天裁式白.dds";
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
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5151, 1));
            pre_skills.push_back (std::pair < ID, int >(5152, 1));
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "直接伤害增加2.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill5218Stub ()
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