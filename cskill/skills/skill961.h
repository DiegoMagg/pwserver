//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69610  "Î©Frost Guard"69611  "^ffff00Î©Frost Guard

^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff3.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aWeaponã€€^ffffffUnarmed, Magic instrument

^ffcb4aRequired Cultivationã€€^ffffffMaster of Discord
Place an icy sheen on all squad members' weapons within ^96f5ff15^ffffff
meters, causing their normal attacks to deal ^96f5ff40%% ^ffffffof your
base magic damage as extra Water damage.
Reduces attackers' Critical Rate by ^96f5ff5%%^ffffff.
Increases the skill damage against monsters by ^96f5ff20%%^ffffff. Lasts for ^96f5ff15^ffffff minutes.

^d618e7Increases damage by^96f5ff50%%^d618e7ã€?*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL961
#define __CPPGEN_GNET_SKILL961
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill961:public Skill
    {
        public:
        enum
        { SKILL_ID = 961 };
        Skill961 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill961Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (55 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (44 + 50 * (skill->GetLevel () - 1));
                skill->SetGolddamage ((29 + (skill->GetLevel () - 1) * 20 + skill->GetT1 ()) * 6.7);
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
        Skill961Stub ():SkillStub (961)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"ÒýÀ×¾÷";
            nativename          = "ÒýÀ×¾÷";
            icon                = "ÒýÀ×¾÷.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 44050;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
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
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "ÒýÀ×¾÷.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
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
        virtual ~ Skill961Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 55,58,61,64,67,70,73,76,79,82 };
            return aarray[skill->GetLevel () - 1];
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
            static int aarray[10] = { 5000022,5000027,5000032,5000037,5000042,5000047,5000052,5000057,5000062,5000067 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1280,2000,2980,4300,6000,8280,11320,15380,20800,28400 };
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
            return (float) (25);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            55 + (skill->GetLevel () - 1) * 3, 44 + 50 * (skill->GetLevel () - 1), (29 + (skill->GetLevel () - 1) * 20) * 3.1);
            
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
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT1 () * 1);
            skill->GetVictim ()->SetBreak (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfstr ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfagi ());
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
            return (float) (30);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 10;
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