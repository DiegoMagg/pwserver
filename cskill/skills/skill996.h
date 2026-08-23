//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39960  "Œ®Darkcloud Bolt"39961  "^ff5c00Œ®Darkcloud Bolt

^ffcb4aRange„ÄÄ^ffffff28^ffcb4a„ÄÄ„ÄÄmeters
^ffcb4aMana„ÄÄ^96f5ff115^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.3„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff0.7„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff6.0„ÄÄ ^ffcb4aseconds
^ffcb4aChi Gained„ÄÄ^ffffff10
^ffcb4aRequired Weapon:„ÄÄ^ffffffSword
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Dragon's Might

^ffcb4aRequired Cultivation„ÄÄ^ffffffChaotic Soul
Call down a sudden storm to attack all enemies within ^96f5ff12 ^ffffffmeters around the target.
Deals ^96f5ff110%% ^ffffffof base physical damage plus ^96f5ff100%%
^ffffffof weapon damage
plus ^96f5ff2700^ffffff. Has a ^96f5ff50%% ^ffffffchance to interrupt
the target's channeling.
^ff0000Does not trigger Eye of the Northern Sky. Never misses.

^ff0000Sanguine Glyph Effect:@1
^ff0000Lv1-4: Deals an additional ^96f5ff60%% ^ff0000of weapon damage.
^ff0000Lv5-7: Deals an additional ^96f5ff90%% ^ff0000of weapon damage.
^ff0000Lv8-9: Deals an additional ^96f5ff120%% ^ff0000of weapon damage.
^ff0000Lv10: Deals an additional ^96f5ff150%% ^ff0000of weapon damage.@1@2
^ff0000Deals an additional ^96f5ff%d%% ^ff0000of weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL996
#define __CPPGEN_GNET_SKILL996
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill996:public Skill
    {
        public:
        enum
        { SKILL_ID = 996 };
        Skill996 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill996Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (45 + (skill->GetLevel () - 1) * 3);
                skill->GetPlayer ()->SetDecelfap (69 + 60 * (skill->GetLevel () - 1));
                skill->SetFiredamage ((15 + (skill->GetLevel () - 1) * 17 + skill->GetT0 ()) * 3.7);
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
        Skill996Stub ():SkillStub (996)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"“ı—Ù”°";
            nativename          = "“ı—Ù”°";
            icon                = "“ı—Ù”°.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 69060;
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
            effect              = "“ı—Ù”°.sgc";
#endif
            range.type          = 3;
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
        virtual ~ Skill996Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 45,48,51,54,57,60,63,66,69,72 };
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
            static int aarray[10] = { 4016,4021,4026,4031,4036,4041,4046,4051,4056,4061 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 640,1160,1840,2780,4000,5620,7780,10640,14480,19660 };
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
            return (float) (15);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            45 + (skill->GetLevel () - 1) * 3, 69 + 60 * (skill->GetLevel () - 1), (15 + 17 * (skill->GetLevel () - 1)) * 3.7);
            
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
            skill->GetVictim ()->SetTime (5000 + skill->GetT0 () * 100);
            skill->GetVictim ()->SetValue (5);
            skill->GetVictim ()->SetSubattackdegree (1);
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