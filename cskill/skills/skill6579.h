//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
65790  "ΨFalling Punishment"65791  "^ff5c00ΨFalling Punishment　　　　　　　　　　　　

^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%.1f^ffffff
^ffcb4aChannel　^ffffff0.3　^ffcb4aseconds
^ffcb4aCast　^ffffff1.3　^ffcb4aseconds
^ffcb4aCooldown　^ffffff45.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffClubs

^ffcb4aRequired Cultivation 　^ffffffChaotic Soul
within ^96f5ff10^ffffff meters Jump high before smashing the ground, dealing base physical
damage plus ^96f5ff250%%^ffffff of weapon damage plus ^96f5ff%d^ffffffto enemies.
Limits your enemy's speed to ^96f5ff0^ffffff m/s and they will not be able to use Reposition. Lasts for ^96f5ff1^ffffff second.

^a6caf0The skill only has effect on players.

^a6caf0Costs ^ffffff1 ^a6caf0Spark.

^f7dfa5This attack is guaranteed to hit.

^ffeaabArgent Glyph Effect:@1
^ffeaabLV5-4: Duration is increased to ^96f5ff2 ^ffeaabseconds.
^ffeaabLV5-7: Duration is increased to ^96f5ff3 ^ffeaabseconds.
^ffeaabLV8-9: Duration is increased to ^96f5ff4 ^ffeaabseconds.
^ffeaabLV10: Duration is increased to ^96f5ff5 ^ffeaabseconds.@1@2
^ffeaabDuration is increased to ^96f5ff%d^ffeaab seconds. @2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6579
#define __CPPGEN_GNET_SKILL6579
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6579:public Skill
    {
        public:
        enum
        { SKILL_ID = 6579 };
        Skill6579 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6579Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1 : public SkillStub::State
        {
            public:
            int GetTime(Skill *skill) const
            {
                return 300;
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
                skill->GetPlayer()->SetDecmp(0.2 * ((9 * skill->GetLevel()) + 191.3));
                skill->GetPlayer()->SetPray(1);
            }
            bool Interrupt(Skill *skill) const
            {
                return false;
            }
            bool Cancel(Skill *skill) const
            {
                return 1;
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
                return 1300;
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
                skill->GetPlayer()->SetDecmp(0.8 * ((9 * skill->GetLevel()) + 191.3));
                skill->SetPlus(9245);
                skill->SetRatio(2.5);
                skill->SetDamage(skill->GetAttack());
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
        Skill6579Stub ():SkillStub (6579)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"��׹�ǻ���";
            nativename          = "��׹�ǻ���";
            icon                = "��׹�ǻ�����.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
            rank                = 40;
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
            allow_forms         = 1;
            {
                restrict_weapons.push_back (69843);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(6489, 1));
            runes_attr          = 2;
            feature             = 1401;
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
        virtual ~ Skill6579Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (200);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1300;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 45000,45000,45000,45000,45000,45000,45000,45000,45000,45000 };
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
            return (float)(skill->GetPlayer()->GetRange());
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
            int _glyph_value = get_glyph((skill->GetLevel ()
            ), 2000, 4000, 5000, 6000);
            
            skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer ()->GetCls () == -1 ? 0 : skill->GetT0 () && skill->GetT1 () ? 100 : 0);
            skill->GetVictim ()->SetTime (_glyph_value);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetComboYinYang2 (1);
            
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