//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
65500  "Î¨Golden Convolution"65501  "^ff5c00Î¨Golden Convolution

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.5ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff60.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffClubs

^ffcb4aRequired Cultivation ã€€^ffffffChaotic Soul
Fight like a dragon. Deals base physical damage plus
^96f5ff300%%^ffffff of weapon damage plus
^96f5ff%d^ffffff. Paralyzes target for ^96f5ff5^ffffff seconds.
Gain ^96f5ff20^ffffff Chi after finishing casting the skill.

^a6caf0Costs ^ffffff1^a6caf0 Spark.

^00ffffEthereal Glyph Effect@1
^00ffffLv1-4: Chi gained is increased to ^ffffff40
^00ffffLv5-7: Chi gained is increased to ^ffffff60
^00ffffLv8-9: Chi gained is increased to ^ffffff80
^00ffffLv10: Chi gained is increased to ^ffffff100@1@2
^00ffffChi gained is increased to ^ffffff%d^00ffff@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6550
#define __CPPGEN_GNET_SKILL6550
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6550:public Skill
    {
        public:
        enum
        { SKILL_ID = 6550 };
        Skill6550 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6550Stub:public SkillStub
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
                skill->GetPlayer()->SetDecmp(0.2 * (100.8));
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
                skill->GetPlayer()->SetDecmp(0.8 * (100.8));
                skill->SetPlus(11763);
                skill->SetRatio(3);
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
        Skill6550Stub ():SkillStub (6550)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤»ØÕ¶½ð¸ê";
            nativename          = "Éñ¡¤»ØÕ¶½ð¸ê";
            icon                = "Éñ»Ø×ª½ð¸êÀ¶.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
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
            effect              = "2021ÑýºïÄÐÖÐ¼¶¼¼ÄÜ1_»÷ÖÐ.att";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(6508, 1));
            pre_skills.push_back (std::pair < ID, int >(6509, 1));
            runes_attr          = 2;
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
        virtual ~ Skill6550Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (100);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1500;
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
            return (float)(0);
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (4050);
            skill->GetVictim ()->SetValue (2);
            skill->GetVictim ()->SetPalsy (1);
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            int _glyph_value = get_glyph((skill->GetLevel ()), 40, 60, 80, 100);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (_glyph_value);
            skill->GetVictim ()->SetAp (1);
            
            return true;
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