//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69660  "Î¨Apex Armo"69661  "^ff5c00Î¨Apex Armo

^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff3.0ã€€^ffcb4aseconds
^ffcb4aRequired Weapon:ã€€^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Methods were developed by Advanced Wizards to unite three as one.
For weapons, gains an additional ^96f5ff120%%^ffffffWater, Fire, and Earth Defense
plus an additional ^96f5ff120%%^ffffff of physical damage. Every ^96f5ff3^ffffff seconds,
gains ^96f5ff11^ffffff Chi and increases the Critical Rate by ^96f5ff11%%^ffffff for ^96f5ff15^ffffff minutes.

^ff0000Sanguine Glyph Effect:@1
^ff0000Lv1-4:The effect to gain extra Water, Fire and Earth Defense and Physical Defense from Gear is increased to^96f5ff135%%^ff0000
^ff0000Lv5-7:The effect to gain extra Water, Fire and Earth Defense and Physical Defense from Gear is increased to^96f5ff140%%^ff0000
^ff0000Lv8-9:The effect to gain extra Water, Fire and Earth Defense and Physical Defense from Gear is increased to^96f5ff145%%^ff0000
^ff0000Lv10:The effect to gain extra Water, Fire and Earth Defense and Physical Defense from Gear is increased to^96f5ff150%%^ff0000@1@2
^ff0000The effect to gain extra Water, Fire and Earth Defense and Physical Defense from Gear is increased to^96f5ff%d%%^ff0000@2




"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL966
#define __CPPGEN_GNET_SKILL966
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill966:public Skill
    {
        public:
        enum
        { SKILL_ID = 966 };
        Skill966 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill966Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (75 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (500 + 99 * (skill->GetLevel () - 1));
                skill->SetGolddamage ((25 + (skill->GetLevel () - 1) * 29 + skill->GetT0 () * 2) * 3.7);
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
        Skill966Stub ():SkillStub (966)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"±¼À×»÷";
            nativename          = "±¼À×»÷";
            icon                = "±¼À×»÷.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 500099;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 2;
            clslimit            = 4087;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 0;
            allow_air           = 1;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 2;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "±¼À×»÷.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
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
        virtual ~ Skill966Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 75,78,81,84,87,90,93,96,99,102 };
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
            static int aarray[10] = { 7000031,7000036,7000041,7000046,7000051,7000056,7000061,7000066,7000071,7000076 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 2780,4000,5620,7780,10640,14480,19660,26600,36200,59000 };
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
            75 + (skill->GetLevel () - 1) * 3, 500 + 99 * (skill->GetLevel () - 1), (25 + (skill->GetLevel () - 1) * 29) * 3.7);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
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