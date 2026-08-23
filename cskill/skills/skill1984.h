//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
19840  "â—Imbued Fox Form"19841  "^8080ffâ—Imbued Fox Form
^96f5ff
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff2.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instrument

^ffcb4aRequired Cultivationã€€^ffffffAware of the Myriad
Transform into your fox form, increasing Physical Defense by
^96f5ff
%d%%^ffffff and Accuracy by ^96f5ff%d%%^ffffff.
Allows Fox Form skills to be used.
Convert Magic Attack to Physcial Attack. The higher magic
weapon damage and higher Magic you have, the higher Physical Attack you will have.

^a6caf0Shares a cooldown with Spirit Fox Form.

^f7dfa5Sage version generates ^96f5ff35^f7dfa5 Chi

^a6caf0Used when inflicted with control effects."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1984
#define __CPPGEN_GNET_SKILL1984
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1984:public Skill
    {
        public:
        enum
        { SKILL_ID = 1984 };
        Skill1984 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1984Stub:public SkillStub
    {
        public:
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
                skill->GetPlayer ()->SetDecmp (150);
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
        Skill1984Stub ():SkillStub (1984)
        {
            cls                 = 3;
#ifdef _SKILL_CLIENT
            name                = L"Õæ¡¤Ñýºü±ä(Ç¿»¯)";
            nativename          = "Õæ¡¤Ñýºü±ä(Ç¿»¯)";
            icon                = "Áéºü±ä1.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 35;
            attr                = 0;
            rank                = 20;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 1614;
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
            effect              = "1Ñýºü¸½Ìå.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 8;
            commoncooldowntime  = 2000;
            pre_skills.push_back (std::pair < ID, int >(656, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill1984Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (150);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 2000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange () + 2 + 0.3 * skill->GetLevel ());
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
            return _snwprintf (buffer, length, format, 150, 150, 250);
            
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
            skill->GetVictim ()->SetProbability (1.0 * 2.5);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetAmount (1.5);
            skill->GetVictim ()->SetValue (1);
            skill->GetVictim ()->SetFoxform (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio(0.8f);
            skill->GetVictim ()->SetConvertAtaqMtoAtaqF2(1);
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
            return (float) (5);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 0;
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