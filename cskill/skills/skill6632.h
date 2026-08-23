//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
66320  "Œ®Plane Traversal"66321  "^ff5c00Œ®Plane Traversal„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ

^ffcb4aRequires Snow Ape form
^ffcb4aRange„ÄÄ^ffffffMelee
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.1„ÄÄ^ffcb4asecond
^ffcb4aCast„ÄÄ^ffffff1.4„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff30.0„ÄÄ^ffcb4aseconds

^ffcb4aWeapon„ÄÄ^ffffffClubs or Unarmed

^ffcb4aRequired Cultivation„ÄÄ^ffffffCelestial Saint
Roar your battle cry! Deals ^96f5ff190%%^ffffff base physical
damage plus ^96f5ff%d^ffffff to enemies within a fan-shaped area, knocking them back.
If you have Mark of Yin or Mark of Yang, your hit will
stun enemies within the fan-shaped area for ^96f5ff5^ffffff seconds.
Increases the Critical Rate by ^96f5ff5%%^ffffff for ^96f5ff10^ffffff seconds.

^a6caf0Only players can be knocked back.

^ffa4a9Petrifaction. Immune to all negative effects while using the skill.
Cannot be canceled.

^a6caf0Costs ^ffffff1^a6caf0 Spark.

^f7dfa5This attack is guaranteed to hit.

^ff0000Sanguine Glyph Effect:@1
^ff0000Lv1-4: Increases the Critical Rate by ^96f5ff10%%
^ff0000Lv5-7: Increases the Critical Rate by ^96f5ff15%%
^ff0000Lv8-9: Increases the Critical Rate by ^96f5ff20%%
^ff0000Lv10: Increases the Critical Rate by ^96f5ff25%%@1@2
Increases the Critical Rate by ^96f5ff%d%%@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6632
#define __CPPGEN_GNET_SKILL6632
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6632:public Skill
    {
        public:
        enum
        { SKILL_ID = 6632 };
        Skill6632 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6632Stub:public SkillStub
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
                skill->GetPlayer()->SetDecmp(0.2 * (330));
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
                skill->GetPlayer()->SetDecmp(0.8 * (330));
                skill->SetPlus(11441);
                skill->SetRatio(1.9);
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
        Skill6632Stub ():SkillStub (6632)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"…Ò°§∆∆≥Â∫Ë√…";
            nativename          = "…Ò°§∆∆≥Â∫Ë√…";
            icon                = "…Ò≥Â∆∆∫Ë√…∫Ï.dds";
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
            range.type          = 4;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(6500, 1));
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
        virtual ~ Skill6632Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (330);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1440;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
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
            return (float)(skill->GetPlayer ()->GetRange () + 8);
        }
        float GetAttackdistance(Skill *skill) const
        {
            return (float)(skill->GetPlayer ()->GetRange () + 7);
        }
        float GetAngle(Skill *skill) const
        {
            return (float)(1 - 0.0111111 * (15));
        }
        float GetPraydistance(Skill *skill) const
        {
            return (float)(skill->GetPlayer ()->GetRange () + 8);
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
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPlayer ()->GetCls () == -1 ? 0 : 100));
            skill->GetVictim ()->SetTime (2050);
            skill->GetVictim ()->SetAmount (1000);
            skill->GetVictim ()->SetValue (3);
            skill->GetVictim ()->SetRepel2 (1);
            
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetT0 () && skill->GetT1 () ? 100 : 0));
            skill->GetVictim ()->SetTime (5050);
            skill->GetVictim ()->SetValue (2);
            skill->GetVictim ()->SetPalsy (1);
            
            float _glyph_value = get_glyph(skill->GetLevel (), 0.1, 0.15, 0.2, 0.25);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetValue (_glyph_value);
            skill->GetVictim ()->SetIncsmite3 (1);
            
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
            return (float)(skill->GetPlayer ()->GetRange () + 10);
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