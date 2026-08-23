//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
69640  "Î¨Apex Armo"69641  "^ff5c00Î¨Apex Armo

^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.3ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff3.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Magic instrument
^ffcb4aGlyph Bonusã€€^ff5c00Tiger's Rage

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Methods were developed by Advanced Wizards to unite three as one.
For weapons, gains an additional ^96f5ff120%%^ffffffWater, Fire, and Earth Defense
plus an additional ^96f5ff120%%^ffffff of physical damage. Every ^96f5ff3^ffffff seconds,
gains ^96f5ff11^ffffff Chi and increases the Critical Rate by ^96f5ff11%%^ffffff for ^96f5ff15^ffffff minutes.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Gain extra ^96f5ff60%%^00ff00 Wood Defense from Gear.
^00ff00Lv5-7: Gain extra ^96f5ff80%%^00ff00 Wood Defense from Gear
^00ff00Lv8-9: Gain extra ^96f5ff100%%^00ff00 Wood Defense from Gear
^00ff00Lv10: Gain extra ^96f5ff120%%^00ff00 Wood Defense from Gear@1@2
^00ff00Gain extra ^96f5ff%d%%^00ff00 Wood Defense from Gear.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL964
#define __CPPGEN_GNET_SKILL964
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill964:public Skill
    {
        public:
        enum
        { SKILL_ID = 964 };
        Skill964 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill964Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (65 + (skill->GetLevel () - 1) * 4);
                skill->GetPlayer ()->SetDecelfap (10 + 80 * skill->GetLevel ());
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
        Skill964Stub ():SkillStub (964)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"Æø¸¿¾÷";
            nativename          = "Æø¸¿¾÷";
            icon                = "Æø¸¿¾÷.dds";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 10080;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 4092;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 0;
            allow_air           = 1;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "Æø¸¿¾÷.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
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
        virtual ~ Skill964Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 65,69,73,77,81,85,89,93,97,101 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 6000029,6000034,6000039,6000044,6000049,6000054,6000059,6000064,6000069,6000074 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 2360,3460,4920,6840,9400,12800,17400,23600,32000,47800 };
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
            return (float) (18);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (), 65 + (skill->GetLevel () - 1) * 4, 10 + 80 * skill->GetLevel (), 100 - skill->GetLevel () * 5);
            
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
            skill->GetVictim ()->SetTime (5000);
            skill->GetVictim ()->SetFix (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 () * 0.25);
            skill->GetVictim ()->SetTime (3000 + skill->GetT0 () * 10);
            skill->GetVictim ()->SetSealed (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 100 - skill->GetLevel () * 5);
            skill->GetVictim ()->SetTime (4000);
            skill->GetVictim ()->SetFix (1);
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
            return (float) (20);
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