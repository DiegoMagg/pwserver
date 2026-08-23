//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
51010  "Shield of Halo"51011  "^ffffffShield of Halo   „ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄ„ÄÄLevel %d

^ffcb4aMana„ÄÄ^96f5ff%.1f^ffffff
^ffcb4aChannel„ÄÄ^ffffffInstant
^ffcb4aCooldown„ÄÄ^ffffff90„ÄÄ^ffcb4asecond(s)
^ffcb4aWeapon„ÄÄ^ffffffSword Shield, Unarmed

^ffcb4aRequired Cultivation„ÄÄ^ffffffAware of Discord
Summons a shield wall around yourself, dealing damage once
per ^96f5ff2 ^ffffffseconds to targets within
^96f5ff10^ffffff meters equal to your base Physical Attack plus
^96f5ff%.1f^ffffff. Lasts ^96f5ff8^ffffff seconds.
This skill never lands a Critical Hit, but has twice the Critical Hit Rate to
deal ^96f5ffx1.5 ^ffffffdamage.

^FFFF00Used when inflicted with control effects.
^a6caf0Requires ^ffffff100^a6caf0  Shield Energy."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5101
#define __CPPGEN_GNET_SKILL5101
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5101:public Skill
    {
        public:
        enum
        { SKILL_ID = 5101 };
        Skill5101 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5101Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (1 * (79.2 + (7.2 * skill->GetLevel () - 7.2)));
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
        Skill5101Stub ():SkillStub (5101)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"¡È∂‹-ª∑ŒË";
            nativename          = "¡È∂‹-ª∑ŒË";
            icon                = "¡È∂‹ª∑ŒË.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 4;
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
            pre_skills.push_back (std::pair < ID, int >(5094, 1));
            feature             = 1203;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "”∂‹_–˝_◊¥Ã¨01.gfx";
            gfxhangpoint        = "HH_feijian";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5101Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 79,86,93,100,108,115,122,129,136,144 };
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
            static int aarray[10] = { 44,48,52,56,60,64,68,72,76,80 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 25992,31752,38488,46336,55440,66080,78520,99840,165200,264000 };
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
            return (float) (skill->GetPlayer ()->GetRange ());
        }
        int GetCostShieldEnergy (Skill * skill) const
        {
            static int aarray[10] = { 100,100,100,100,100,100,100,100,100,100 };
            return aarray[skill->GetLevel () - 1];
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            79.2 + (7.2 * skill->GetLevel () - 7.2),
            1429 + (181.3 * skill->GetLevel () - 181.3) + (skill->GetLevel () > 5 ? 31 * skill->GetLevel () - 31 : 0));
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 500 + 10 * skill->GetLevel ();
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (9000); // Time
            skill->GetVictim ()->SetRatio (10); // Range
            skill->GetVictim ()->SetAmount (skill->GetLevel ());
            skill->GetVictim ()->SetValue (18001);
            skill->GetVictim ()->SetShieldNew2 (1);
            
            // Define Icon / Gfx Buff
            skill->GetVictim ()->SetTime (9000); // Time
            skill->GetVictim ()->SetRatio (0); // Icon
            skill->GetVictim ()->SetAmount (189); // Buff
            skill->GetVictim ()->SetValue (1); // 2 or 1
            skill->GetVictim ()->SetInsertvstate (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetPureattack ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) ((player->GetAttackdegree () * 0.011 + 1.1) * (player->GetRand () < player->GetCrit () * 2 ? 1.5 : 1) * 1000);
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