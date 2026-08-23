//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39980  "Î¨Heartseeker"39981  "^ff5c00Î¨Heartseeker

^ffcb4aRangeã€€^96f5ff28^ffffffã€€^ffcb4a meters
^ffcb4aManaã€€^96f5ff95^ffffff
^ffcb4aChannelã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.3ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff15.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aRequired Weapon:ã€€^ffffffSword
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Launch a projection of your weapon at a distant
foe, dealing base physical damage plus ^96f5ff200%%^ffffff of
weapon damage plus ^96f5ff5280^ffffff as Metal damage. Has a ^96f5ff100%%^ffffff
chance to immobilize the target for ^96f5ff10^ffffff seconds.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL998
#define __CPPGEN_GNET_SKILL998
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill998:public Skill
    {
        public:
        enum
        { SKILL_ID = 998 };
        Skill998 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill998Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (70);
                skill->GetPlayer ()->SetDecelfap (146 + 77 * (skill->GetLevel () - 1));
                skill->SetFiredamage ((24 + (skill->GetLevel () - 1) * 23 + skill->GetT1 ()) * 3.7);
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
        Skill998Stub ():SkillStub (998)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"Àë»ðÉñ¾÷";
            nativename          = "Àë»ðÉñ¾÷";
            icon                = "Àë»ðÉñ¾÷.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 146077;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 5;
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
            effect              = "Àë»ðÉñ¾÷.sgc";
#endif
            range.type          = 2;
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
        virtual ~ Skill998Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (70);
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
            static int aarray[10] = { 6028,6033,6038,6043,6048,6053,6058,6063,6068,6073 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 2180,3220,4600,6400,8820,12040,16360,22200,30200,43000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (10 + 0.2 * skill->GetLevel ());
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
            return (float) (15);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            10 + 0.2 * skill->GetLevel (), 146 + 77 * (skill->GetLevel () - 1), (24 + 23 * (skill->GetLevel () - 1)) * 3.7);
            
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
            skill->GetVictim ()->SetTime (25000);
            skill->GetVictim ()->SetRatio (0.1 + skill->GetT1 () * 0.001);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetBurningfeet (1);
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
            return (float) (40);
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