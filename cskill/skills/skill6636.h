//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
66360  "ΨHeavenly Chasm"66361  "^ff5c00ΨHeavenly Chasm　　　　　　　　　　　　

^ffcb4aRequires Snow Ape form
^ffcb4aRange　^96f5ff%d^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffffInstant
^ffcb4aCast　^ffffff1.0　^ffcb4asecond
^ffcb4aCooldown　^ffffff60.0　^ffcb4aseconds

^ffcb4aWeapon　^ffffffClubs or Unarmed

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Whirl and smash your target within ^96f5ff20^ffffff meters! within ^96f5ff10^ffffff meters of the target,
Deals ^96f5ff230%%^ffffff base physical
damage plus ^96f5ff%d^ffffff to enemies freezing them for ^96f5ff1^ffffff second.
If you have Mark of Yin or Mark of Yang, the mark will be removed and your strike will
Paralyze enemies for ^96f5ff5^ffffff seconds.

Cannot be a critical strike, but has a chance to double your
Critical Rate to deal ^96f5ff1.5^ffffff times damage.

^ffa4a9Petrifaction. Immune to all negative effects while using the skill.
Cannot be canceled.

^a6caf0Costs ^ffffff2^a6caf0 Sparks.

^f7dfa5This attack is guaranteed to hit.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Cooldown reduced to ^96f5ff55^00ff00 seconds
^00ff00Lv5-7: Cooldown reduced to ^96f5ff50^00ff00 seconds
^00ff00Lv8-9: Cooldown reduced to ^96f5ff45^00ff00 seconds
^00ff00Lv10: Cooldown reduced to ^96f5ff40^00ff00 seconds@1@2
^00ff00Cooldown reduced to ^96f5ff%d^00ff00 seconds@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6636
#define __CPPGEN_GNET_SKILL6636
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6636:public Skill
    {
        public:
        enum
        { SKILL_ID = 6636 };
        Skill6636 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6636Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 500;
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
                skill->GetPlayer()->SetDecmp(0.2 * (345));
                skill->GetPlayer()->SetFreemoveMonkey(1);
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
        class State2 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 1500;
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
                skill->GetPlayer()->SetDecmp(0.8 * (345));
                skill->GetPlayer()->SetPerform(1);
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
        class State3 : public SkillStub::State
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
        Skill6636Stub ():SkillStub (6636)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"��������ǵ";
            nativename          = "��������ǵ";
            icon                = "��������ǵ��.dds";
#endif
            max_level           = 1;
            type                = 8;
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
            range.type          = 3;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(6502, 1));
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
#endif
        }
        virtual ~ Skill6636Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (345);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
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
            return (float)(10);
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
            return (float)(20);
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
            skill->GetVictim ()->SetValue ((skill->GetPlayer ()->GetPureattack () + 2.5 * skill->GetPlayer ()->GetWeapondamage () + 13298) * skill->GetT2 () * 0.1 *
            (1 +
            0.01 * (skill->GetPlayer ()->GetAttackdegree () - skill->GetPlayer ()->GetDefenddegree () >
            0 ? skill->GetPlayer ()->GetAttackdegree () - skill->GetPlayer ()->GetDefenddegree () : 0)));
            skill->GetVictim ()->SetPhysichurt (1);
            
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetT0 () && skill->GetT1 () ? 100 : 0));
            skill->GetVictim ()->SetTime (5500);
            skill->GetVictim ()->SetDizzy (1);
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
        float GetTalent2 (PlayerWrapper * player) const
        {
            return (float) (player->GetRand () < player->GetCrit () * 2 ? 15 : 10);
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
            return (float)(25);
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