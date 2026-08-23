//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
63910  "Î£Saber's Beads"63911  "^ffff00Î£Saber's Beads

^ffcb4aManaã€€^96f5ff267^ffffff
^ffcb4aCastã€€^ffffffInstant^ffcb4a
^ffcb4aCooldownã€€^ffffff180.0ã€€ ^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffSaber, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffCelestial Sage
Fully empower your blade with the dark side of
the moon, tempering it with the barest
glimmer of lunar light, to increase your
Critical damage by ^96f5ff50%%^ffffff. In addition, every
Critical Hit will restore ^96f5ff20%% ^ffffffof your maximum
Health and generate ^96f5ff50 ^ffffffChi. Lasts ^96f5ff20 ^ffffffseconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6391
#define __CPPGEN_GNET_SKILL6391
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6391:public Skill
    {
        public:
        enum
        { SKILL_ID = 6391 };
        Skill6391 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6391Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (267);
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
        Skill6391Stub ():SkillStub (6391)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"ÖÁ¡¤Ì°ÀÇÈÐ";
            nativename          = "ÖÁ¡¤Ì°ÀÇÈÐ";
            icon                = "Ì°ÀÇÈÐ.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 22;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 1001;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44878);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "Ò¹Ó°_Ì°ÀÇÈÐ_»÷ÖÐ.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2776, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill6391Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (267);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 180000,180000,180000,180000,180000,180000,180000,180000,180000,180000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 5000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000 };
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
            skill->GetVictim ()->SetTime (21000);
            skill->GetVictim ()->SetRatio (0.2);
            skill->GetVictim ()->SetAmount (2);
            skill->GetVictim ()->SetValue (50);
            skill->GetVictim ()->SetGenhpap (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (21000);
            skill->GetVictim ()->SetRatio (0.6);
            skill->GetVictim ()->SetInccritdamage (1);
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
            return (float) (0);
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