//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
60320  "Skull Breaker"60321  "|if&skilllv()>0&^00FF00&^ffffff||if&skilllv()>1&^00FFFF&||if&skilllv()>2&^d618e7&||if&skilllv()>3&^FF6600&|Skull Breakerã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€  ^ffffffLevel %d

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4asecond
^ffcb4aCastã€€^ffffff0.8ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff3.0ã€€^ffcb4aseconds

^ffffffZhuo Li, the Lord of Ghosts has three famouse techniques: Skill Breaker, Bone Crusher, and Heart Seeker.
The first technique Skull Breaker deals physical damage equal to ^96f5ff90%%^ffffff
of base Attack. The second technique Bone Crusher deals physical damage equal to
^96f5ff%d%%^ffffff of base Attack. The third technique Heart Seeker
deals physical damage equal to ^96f5ff%d%%^ffffff of
base Attack.

^f7dfa5Passive: When there are less than ^96f5ff2^f7dfa5 players within
^96f5ff15^f7dfa5 meters around Nanxin, the damage is increased by ^96f5ff40%%^f7dfa5.

^ffa4a9Cast to gain the skill ^00FF00Bone Crusher^ffa4a9.

^ffffff|if&skilllv()>1&LV2: ^ffffffSkull Breaker deals physical damage equal to ^96f5ff120%%^ffffff
base Attack. Passive damage is increased to ^96f5ff50%%^ffffff. &^808080LV2: Deals physical damage equal to 120%%
base Attack. Passive Damage is increased to 50%%. |
|if&skilllv()>2&LV3: ^ffffffThe third technique Heart Seeker is guaranteed a Crit Hit. &^808080LV3: The third technique Heart Seeker is guaranteed a Crit Hit.  |
|if&skilllv()>3&LV4: ^ffffffNanxin's passive skill trigger range is reduced to
^96f5ff10^ffffff meters. &^808080LV4: Nanxin's passive skill trigger range is reduced to
10 meters. |

^ffcb4aAt Celestial Infant LV^ffffff10/50/90/105^ffcb4a, the Skill LV^ffffff1/2/3/4^ffcb4a will be unlocked."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6032
#define __CPPGEN_GNET_SKILL6032
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6032:public Skill
    {
        public:
        enum
        { SKILL_ID = 6032 };
        Skill6032 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6032Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 778;
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
                return 1;
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
                return 778;
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
                return 1;
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
                return 1;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill6032Stub ():SkillStub (6032)
        {
            cls                 = 262;
#ifdef _SKILL_CLIENT
            name                = L"ËéÂ­";
            nativename          = "ËéÂ­";
            icon                = "ÏÉÍ¯ËéÂ­.dds";
#endif
            max_level           = 4;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
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
            allow_forms         = 8;
            {
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (13);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (291);
            }
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (23749);
            }
            {
                restrict_weapons.push_back (25333);
            }
            {
                restrict_weapons.push_back (44878);
            }
            {
                restrict_weapons.push_back (44879);
            }
            {
                restrict_weapons.push_back (59830);
            }
            {
                restrict_weapons.push_back (59831);
            }
            {
                restrict_weapons.push_back (69843);
            }
#ifdef _SKILL_CLIENT
            effect              = "´Ì¿Íº¢×Ó_µ¥Ìå¹¥»÷_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            is_movingcast       = true;
            combosk_nobreak     = 1;
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
        virtual ~ Skill6032Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 778;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 3000,3000,3000,3000,3000,3000,3000,3000,3000,3000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
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
            return (float) (5);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, const wchar_t * buffer, int length, const wchar_t * format) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
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
            return (float) (15);
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