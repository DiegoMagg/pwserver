//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
51090  "Œ£Shattering Scream"51091  "^ffff00Œ£Shattering Scream

^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aCast„ÄÄ^ffffffInstant
^ffcb4aCooldown„ÄÄ^ffffff60„ÄÄ^ffcb4asecond(s)
^ffcb4aWeapon„ÄÄ^ffffffSword Shield, Unarmed

^ffcb4aRequired Cultivation„ÄÄ^ffffffAware of Vacuity
The Edgerunner enters Shattered Dream status.
Upon using the next ^96f5ff30^ffffff Normal Attacks and Skills,
you will teleport to the target's location. The teleport distance is
at most ^96f5ff35^ffffff meters. Lasts ^96f5ff%d^ffffff seconds.

^a6caf0Costs ^ffffff150^a6caf0 Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5109
#define __CPPGEN_GNET_SKILL5109
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5109:public Skill
    {
        public:
        enum
        { SKILL_ID = 5109 };
        Skill5109 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5109Stub:public SkillStub
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
                return 1;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill5109Stub ():SkillStub (5109)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"÷¡°§∑Ê–•√Œª™ÀÈ";
            nativename          = "÷¡°§∑Ê–•√Œª™ÀÈ";
            icon                = "œ…∑Ê–•√Œª™ÀÈ.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 150;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
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
            pre_skills.push_back (std::pair < ID, int >(5108, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5109Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (180);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 4000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 4000000,4000000,4000000,4000000,4000000,4000000,4000000,4000000,4000000,4000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 60734,60734,60734,60734,60734,60734,60734,60734,60734,60734 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (16);
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
            return (float) (5);
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
        bool StateAttack(Skill *skill) const
        {
            skill->GetVictim()->SetProbability(1.0 * 100);
            skill->GetVictim()->SetTime(21000); //tempo
            skill->GetVictim()->SetAmount(35); //distancia
            skill->GetVictim()->SetValue(30); // Quantidade
            skill->GetVictim()->SetShattereddream(1);
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
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
        }
#endif
    };
}
#endif