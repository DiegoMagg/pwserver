//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
52150  "唯Heavenly Arbitration"52151  "^ff5c00唯Heavenly Arbitration

^ffcb4aRange銆€^ff5c0020銆€^ffcb4ameters
^ffcb4aMana銆€^96f5ff165.6^ffffff
^ffcb4aChannel銆€^ffffff0.1銆€^ffcb4aseconds
^ffcb4aCast銆€^ffffff1.0銆€^ffcb4asecond
^ffcb4aCooldown銆€^ff5c0040.0銆€^ffcb4aseconds
^ffcb4aChi Gained銆€^ffffff10
^ffcb4aWeapon銆€^ffffffSword Shield
^ffcb4aGlyph Bonus    ^ff5c00Dragon's Might

^ffcb4aRequired Cultivation銆€銆€^ffffffCelestial Saint
Slashes upward with your sword.
Deals physical damage equal to your base Physical Attack plus ^96f5ff100%% ^ffffffweapon damage plus ^96f5ff7722^ffffff.

^a6caf0Your next attack within 5 seconds will inflict Shattered Dream status on your target.
Cannot take effect when you are already in Shattering Scream status.

^00ff00Verdant Glyph Effect:@1
^00ff00LV1-4: Cooldown is reduced to ^96f5ff35.0^00ff00 seconds.
^00ff00LV5-7: Cooldown is reduced to ^96f5ff30.0^00ff00 seconds.
^00ff00LV8-9: Cooldown is reduced to ^96f5ff25.0^00ff00 seconds.
^00ff00LV10: Cooldown is reduced to ^96f5ff20.0^00ff00 seconds.@1@2
Cooldown is reduced to ^96f5ff%d.0^00ff00 seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5215
#define __CPPGEN_GNET_SKILL5215
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5215:public Skill
    {
        public:
        enum
        { SKILL_ID = 5215 };
        Skill5215 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5215Stub:public SkillStub
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
        Skill5215Stub ():SkillStub (5215)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"神·天裁式";
            nativename          = "神·天裁式";
            icon                = "神天裁式绿.dds";
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
            range.type          = 1;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5151, 1));
            pre_skills.push_back (std::pair < ID, int >(5152, 1));
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "正面状态效果增强2.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill5215Stub ()
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
            int _glyph_value = get_glyph(skill->GetLevel (), 35000, 30000, 25000, 20000);
            return _glyph_value;
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
        bool BlessMe (Skill * skill) const
        {           
            skill->GetVictim()->SetProbability(1.0 * (skill->GetPlayer ()->IsFilterExist (4460) ? 0 : 100));
            skill->GetVictim()->SetTime(6000); //tempo
            skill->GetVictim()->SetAmount(30); //metros
            skill->GetVictim()->SetValue(20); // Quantidade
            skill->GetVictim()->SetShattereddream(1);

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