//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39510  "ΨDrake's Breath Bash"39511  "^ff5c00ΨDrake's Breath Bash

^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.6　^ffcb4aseconds
^ffcb4aCast　^ffffff1.0　^ffcb4asecond
^ffcb4aCooldown　^ffffff30.0　^ffcb4aseconds
^ffcb4aRequired Weapon:　^ffffffUnarmed, Fist or Claw
^ffcb4aGlyph Bonus　^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Focus your energy into your fists, then release into all
enemies in a ^96f5ff15^ffffff-meter line.
Deals base physical damage plus
^96f5ff100%% ^ffffffof weapon damage plus ^96f5ff11504^ffffff.
Half of this damage is Fire
damage. For the next ^96f5ff15 ^ffffffseconds, all your normal attacks
deal extra fire damage equal to ^96f5ff120%% ^ffffffof your weapon damage.
This attack is guaranteed to hit.

^a6caf0Costs ^ffffff2^a6caf0 Sparks.

^00ff00Verdant Glyph Effect:@1^00ff00
^00ff00Lv1-4: If used within ^96f5ff4 ^00ff00seconds, your next ^96f5ffΨGlacial Spike ^00ff00will have no cooldown.
^00ff00Lv5-7: If used within ^96f5ff5 ^00ff00seconds, your next ^96f5ffΨGlacial Spike ^00ff00will have no cooldown.
^00ff00Lv8-9: If used within ^96f5ff6 ^00ff00seconds, your next ^96f5ffΨGlacial Spike ^00ff00will have no cooldown.
^00ff00Lv10: If used within ^96f5ff7 ^00ff00seconds, your next ^96f5ffΨGlacial Spike ^00ff00will have no cooldown.@1@2
^00ff00If used within ^96f5ff%d ^00ff00seconds, your next ^96f5ffΨGlacial Spike ^00ff00will have no cooldown.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL951
#define __CPPGEN_GNET_SKILL951
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill951:public Skill
    {
        public:
        enum
        { SKILL_ID = 951 };
        Skill951 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill951Stub:public SkillStub
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
        Skill951Stub ():SkillStub (951)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"ҩƷ.ʱЧ���ȷ���";
            nativename          = "ҩƷ.ʱЧ���ȷ���";
            icon                = "";
#endif
            max_level           = 10;
            type                = 4;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 0;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 1;
            restrict_corpse     = 0;
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 2;
            pre_skills.push_back (std::pair < ID, int >(0, 0));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill951Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 0;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 1,2,3,4,5,6,7,8,9,10 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
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
            skill->GetVictim ()->SetTime (400000 - 40000 * (skill->GetLevel () - 1));
            skill->GetVictim ()->SetRatio (0.5 * skill->GetLevel ());
            skill->GetVictim ()->SetIncmagic (1);
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