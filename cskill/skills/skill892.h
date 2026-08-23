//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38920  "ΨDevour"38921  "^ff5c00ΨDevour

^ffcb4aRequires Tiger Form
^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.2　^ffcb4aseconds
^ffcb4aCast　^ffffff1.0　^ffcb4asecond
^ffcb4aCooldown　^ffffff6.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffAxe, Poleaxe, Hammer, Polehammer, or Unarmed
^ffcb4aGlyph Bonus　^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Bite at your foe, dealing physical damage equal to your
Physical Attack plus ^96f5ff3317 ^ffffff.
Reduces the enemy's physical defense for ^96f5ff15 ^ffffffseconds by ^96f5ff50%% ^ffffff and paralyzes
them for ^96f5ff4 ^ffffffseconds. Also increases your threat.
Restores ^96f5ff15^ffffff Chi after use.

Skills of Mighty Swing series share the ^96f5ff6^ffffff
seconds cooldown with skills of Devour series.

^a6caf0Costs ^ffffff35 ^a6caf0Chi.

^00ffffEthereal Glyph Effect:@1
^00ffffLv1-4: Reduces physical defense by ^ffffff60%%^00ffff.
^00ffffLv5-7: Reduces physical defense by ^ffffff70%%^00ffff.
^00ffffLv8-9: Reduces physical defense by ^ffffff80%%^00ffff
^00ffffLv10: Reduces physical defense by ^ffffff90%%^00ffff.@1@2
^00ffffReduces physical defense by ^ffffff%d%%^00ffff.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL892
#define __CPPGEN_GNET_SKILL892
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill892:public Skill
    {
        public:
        enum
        { SKILL_ID = 892 };
        Skill892 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill892Stub:public SkillStub
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
        Skill892Stub ():SkillStub (892)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"Զ�̵��彵����";
            nativename          = "Զ�̵��彵����";
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
            effect              = "���з�.sgc";
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
        virtual ~ Skill892Stub ()
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
            skill->GetVictim ()->SetTime (60000);
            skill->GetVictim ()->SetRatio (0.5 * skill->GetLevel ());
            skill->GetVictim ()->SetReducesoil (1);
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