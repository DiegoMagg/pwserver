//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
22220  "Î£Pantheon's Blessing"22221  "^ffff00Î£Pantheon's Blessing

^96f5ffCan be cast under normal or Violet Dance status
^ffcb4aMana ã€€^ffffff2400
^ffcb4aChannelã€€^ffffff2.0ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff3.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff50
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instrument

^ffcb4aRequired Cultivation ã€€^ffffffAware of Vacuity
Call down the blessing of the gods upon all allies within ^96f5ff15 ^ffffffmeters.
Increases Magical Defense from equipment by ^96f5ff90%%^ffffff.
Increases Physical Defense from equipment by ^96f5ff90%%^ffffff.
Increases Magic Attack from equipment by ^96f5ff80%%^ffffff.
Increases Mana regeneration by ^96f5ff10 ^ffffffper second.
Increases HP regeneration by ^96f5ff10 ^ffffffper second.
Skill damage against monsters is creased by ^96f5ff20%%^ffffff. Lasts ^96f5ff1 ^ffffffhour."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2222
#define __CPPGEN_GNET_SKILL2222
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2222:public Skill
    {
        public:
        enum
        { SKILL_ID = 2222 };
        Skill2222 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2222Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 2000;
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
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 5;
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
                return 3000;
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
                skill->GetPlayer ()->SetDecmp (2400);
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
        Skill2222Stub ():SkillStub (2222)
        {
            cls                 = 7;
#ifdef _SKILL_CLIENT
            name                = L"ÖÁ¡¤ÖîÉñÖ®ÓÓ";
            nativename          = "ÖÁ¡¤ÖîÉñÖ®ÓÓ";
            icon                = "ÖÁ¡¤ÖîÉñÖ®ÓÓ.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 50;
            attr                = 0;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1417;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÓðÁé_ÖîÉñÖ®ÓÓ.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(121, 1));
            pre_skills.push_back (std::pair < ID, int >(122, 1));
            pre_skills.push_back (std::pair < ID, int >(124, 1));
            pre_skills.push_back (std::pair < ID, int >(194, 1));
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
        virtual ~ Skill2222Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (2400);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 3000;
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
            static int aarray[10] = { 300000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 300000,300000,300000,300000,300000,300000,300000,300000,300000,300000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 42156,42156,42156,42156,42156,42156,42156,42156,42156,42156 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (15);
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
            skill->GetVictim ()->SetTime (3600000);
            skill->GetVictim ()->SetRatio (0.9);
            skill->GetVictim ()->SetStoneskin (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (3600000);
            skill->GetVictim ()->SetRatio (0.9);
            skill->GetVictim ()->SetIncresist (1);
            skill->GetVictim ()->SetTime (3600000);
            skill->GetVictim ()->SetRatio (0.8);
            skill->GetVictim ()->SetBlessmagic (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (3600000);
            skill->GetVictim ()->SetValue (50);
            skill->GetVictim ()->SetFastmpgen (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (3600000);
            skill->GetVictim ()->SetValue (50);
            skill->GetVictim ()->SetFasthpgen (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (3600000);
            skill->GetVictim ()->SetRatio (0.2);
            skill->GetVictim ()->SetEnhanceskilldamage3 (1);
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
            return (float) (30);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 6;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1);
        }
#endif
    };
}
#endif