//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50940  "Shield of Rejection"50941  "^ffffffShield of Rejection   „ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄLevel %d

^ffcb4aRange„ÄÄ^ffffff20^ffcb4a„ÄÄ„ÄÄmeters
^ffcb4aMana„ÄÄ^96f5ff%.1f^ffffff
^ffcb4aChannel„ÄÄ^ffffffInstant
^ffcb4aCooldown„ÄÄ^ffffff90„ÄÄ^ffcb4aseconds
^ffcb4aWeapon„ÄÄ^ffffffUnarmed, Sword Shield

^ffcb4aRequired Cultivation„ÄÄ^ffffffAware of Principle
Tosses your energy-fused shield at the enemy, dealing a Physical Damage equal to
your base Physical Attack plus ^96f5ff%.1f%%^ffffff gear Attack and ^96f5ff%.1f^ffffff.
Also stuns the target for ^96f5ff3^ffffff seconds.

^FFFF00Used when inflicted with control effects.
^a6caf0Requires ^ffffff100^a6caf0 Shield Energy."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5094
#define __CPPGEN_GNET_SKILL5094
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5094:public Skill
    {
        public:
        enum
        { SKILL_ID = 5094 };
        Skill5094 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5094Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (21.6 + (9 * skill->GetLevel ()));
                skill->SetPlus ((610.4 + (176 * skill->GetLevel () - 176) + (14 * skill->GetLevel () - 14)) + (skill->GetLevel () > 8 ? 37.76 * skill->GetLevel () : 0));
                skill->SetRatio (0.418 + (0.038 * skill->GetLevel () - 0.038));
                skill->SetDamage (skill->GetAttack ());
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
        Skill5094Stub ():SkillStub (5094)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"“Ì∂‹-Œ¨—Ô";
            nativename          = "“Ì∂‹-Œ¨—Ô";
            icon                = "“Ì∂‹Œ¨—Ô.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
            rank                = 2;
            eventflag           = 0;
            is_senior           = 0;
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
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (59830);
            }
#ifdef _SKILL_CLIENT
            effect              = "”∑Ê_”∂‹√Õ_∂‹≈∆∑…01.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5092, 1));
            feature             = 1202;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5094Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 39,48,57,66,75,84,93,102,111,120 };
            return aarray[skill->GetLevel () - 1];
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
            static int aarray[10] = { 22,27,32,37,42,47,52,57,62,67 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 6272,9300,13112,17845,23400,30222,38488,48447,60320,75260 };
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
            return (float) (20);
        }
        int GetCostShieldEnergy (Skill * skill) const
        {
            static int aarray[10] = { 100,100,100,100,100,100,100,100,100,100 };
            return aarray[skill->GetLevel () - 1];
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 30.6 + (9 * skill->GetLevel ()));
            
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
            skill->GetVictim ()->SetTime (3200);
            skill->GetVictim ()->SetDizzy (1);
            
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
            return (float) (20);
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