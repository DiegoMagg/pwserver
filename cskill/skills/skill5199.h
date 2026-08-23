//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
51990  "Î¨Earth Punishment"51991  "^ff5c00Î¨Earth Punishment

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff130.8^ffffff
^ffcb4aChannelã€€^ffffff0.1  ^ffcb4asecond
^ffcb4aCastã€€^ffffff0.7  ^ffcb4asecond
^ffcb4aCooldownã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffSword Shield
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivation ã€€^ffffffChaotic Soul
Jumps up and smashes the ground with your shield, dealing damage to all targets within ^96f5ff8^ffffff
meters. Deals damage equal to base Physical Attack plus ^96f5ff50%%^ffffff gear Attack
and ^96f5ff7534^ffffff.

^ff0000Sanguine Glyph Effect:@1
^ff0000Lv1-4: Upon landing a Crit Hit, lowers target's Movement Speed by ^96f5ff20%%^ff0000 for ^96f5ff10^ff0000 seconds.
^ff0000Lv5-7: Upon landing a Crit Hit, lowers target's Movement Speed by ^96f5ff30%%^ff0000 for ^96f5ff10^ff0000 seconds.
^ff0000Lv8-9: Upon landing a Crit Hit, lowers target's Movement Speed by ^96f5ff40%%^ff0000 for ^96f5ff10^ff0000 seconds.
^ff0000Lv10: Upon landing a Crit Hit, lowers target's Movement Speed by ^96f5ff50%%^ff0000 for ^96f5ff10^ff0000 seconds.
@1@2
Upon landing a Crit Hit, lowers target's Movement Speed by ^96f5ff%d%%^ff0000 for ^96f5ff10^ff0000seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5199
#define __CPPGEN_GNET_SKILL5199
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5199:public Skill
    {
        public:
        enum
        { SKILL_ID = 5199 };
        Skill5199 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5199Stub:public SkillStub
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
        Skill5199Stub ():SkillStub (5199)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤µØÉóÊ½";
            nativename          = "Éñ¡¤µØÉóÊ½";
            icon                = "ÉñµØÉóÊ½ºì.dds";
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
            effect              = "½üÉíÈº¹¥_»÷ÖÐ.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5141, 1));
            pre_skills.push_back (std::pair < ID, int >(5142, 1));
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ÕýÃæ×´Ì¬Ð§¹ûÔöÇ¿1.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill5199Stub ()
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
            return (float) (8);
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
            float _glyph_value = get_glyph(skill->GetLevel (), 0.2, 0.3, 0.4, 0.5);
            
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPlayer ()->CheckCriticalDamage () ? 100 : 0));
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetRatio (_glyph_value);
            skill->GetVictim ()->SetSlow (1);
            
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