//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50400  "唯Murderous Indulgence"50401  "^ff5c00唯Murderous Indulgence

^ffcb4aRange銆�^ffffffRanged
^ffcb4aMana銆�^96f5ff167^ffffff
^ffcb4aChannel銆�^ffffff0.1銆�^ffcb4asecond
^ffcb4aCast銆�^ffffff3.0銆�^ffcb4aseconds
^ffcb4aCooldown銆�^ffffff45.0銆�^ffcb4aseconds
^ffcb4aWeapon銆�^ffffffFirearm
^ffcb4aGlyph Bonus銆�^ff5c00Martial Prowess

^ffcb4aRequired Cultivation銆�^ffffffCelestial Saint
Launches a frenzy attack that deals Physical damage equal to
^96f5ff400%%^ffffff of your base Physical Attack.
First Hit: if the enemy is within ^96f5ff10^ffffff meters, knocks
it back for ^96f5ff15^ffffff meters.

^a6caf0Costs ^ffffff1 ^a6caf0Spark.

^00ff00Verdant Glyph Effect:@1
First, use 唯Burning Flutter to get the Life Straggler status;
In Life Straggler status, deals additional damage and increases Crit Damage.
^00ff00LV1-4: Deals an additional damage equal to ^96f5ff48%%^00ff00 of base Physical Attack.
^00ff00LV5-7: Deals an additional damage equal to ^96f5ff72%%^00ff00 of base Physical Attack.
^00ff00LV8-9: Deals an additional damage equal to ^96f5ff96%%^00ff00 of base Physical Attack.
^00ff00LV10: Deals an additional damage equal to ^96f5ff120%%^00ff00 of base Physical Attack. @1@2
Can trigger Life Straggler, inreasing damage by ^96f5ff%d%%^00ff00 Physical Attack.
@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5040
#define __CPPGEN_GNET_SKILL5040
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5040:public Skill
    {
        public:
        enum
        { SKILL_ID = 5040 };
        Skill5040 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5040Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * (167));
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
                skill->GetPlayer ()->SetDecmp (0.8 * (167));
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
                return 550;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.48, 0.72, 0.96, 1.2);
                float _glyph_ratio_plus = skill->GetPlayer ()->CheckBuffState(429) ? _glyph_value : 0;

                skill->SetSection (1);
                skill->SetDamage ((_glyph_ratio_plus + 0.2) * skill->GetAttack ());
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
                return 300;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.48, 0.72, 0.96, 1.2);
                float _glyph_ratio_plus = skill->GetPlayer ()->CheckBuffState(429) ? _glyph_value : 0;

                skill->SetSection (2);
                skill->SetDamage ((_glyph_ratio_plus + 0.3) * skill->GetAttack ());
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
                return 300;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.48, 0.72, 0.96, 1.2);
                float _glyph_ratio_plus = skill->GetPlayer ()->CheckBuffState(429) ? _glyph_value : 0;

                skill->SetSection (3);
                skill->SetDamage ((_glyph_ratio_plus + 0.3) * skill->GetAttack ());
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
        class State6:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 300;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.48, 0.72, 0.96, 1.2);
                float _glyph_ratio_plus = skill->GetPlayer ()->CheckBuffState(429) ? _glyph_value : 0;

                skill->SetSection (4);
                skill->SetDamage ((_glyph_ratio_plus + 0.4) * skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State7:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 300;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.48, 0.72, 0.96, 1.2);
                float _glyph_ratio_plus = skill->GetPlayer ()->CheckBuffState(429) ? _glyph_value : 0;

                skill->SetSection (5);
                skill->SetDamage ((_glyph_ratio_plus + 0.4) * skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State8:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 300;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.48, 0.72, 0.96, 1.2);
                float _glyph_ratio_plus = skill->GetPlayer ()->CheckBuffState(429) ? _glyph_value : 0;

                skill->SetSection (6);
                skill->SetDamage ((_glyph_ratio_plus + 0.4) * skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State9:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 300;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.48, 0.72, 0.96, 1.2);
                float _glyph_ratio_plus = skill->GetPlayer ()->CheckBuffState(429) ? _glyph_value : 0;

                skill->SetSection (7);
                skill->SetDamage ((_glyph_ratio_plus + 0.4) * skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State10:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 300;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.48, 0.72, 0.96, 1.2);
                float _glyph_ratio_plus = skill->GetPlayer ()->CheckBuffState(429) ? _glyph_value : 0;

                skill->SetSection (8);
                skill->SetDamage ((_glyph_ratio_plus + 0.6) * skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State11:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 300;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.48, 0.72, 0.96, 1.2);
                float _glyph_ratio_plus = skill->GetPlayer ()->CheckBuffState(429) ? _glyph_value : 0;

                skill->SetSection (9);
                skill->SetDamage ((_glyph_ratio_plus + 1) * skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (0);
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
        class State12:public SkillStub::State
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
        Skill5040Stub ():SkillStub (5040)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"神·一响贪欢";
            nativename          = "神·一响贪欢";
            icon                = "神一响贪欢绿.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1012;
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
            effect              = "夜影_定风波_击中.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
            feature             = 1302;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "正面状态效果增强2.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
            statestub.push_back (new State4 ());
            statestub.push_back (new State5 ());
            statestub.push_back (new State6 ());
            statestub.push_back (new State7 ());
            statestub.push_back (new State8 ());
            statestub.push_back (new State9 ());
            statestub.push_back (new State10 ());
            statestub.push_back (new State11 ());
            statestub.push_back (new State12 ());
#endif
        }
        virtual ~ Skill5040Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (167);
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
        }
        int GetCoolingtime (Skill * skill) const
        {
            int coolingtime = 45000;
            
            if(skill->GetPlayer ()->IsFilterExist(4552))
            {
                coolingtime -= 4500;
            }
            return coolingtime;
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
            return 100;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            
            int rapel = 0;
            if(skill->GetSection () < 2) rapel = 100;
            
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 () <= 10 ? rapel : 0);
            skill->GetVictim ()->SetTime (4000);
            skill->GetVictim ()->SetAmount (1000);
            skill->GetVictim ()->SetValue (15);
            skill->GetVictim ()->SetRepel2 (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 () <= 10 ? rapel : 0);
            skill->GetVictim ()->SetValue (15);
            skill->GetVictim ()->SetRepel (1);
            return true;
        }
#endif
/*#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetSkillcooldownAtrDec (1);
            return true;
        }
#endif*/
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetRangetotarget ());
        }
#endif
#ifdef _SKILL_SERVER
        bool TakeEffect (Skill * skill) const
        {
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
            return (float) (1.0);
        }
#endif
    };
}
#endif