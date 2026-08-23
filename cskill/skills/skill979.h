//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69790  "Î©Guardian's Claw"69791  "^ffff00Î©Guardian's Claw

^ffcb4aRangeã€€^ffffffRanged
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff15.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff12
^ffcb4aWeaponã€€^ffffffRanged Weapons

^ffcb4aRequired Cultivationã€€^ffffffMaster of Harmony
Fire a cluster shot that blasts all enemies within ^96f5ff6^ffffff
meters of the target with high-velocity shrapnel,
dealing base physical damage plus ^96f5ff3668^ffffff and impaling
them for ^96f5ff30^ffffff seconds, reducing their maximum Health by ^96f5ff%d%%^ffffff. Restores ^96f5ff%d%%^ffffff HP of damage delt after casting.

^a6caf0Costs ^ffffff1^a6caf0 unit of ammo.

^d618e7Increases  in ^96f5ff15^d618e7 seconds ^96f5ff10%%^d618e7 of Critical Rate."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL979
#define __CPPGEN_GNET_SKILL979
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill979:public Skill
    {
        public:
        enum
        { SKILL_ID = 979 };
        Skill979 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill979Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (25);
                skill->GetPlayer ()->SetDecelfap (100 + skill->GetLevel () * 6);
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
        Skill979Stub ():SkillStub (979)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"µçÉÁ";
            nativename          = "µçÉÁ";
            icon                = "ÉÁ¹âÊõ.dds";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 106006;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 4;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 0;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "ÉÁ¹âÊõ.sgc";
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
        virtual ~ Skill979Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (25);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 101,105,110,115,120,125,130,135,140,145 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 10,60,240,560,1040,1680,2560,3720,5260,7300 };
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
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (20);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 100 + skill->GetLevel () * 6, 5 + skill->GetLevel ());
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 10;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetRatio (0.05 + skill->GetLevel () * 0.01 + skill->GetT0 () * 0.00125 + skill->GetT1 () * 0.00125);
            skill->GetVictim ()->SetSlowattackpray (1);
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
            return (float) (24);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 20;
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