//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
52100  "唯Hallowed Punishment"52101  "^ff5c00唯Hallowed Punishment

^ffcb4aRange銆€^ffffffMelee
^ffcb4aMana銆€^96f5ff160.2^ffffff
^ffcb4aChannel銆€^ffffff0.1   ^ffcb4asecond(s)
^ffcb4aCast銆€^ffffff0.9   ^ffcb4asecond(s)
^ffcb4aCooldown銆€^ffffff8.0    ^ffcb4asecond(s)
^ffcb4aChi Gained銆€^ffffff20
^ffcb4aWeapon銆€^ffffffSword Shield
^ffcb4aGlyph Bonus銆€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation銆€銆€^ffffffChaotic Soul
Attacks twice, dealing Physical Damage to the target equal to
your base Physical Attack plus ^96f5ff300%%^ffffff gear Attack and ^96f5ff8478^ffffff.
The first hit is guaranteed to increase the target's damage taken by ^96f5ff30%%^ffffff for ^96f5ff5^ffffff seconds.
This effect can coexist with Heaven's Flame.
This effect will cancel Extreme Poison.
The second hit has a ^96f5ff25%%^ffffff chance to heal
yourself by ^96f5ff10%%^ffffff of the damage you deal.

^00ffffEthereal Glyph Effect:@1
Upon landing a Critical Hit, the first hit is guaranteed to increase the target's damage taken.
^00ffffLV1-4: Damage Taken is increased by ^ffffff35%%.
^00ffffLV5-7: Damage Taken is increased by ^ffffff40%%.
^00ffffLV8-9: Damage Taken is increased by ^ffffff45%%.
^00ffffLV10: Damage Taken is increased by ^ffffff50%%. @1@2
^00ffffUpon landing a Critital Hit, the first hit is guaranteed to increase the target's damage taken.
Damage Taken is increased by ^ffffff%d%%^00ffff. @2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5210
#define __CPPGEN_GNET_SKILL5210
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5210:public Skill
    {
        public:
        enum
        { SKILL_ID = 5210 };
        Skill5210 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5210Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * (160.2));
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
                return 50;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (160.2));
                skill->GetPlayer ()->SetPerform (2);
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
                return 425;
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
                skill->SetSection (1);
                skill->SetPlus (8478);
                skill->SetRatio (3);
                skill->SetDamage (0.5 * skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State4:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 425;
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
                skill->SetSection (2);
                skill->SetPlus (8478);
                skill->SetRatio (3);
                skill->SetDamage (0.5 * skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State5:public SkillStub::State
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
        Skill5210Stub ():SkillStub (5210)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"神·神罚式";
            nativename          = "神·神罚式";
            icon                = "神神罚式蓝.dds";
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
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59830);
            }
#ifdef _SKILL_CLIENT
            effect              = "羽锋_十字斩_击中01.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5149, 1));
            pre_skills.push_back (std::pair < ID, int >(5150, 1));
            runes_attr          = 3;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "正面状态效果增强1.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
            statestub.push_back (new State4 ());
            statestub.push_back (new State5 ());
#endif
        }
        virtual ~ Skill5210Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (160);
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 8000,8000,8000,8000,8000,8000,8000,8000,8000,8000 };
            return aarray[skill->GetLevel () - 1];
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
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 160.2);
            
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
            float _glyph_value = get_glyph(skill->GetLevel (), 0.35, 0.4, 0.45, 0.5);

            skill->GetVictim ()->SetProbability (1.0 * skill->GetSection () == 1 ? 100 : 0);
            skill->GetVictim ()->SetTime (5500);
            skill->GetVictim ()->SetRatio (skill->GetPlayer ()->CheckCriticalDamage () ? _glyph_value : 0.3);
            skill->GetVictim ()->SetDeeppoision (1);	
			
            return true;
        }
#endif 
#ifdef _SKILL_SERVER 
        bool BlessMe (Skill * skill) const
        {         
            skill->GetVictim ()->SetProbability (1.0 * skill->GetSection () == 2 ? 25 : 0);
            skill->GetVictim ()->SetTime (1000);
            skill->GetVictim ()->SetRatio (0.1);
            skill->GetVictim ()->SetInchpsteal (1);

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