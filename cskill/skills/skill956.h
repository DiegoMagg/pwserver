//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39560  "ΨGravel Blade"39561  "^ff5c00ΨGravel Blade

^ffcb4aRange　^96f5ff28^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff75^ffffff
^ffcb4aChannel　^ffffff0.3　^ffcb4aseconds
^ffcb4aCast　^ffffff0.7　^ffcb4aseconds
^ffcb4aCooldown　^ffffff3.0 ^ffcb4aseconds
^ffcb4aChi Gained　^ffffff20
^ffcb4aRequired Weapon:　^ffffffSword
^ffcb4aGlyph Bonus　^ff5c00Martial Prowess

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Deliver a massive blow to your enemy, dealing ^96f5ff110%%^ffffff of
base physical damage plus ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff1650^ffffff.

Has a ^96f5ff60%%^ffffff chance of applying the ΨSpirit Bore status,
causing your ^96f5ffΨGemini Slash^ffffff to deal an additional
^96f5ff7950 ^ffffffMetal damage and reduce the target's Attack
and Defense Levels by ^96f5ff12^ffffff for ^96f5ff3^ffffff minutes.

Has a ^96f5ff25%% ^ffffffchance of applying the ΨBloodletting
status, causing your ^96f5ffΨStalagstrike^ffffff to
deal an additional ^96f5ff3750 ^ffffffdamage and
stun the target for ^96f5ff5^ffffff seconds.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL956
#define __CPPGEN_GNET_SKILL956
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill956:public Skill
    {
        public:
        enum
        { SKILL_ID = 956 };
        Skill956 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill956Stub:public SkillStub
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
        Skill956Stub ():SkillStub (956)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"ҩƷ.ʱЧ���ȼ���";
            nativename          = "ҩƷ.ʱЧ���ȼ���";
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
        virtual ~ Skill956Stub ()
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
            skill->GetVictim ()->SetTime (200000 - 20000 * (skill->GetLevel () - 1));
            skill->GetVictim ()->SetRatio (0.03 * skill->GetLevel ());
            skill->GetVictim ()->SetFastpray (1);
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