//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37800  "Î¨Life Hunter"37801  "^ff5c00Î¨Life Hunter

^ffcb4aRangeã€€^ffffff4.5^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff90^ffffff
^ffcb4aCastã€€^ffffff1.4ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff1.4ã€€^ffcb4asecond
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffDagger
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Imbue your daggers with dark magic and thrust them
twice into your enemy, dealing base physical damage
plus ^96f5ff200%%^ffffff of weapon damage plus ^96f5ff11,755^ffffff,
reducing target's physical defense by ^96f5ff60%% ^ffffff
for ^96f5ff10 ^ffffffseconds.
The effect will not take effect on
monsters with greater physical defense reduction effect.


^d618e7Consumes all Hit Charges to increase effectiveness.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: Deals an additional ^96f5ff240%% ^ffeaabof weapon damage.
Each Hit Charge increases damage by ^96f5ff40%% ^ffeaabof weapon damage.
^ffeaabLv5-7: Deals an additional ^96f5ff360%% ^ffeaabof weapon damage.
Each Hit Charge increases damage by ^96f5ff60%% ^ffeaabof weapon damage.
^ffeaabLv8-9: Deals an additional ^96f5ff480%% ^ffeaabof weapon damage.
Each Hit Charge increases damage by ^96f5ff80%% ^ffeaabof weapon damage.
^ffeaabLv10: Deals an additional ^96f5ff600%% ^ffeaabof weapon damage.
Each Hit Charge increases damage by ^96f5ff100%% ^ffeaabof weapon damage.@1@2
Deals an additional ^96f5ff%d%% ^ffeaabof weapon damage.
Each Hit Charge increases damage by ^96f5ff%d%% ^ffeaabof weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL780
#define __CPPGEN_GNET_SKILL780
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill780:public Skill
    {
        public:
        enum
        { SKILL_ID = 780 };
        Skill780 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill780Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 800;
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
                skill->GetPlayer ()->SetPray (1);
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
#ifdef _SKILL_SERVER
        class State2:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1700;
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
#ifdef _SKILL_SERVER
        class State3:public SkillStub::State
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
        Skill780Stub ():SkillStub (780)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"1¼¶³ÇÕ½BOSSÁ¬ÐøÊ©¶¾";
            nativename          = "1¼¶³ÇÕ½BOSSÁ¬ÐøÊ©¶¾";
            icon                = "";
#endif
            max_level           = 5;
            type                = 3;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
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
            effect              = "¹ÖÎïÅçÒÏËá.sgc";
#endif
            range.type          = 2;
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
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill780Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1700;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 0;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 1,2,3,4,5,5,5,5,5,5 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (45);
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
            return (float) (35);
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
            skill->GetVictim ()->SetTime (60000);
            skill->GetVictim ()->SetAmount (skill->GetMagicdamage ());
            skill->GetVictim ()->SetToxic (1);
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
            return (float) (25);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (3);
        }
#endif
    };
}
#endif