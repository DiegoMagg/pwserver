//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39770  "Î¨Gemini Slash"39771  "^ff5c00Î¨Gemini Slash

^ffcb4aRangeã€€^96f5ff28^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff150^ffffff
^ffcb4aChannelã€€^ffffff3.3ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff15.0ã€€^ffcb4aseconds
^ffcb4aRequired Weaponã€€^ffffffSword
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Unleash a triad of attacks against all enemies
within ^96f5ff12^ffffff meters of the target, dealing base physical
damage plus ^96f5ff500%%^ffffff of weapon damage plus ^96f5ff8250^ffffff. Has a ^d618e7^96f5ff33%%^ffffff chance
of reducing the target's movement speed by ^96f5ff60%% ^fffffffor ^96f5ff8^ffffff seconds.
Deals additional Metal damage to targets with the Î¨Spirit
Bore status, reducing their Attack and Defense Levels.

^00ffffEthereal Glyph Effect:@1
^00ffffLv1-4: Channeling time reduced to ^ffffff2.8^00ffff seconds.
^00ffffLv5-7: Channeling time reduced to ^ffffff2.5^00ffff seconds.
^00ffffLv8-9: Channeling time reduced to ^ffffff2.2^00ffff seconds.
^00ffffLv10: Channeling time reduced to ^ffffff1.9^00ffff seconds.@1@2
^00ffffChanneling time reduced to ^ffffff%.1f^00ffff seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL977
#define __CPPGEN_GNET_SKILL977
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill977:public Skill
    {
        public:
        enum
        { SKILL_ID = 977 };
        Skill977 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill977Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (80 - skill->GetT1 () * 0.25);
                skill->GetPlayer ()->SetDecelfap (500);
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
        Skill977Stub ():SkillStub (977)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¶¨ÕæÑÔ";
            nativename          = "Éñ¶¨ÕæÑÔ";
            icon                = "Éñ¶¨ÕæÑÔ.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 500000;
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
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "Éñ¶¨ÕæÑÔ.sgc";
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
        virtual ~ Skill977Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (80);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 20000,20000,20000,20000,20000,20000,20000,20000,20000,20000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 520,525,530,535,540,545,550,555,560,565 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1040,1680,2560,3720,5260,7300,10000,13620,18480,25000 };
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
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 5 + skill->GetLevel () * 0.5);
            
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
            skill->GetVictim ()->SetTime (5000 + skill->GetLevel () * 500);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetImmuneweak (1);
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
            return (float) (25);
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