//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38820  "ΨRaging Slap"38821  "^ff5c00ΨRaging Slap　　　　

^ffcb4aRequires Tiger Form
^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff202^ffffff
^ffcb4aChannel　^ffffff0.3　^ffcb4aseconds
^ffcb4aCast　^ffffff0.7　^ffcb4aseconds
^ffcb4aCooldown　^ffffff20.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffA/H, Unarmed
^ffcb4aGlyph Bonus　^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Taunt the target with a furious slap of your paw,
forcing them to target you. The monster's target will
always be the monster itself.
Grants a shield that absorbs damage equal to ^96f5ff10%%^ffffff of your maximum Health for ^96f5ff5^ffffffseconds.
Guaranteed to remove ^96f5ff1^ffffffpositive status effect.

^a6caf0Has no effect on non-player targets.
^a6caf0Costs ^ffffff35^a6caf0Chi

^ffeaabArgent Glyph Effect@1
^ffeaabLv1-4: Gives you the highest threat for ^96f5ff5^ffeaab seconds
^ffeaabLv5-7: Gives you the highest threat for ^96f5ff6^ffeaab seconds
^ffeaabLv8-9: Gives you the highest threat for ^96f5ff7^ffeaab seconds
^ffeaab Lv10 : Gives you the highest threat for ^96f5ff8^ffeaab seconds@1@2
^ffeaab Gives you the highest threat for ^96f5ff%d^ffeaab seconds@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL882
#define __CPPGEN_GNET_SKILL882
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill882:public Skill
    {
        public:
        enum
        { SKILL_ID = 882 };
        Skill882 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill882Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1000;
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
        class State2:public SkillStub::State
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
        Skill882Stub ():SkillStub (882)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"Զ�̵��彵�﹥����";
            nativename          = "Զ�̵��彵�﹥����";
            icon                = "";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
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
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "������.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
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
        virtual ~ Skill882Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 0;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (60);
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
            return (float) (30);
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
            skill->GetVictim ()->SetTime (180000);
            skill->GetVictim ()->SetRatio (0.2 * skill->GetLevel ());
            skill->GetVictim ()->SetDecattack (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (180000);
            skill->GetVictim ()->SetRatio (0.2 * skill->GetLevel ());
            skill->GetVictim ()->SetDecmagic (1);
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
            return (float) (40);
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