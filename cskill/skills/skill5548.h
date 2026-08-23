//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
55480  "Î¨Shield of Monstrosity"55481  "^ff5c00Î¨Shield of Monstrosity

^ffcb4aManaã€€^96f5ff185.6^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff90ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffSword Shield, Unarmed
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€ã€€^ffffffChaotic Soul
Protect yourself with a shield. For the next ^96f5ff10^ffffff seconds, reflects all negative status effects from ^96f5ff4^ffffff
skills that your enemies cast at you.
When a skill lands multiple hits, each hit is counted as a skill.

^FFFF00Used when inflicted with control effects.
^a6caf0Requires ^ffffff100^a6caf0 Shield Energy."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5548
#define __CPPGEN_GNET_SKILL5548
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5548:public Skill
    {
        public:
        enum
        { SKILL_ID = 5548 };
        Skill5548 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5548Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (1 * (158.7));
                skill->GetPlayer ()->SetPerform (1);
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
        Skill5548Stub ():SkillStub (5548)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Ñª¶Ü-²ØÉ±";
            nativename          = "Éñ¡¤Ñª¶Ü-²ØÉ±";
            icon                = "ÉñÑª¶Ü²ØÉ±.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 7;
            {
                restrict_weapons.push_back (59830);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5165, 1));
            pre_skills.push_back (std::pair < ID, int >(5166, 1));
            runes_attr          = 1;
            feature             = 1205;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5548Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (185);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 90000,90000,90000,90000,90000,90000,90000,90000,90000,90000 };
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
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 63756,63756,63756,63756,63756,63756,63756,63756,63756,63756 };
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
            return (float) (0);
        }
        int GetCostShieldEnergy (Skill * skill) const
        {
            static int aarray[10] = { 100,100,100,100,100,100,100,100,100,100 };
            return aarray[skill->GetLevel () - 1];
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
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
			skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetRatio (100);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetNewValue (4);
            skill->GetVictim ()->SetSoulbeatbackPaladin (1);
            
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
            return (float) (8);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (0);
        }
#endif
    };
}
#endif