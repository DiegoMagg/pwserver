//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69780  "Î¦Guardian's Claw"69781  "^ffff00Î¦Guardian's Claw

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

^f7dfa5Lowers maximum HP by ^96f5ff20%%^f7dfa5."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL978
#define __CPPGEN_GNET_SKILL978
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill978:public Skill
    {
        public:
        enum
        { SKILL_ID = 978 };
        Skill978 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill978Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (75 - skill->GetT0 () * 0.1);
                skill->GetPlayer ()->SetDecelfap (520);
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
        Skill978Stub ():SkillStub (978)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"¿ñ±©";
            nativename          = "¿ñ±©";
            icon                = "¿ñ±©.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 520000;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 6;
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
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "¿ñ±©.sgc";
#endif
            range.type          = 5;
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
        virtual ~ Skill978Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (75);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 8000,8000,8000,8000,8000,8000,8000,8000,8000,8000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 625,630,635,640,645,650,655,660,665,670 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1680,2560,3720,5260,7300,10000,13620,18480,25000,34000 };
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
            19.5 + 0.9 * skill->GetLevel (), skill->GetLevel (), 50 + 5 * skill->GetLevel (), 10 + skill->GetLevel ());
            
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
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetValue (10 + skill->GetLevel () * 1);
            skill->GetVictim ()->SetFury (1);
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetAmount (52);
            skill->GetVictim ()->SetValue (1);
            skill->GetVictim ()->SetInsertvstate (1);
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