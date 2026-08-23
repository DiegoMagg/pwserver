//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
66130  "Œ®Mountain Quake"66131  "^ff5c00Œ®Mountain Quake„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ

^ffcb4aRequires Snow Ape form
^ffcb4aRange„ÄÄ^ffffffMelee
^ffcb4aMana„ÄÄ^96f5ff%.1f^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.1„ÄÄ^ffcb4asecond
^ffcb4aCast„ÄÄ^ffffff1.6„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff5.0„ÄÄ^ffcb4aseconds
^ffcb4aChi Gained„ÄÄ^ffffff30
^ffcb4aWeapon„ÄÄ^ffffffClubs, Unarmed

^ffcb4aRequired Cultivation„ÄÄ^ffffffCelestial Saint
within ^96f5ff10^ffffff meters Jump to the air before smashing the ground with your fist,
dealing ^96f5ff180%%^ffffff base physical
damage plus ^96f5ff%d^ffffff to enemies.
Reduces their speed by ^96f5ff50%%^ffffff. Lasts for ^96f5ff5^ffffff seconds.
Reduces their Physical Defense by ^96f5ff60%%^ffffff of gear value, lasting for ^96f5ff10^ffffff seconds.
Grants yourself Mark of Yang. Lasts for ^96f5ff15^ffffff seconds.

^ffa4a9Petrifaction. Immune to all negative effects while using the skill.
Cannot be canceled.

^00ffff}Ethereal Glyph Effect:@1
^00ffffLv1-4: Reduces Physical Defense by ^ffffff72%%^00ffff of gear value.
^00ffffLv5-7:Reduces Physical Defense by ^ffffff78%%^00ffff of gear value
^00ffffLv8-9:Reduces Physical Defense by ^ffffff84%%^00ffff of gear value
^00ffffLv10:Reduces Physical Defense by ^ffffff90%%^00ffff of gear value@1@2
^00ffffReduces Physical Defense by ^ffffff%d%%^00ffff of gear value@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6613
#define __CPPGEN_GNET_SKILL6613
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6613:public Skill
    {
        public:
        enum
        { SKILL_ID = 6613 };
        Skill6613 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6613Stub:public SkillStub
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
                skill->GetPlayer()->SetDecmp(0.2 * (142.2));
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
                return 1700;
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
                skill->GetPlayer()->SetDecmp(0.8 * (142.2));
                skill->SetPlus(8440);
                skill->SetRatio(1.8);
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
        Skill6613Stub ():SkillStub (6613)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"…Ò°§Õ˛∫≥∞Ÿ‘¿";
            nativename          = "…Ò°§Õ˛∫≥∞Ÿ‘¿";
            icon                = "…ÒÕ˛∫≥∞Ÿ‘¿¿∂.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 30;
            attr                = 1;
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
            pre_skills.push_back (std::pair < ID, int >(6543, 1));
            pre_skills.push_back (std::pair < ID, int >(6544, 1));
            runes_attr          = 3;
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
        virtual ~ Skill6613Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (142);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1590;
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
        int GetCostShieldEnergy (Skill * skill) const
        {
            static int aarray[10] = { 0,0,0,0,0,0,0,0,0,0 };
            return aarray[skill->GetLevel () - 1];
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
            return 100;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetSlow (1);
            
            float _glyph_value = get_glyph((skill->GetLevel ()), 0.72, 0.78, 0.84, 0.90);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (_glyph_value);
            skill->GetVictim ()->SetDecdefence (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (16000);
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetMarcaYang (1);
            
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