//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
700  "Highland Cleave"701  "^ffffffHighland Cleave  (Level %d)

^ffcb4aRange„ÄÄ^ffffffMelee
^ffcb4aMana„ÄÄ^96f5ff%.1f^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.4„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff2.0„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff6.0„ÄÄ^ffcb4aseconds
^ffcb4aChi Gained„ÄÄ^ffffff12
^ffcb4aWeapon„ÄÄ^ffffffAxe, Poleaxe, Hammer or Polehammer

^ffcb4aRequired Cultivation„ÄÄ^ffffffAware of Discord
Wield the force of a mountain against all
enemies within ^96f5ff10^ffffff meters, dealing base
physical damage plus ^96f5ff%d%%^ffffff of weapon damage plus ^96f5ff%.1f^ffffff."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL70
#define __CPPGEN_GNET_SKILL70
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill70:public Skill
    {
        public:
        enum
        { SKILL_ID = 70 };
        Skill70 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill70Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 400;
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
                skill->GetPlayer ()->SetDecmp (0.2 * (73.5 + 8.4 * skill->GetLevel ()));
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
                skill->GetPlayer ()->SetDecmp (0.8 * (73.5 + 8.4 * skill->GetLevel ()));
                skill->SetPlus (1.5 * skill->GetLevel () * skill->GetLevel () + 114.1 * skill->GetLevel () + 827.2);
                skill->SetRatio (0.5 + 0.05 * skill->GetLevel ());
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
        Skill70Stub ():SkillStub (70)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"∂œ‘¿…®";
            nativename          = "∂œ‘¿…®";
            icon                = "∞‘Õı∂œ‘¿.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 12;
            attr                = 1;
            rank                = 4;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1118;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (9);
            }
#ifdef _SKILL_CLIENT
            effect              = "∞‘Õı∂œ‘¿.sgc";
#endif
            range.type          = 2;
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(68, 1));
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
        virtual ~ Skill70Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 81,90,98,107,115,123,132,140,149,157 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 2000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 6000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 39,43,47,51,55,59,63,67,71,75 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 24600,32000,41400,53200,68100,87000,111000,142000,181000,266000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (10);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (20 + 3 * skill->GetLevel ()));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            73.5 + 8.4 * skill->GetLevel (),
            50 + 5 * skill->GetLevel (), 1.5 * skill->GetLevel () * skill->GetLevel () + 114.1 * skill->GetLevel () + 827.2);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
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
            return (float) (20);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 5;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.2 + 0.05 * skill->GetLevel ());
        }
#endif
    };
}
#endif