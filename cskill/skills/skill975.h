//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39750  "Œ®Gemini Slash"39751  "^ff5c00Œ®Gemini Slash

^ffcb4aRange„ÄÄ^96f5ff28^ffffff„ÄÄ^ffcb4ameters
^ffcb4aMana„ÄÄ^96f5ff150^ffffff
^ffcb4aChannel„ÄÄ^ffffff3.3„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff1.0„ÄÄ^ffcb4asecond
^ffcb4aCooldown„ÄÄ^ffffff15.0„ÄÄ^ffcb4aseconds
^ffcb4aRequired Weapon„ÄÄ^ffffffSword
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Dragon's Might

^ffcb4aRequired Cultivation„ÄÄ^ffffffChaotic Soul
Unleash a triad of attacks against all enemies
within ^96f5ff12^ffffff meters of the target, dealing base physical
damage plus ^96f5ff500%%^ffffff of weapon damage plus ^96f5ff8250^ffffff. Has a ^d618e7^96f5ff33%%^ffffff chance
of reducing the target's movement speed by ^96f5ff60%% ^fffffffor ^96f5ff8^ffffff seconds.
Deals additional Metal damage to targets with the Œ®Spirit
Bore status, reducing their Attack and Defense Levels.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff40%%^ffcb4a of weapon damage.
^ffcb4aLv5-7: Deals an additional ^96f5ff60%% ^ffcb4aof weapon damage.
^ffcb4aLv8-9: Deals an additional ^96f5ff80%%^ffcb4a of weapon damage.
^ffcb4aLv10: Deals an additional ^96f5ff100%%^ffcb4a of weapon damage.@1@2
^ffcb4aDeals an additional ^96f5ff%d%%^ffcb4a of weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL975
#define __CPPGEN_GNET_SKILL975
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill975:public Skill
    {
        public:
        enum
        { SKILL_ID = 975 };
        Skill975 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill975Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (15 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (50 + skill->GetLevel () * 40);
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
        Skill975Stub ():SkillStub (975)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"±ØÀ÷”°";
            nativename          = "±ØÀ÷”°";
            icon                = "±ØÀ÷”°.dds";
#endif
            max_level           = 10;
            type                = 3;
            apcost              = 90040;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 3;
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
            effect              = "±ØÀ÷”°.sgc";
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
        virtual ~ Skill975Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 15,18,21,24,27,30,33,36,39,42 };
            return aarray[skill->GetLevel () - 1];
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
            static int aarray[10] = { 100001,100005,100010,100015,100020,100025,100030,100035,100040,100045 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 10,60,240,560,1040,1680,2560,3720,5260,7300 };
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
            return (float) (15);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (), 15 + (skill->GetLevel () - 1) * 3, 50 + skill->GetLevel () * 40, 100 + skill->GetLevel () * 50);
            
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
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetAmount (100 + skill->GetLevel () * 50 + skill->GetT0 () * 10);
            skill->GetVictim ()->SetMagicleak (1);
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
            return (float) (18);
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