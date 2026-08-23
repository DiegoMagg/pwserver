//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
66260  "ΨCosmic Union"66261  "^ff5c00ΨCosmic Union　　　　　　　　　　　　

^ffcb4aRequires Snow Ape form
^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.1　^ffcb4asecond
^ffcb4aCast　^ffffff2.6　^ffcb4aseconds
^ffcb4aCooldown　^ffffff60.0　^ffcb4aseconds

^ffcb4aWeapon　^ffffffClubs or Unarmed

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Slap four times with fury! Attack all enemies within ^96f5ff8^ffffffmeters.
Deals ^96f5ff380%%^ffffff base damage plus^96f5ff12891^ffffff
physical damage. If you have Mark of Yin or Mark of Yang, your first hit inflicts
stunned status to nearby enemies. Lasts for ^96f5ff5^ffffff seconds.

^ffa4a9Petrifaction. Immune to all negative effects while using the skill.
Cannot be canceled.

^a6caf0Costs ^ffffff1^a6caf0 Spark.

^f7dfa5This attack is guaranteed to hit.

^ff0000Sanguine Glyph Effect:@1
^ff0000Lv1-4: The first ^96f5ff1^ff0000 stage will be a critical attack
^ff0000Lv5-7: The first ^96f5ff2^ff0000 stages will be a critical attack
^ff0000Lv8-9: The first ^96f5ff3^ff0000 stages will be a critical attack
^ff0000Lv10: The first ^96f5ff4^ff0000 stages will be a critical attack @1@2
The first ^96f5ff%d^ff0000 stages will be a critical attack @2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6626
#define __CPPGEN_GNET_SKILL6626
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6626:public Skill
    {
        public:
        enum
        { SKILL_ID = 6626 };
        Skill6626 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6626Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 200;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->GetPlayer()->SetDecmp(0.2 * (270));
                skill->GetPlayer()->SetFreemoveMonkey(1);
                skill->GetPlayer ()->SetForceCriticalAttack (1);
                skill->GetPlayer()->SetPray(1);
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
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
        class State3 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 250;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->SetSection (1);
                skill->GetPlayer()->SetDecmp(0.2 * (270));
                skill->SetPlus(0.2 * (12891));
                skill->SetRatio(0.2 * (3.8));
                skill->SetDamage(skill->GetAttack());
                skill->GetPlayer()->SetPerform(0);
                
                skill->GetPlayer ()->SetForceCriticalAttack (1);
                
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State4 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 600;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->SetSection (2);
                skill->GetPlayer()->SetDecmp(0.2 * (270));
                skill->SetPlus(0.2 * (12891));
                skill->SetRatio(0.2 * (3.8));
                skill->SetDamage(skill->GetAttack());
                skill->GetPlayer()->SetPerform(0);
                
                skill->GetPlayer ()->SetForceCriticalAttack (1);
                
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State5 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 1100;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->SetSection (3);
                skill->GetPlayer()->SetDecmp(0.2 * (270));
                skill->SetPlus(0.3 * (12891));
                skill->SetRatio(0.3 * (3.8));
                skill->SetDamage(skill->GetAttack());
                skill->GetPlayer()->SetPerform(0);
                
                skill->GetPlayer ()->SetForceCriticalAttack (1);
                
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State6 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 1600;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
                skill->SetSection (4);
                skill->GetPlayer()->SetDecmp(0.2 * (270));
                skill->SetPlus(0.3 * (12891));
                skill->SetRatio(0.3 * (3.8));
                skill->SetDamage(skill->GetAttack());
                skill->GetPlayer()->SetPerform(0);
                
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State7 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 0;
            }
            bool Quit(Skill *skill) const
            {
                return false;
            }
            bool Loop(Skill *skill) const
            {
                return false;
            }
            bool Bypass(Skill *skill) const
            {
                return false;
            }
            void Calculate(Skill *skill) const
            {
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 0;
            }
            bool Skip(Skill *skill) const
            {
                return 0;
            }
        };
#endif
        Skill6626Stub ():SkillStub (6626)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"������ĺ�";
            nativename          = "������ĺ�";
            icon                = "������ĺϺ�.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1501;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (69843);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(6494, 1));
            runes_attr          = 3;
            feature             = 1401;
            immune_casting      = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
            statestub.push_back (new State4 ());
            statestub.push_back (new State5 ());
            statestub.push_back (new State6 ());
            statestub.push_back (new State7 ());
#endif
        }
        virtual ~ Skill6626Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (270);
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
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
        float GetRadius(Skill *skill) const
        {
            return (float)(8);
        }
        float GetAttackdistance(Skill *skill) const
        {
            return (float)(0);
        }
        float GetAngle(Skill *skill) const
        {
            return (float)(1 - 0.0111111 * (0));
        }
        float GetPraydistance(Skill *skill) const
        {
            return (float)(skill->GetPlayer()->GetRange() + 8);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction(Skill *skill, wchar_t *buffer, int length, wchar_t *format) const
        {
            return _snwprintf(buffer, length, format);
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity(Skill *skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * skill->GetSection () == 1 ? (skill->GetPlayer ()->GetCls () == -1 ? 0 : skill->GetT0 () && skill->GetT1 () ? 100 : 0) : 0); // Skill de Stun
            skill->GetVictim ()->SetTime (5500);
            skill->GetVictim ()->SetFix (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRemoveFilterMonkey (1);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetFilterID (4485));
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetFilterID (4486));
        }
#endif
#ifdef _SKILL_SERVER
        bool TakeEffect(Skill *skill) const
        {;
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetEffectdistance(Skill *skill) const
        {
            return (float)(skill->GetPlayer()->GetRange());
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed(Skill *skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate(Skill *skill) const
        {
            return (float)(1.0);
        }
#endif
    };
}
#endif