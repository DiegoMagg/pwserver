//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
19160  "Mighty Presence"19161  "^ffffffMighty Presence

^ffcb4aChannel„ÄÄ^ffffff10.0„ÄÄ^ffcb4aseconds

^ffcb4aRequired Cultivation„ÄÄ^ffffffSpiritual Initiate

Increases your Max HP and MP by ^96f5ff20^ffffff-^96f5ff200^ffffff while out of combat.
Restores ^96f5ff15^ffffff-^96f5ff150^ffffff HP and MP every 3 seconds. Lasts for ^96f5ff2^ffffff hours.

^a6caf0The skill effect power is decided by the amount of Marks of Might you own.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1916
#define __CPPGEN_GNET_SKILL1916
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1916:public Skill
    {
        public:
        enum
        { SKILL_ID = 1916 };
        Skill1916 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1916Stub:public SkillStub
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
        Skill1916Stub ():SkillStub (1916)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"’ÊŒ‰¡È”¶";
            nativename          = "’ÊŒ‰¡È”¶";
            icon                = "–˛Œ‰øÃ”°.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 7003;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (13);
            }
            {
                restrict_weapons.push_back (291);
            }
            {
                restrict_weapons.push_back (23749);
            }
            {
                restrict_weapons.push_back (25333);
            }
            {
                restrict_weapons.push_back (44878);
            }
            {
                restrict_weapons.push_back (44879);
            }
            {
                restrict_weapons.push_back (59830);
            }
            {
                restrict_weapons.push_back (59831);
            }
            {
                restrict_weapons.push_back (69843);
            }
#ifdef _SKILL_CLIENT
            effect              = "–Ó∆¯.sgc";
#endif
            range.type          = 5;
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
#endif
        }
        virtual ~ Skill1916Stub ()
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
            return 10000;
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
            skill->GetVictim ()->SetTime (skill->GetT1 () * 1000);
            skill->GetVictim ()->SetAmount ((5 + skill->GetT0 () * 0.1 / ((skill->GetT0 () + 1000) * 0.1) * 46) * skill->GetT1 ());
            skill->GetVictim ()->SetValue ((5 + skill->GetT0 () * 0.1 / ((skill->GetT0 () + 1000) * 0.1) * 46) * skill->GetT1 ());
            skill->GetVictim ()->SetHpmpgennotincombat (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (skill->GetT1 () * 1000);
            skill->GetVictim ()->SetAmount (20 + skill->GetT0 () * 0.1 / ((skill->GetT0 () + 1000) * 0.1) * 183);
            skill->GetVictim ()->SetValue (20 + skill->GetT0 () * 0.1 / ((skill->GetT0 () + 1000) * 0.1) * 183);
            skill->GetVictim ()->SetInchpmp (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetDynskillcounter ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (7200);
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