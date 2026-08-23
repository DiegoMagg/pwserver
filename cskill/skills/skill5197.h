//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
51970  "唯Earth Punishment"51971  "^ff5c00唯Earth Punishment

^ffcb4aRange銆€^ffffffMelee
^ffcb4aMana銆€^96f5ff130.8^ffffff
^ffcb4aChannel銆€^ffffff0.1  ^ffcb4asecond
^ffcb4aCast銆€^ffffff0.7  ^ffcb4asecond
^ffcb4aCooldown銆€^ffffff1.0銆€^ffcb4asecond
^ffcb4aChi Gained銆€^ffffff10
^ffcb4aWeapon銆€^ffffffSword Shield
^ffcb4aGlyph Bonus銆€^ff5c00Dragon's Might

^ffcb4aRequired Cultivation 銆€^ffffffChaotic Soul
Jumps up and smashes the ground with your shield, dealing damage to all targets within ^96f5ff8^ffffff
meters. Deals damage equal to base Physical Attack plus ^96f5ff50%%^ffffff gear Attack
and ^96f5ff7534^ffffff.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Attack Range is increased to ^96f5ff9^00ff00 meters
^00ff00Lv5-7: Attack Range is increased to ^96f5ff10^00ff00 meters
^00ff00Lv8-9: Attack Range is increased to ^96f5ff11^00ff00 meters
^00ff00Lv10: Attack Range is increased to ^96f5ff12^00ff00 meters @1@2
^00ff00Attack Range is increased to ^96f5ff%d^00ff00 meters @2 "*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5197
#define __CPPGEN_GNET_SKILL5197
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5197:public Skill
    {
        public:
        enum
        { SKILL_ID = 5197 };
        Skill5197 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5197Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * (130.8));
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
                skill->GetPlayer ()->SetDecmp (0.8 * (130.8));
                skill->SetPlus (7534);
                skill->SetRatio (0.5);
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
        Skill5197Stub ():SkillStub (5197)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"神·地审式";
            nativename          = "神·地审式";
            icon                = "神地审式绿.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 40;
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
            effect              = "近身群攻_击中.sgc";
#endif
            range.type          = 2;
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5141, 1));
            pre_skills.push_back (std::pair < ID, int >(5142, 1));
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "影响范围增加1.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill5197Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (130);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 801;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
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
            float _glyph_value = get_glyph(skill->GetLevel (), 9, 10, 11, 12);
            return (float) (_glyph_value);
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
        int GetAttackspeed (Skill * skill) const
        {
            return 11;
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