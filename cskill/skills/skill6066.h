//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
60660  "Bloodthirst Arrow"60661  "|if&skilllv()>0&^00FF00&^ffffff||if&skilllv()>1&^00FFFF&||if&skilllv()>2&^d618e7&||if&skilllv()>3&^FF6600&|Bloodthirst Arrow　　　　　　　　　　　  ^ffffffLevel %d

^ffcb4aRange　^ffffff30　 ^ffcb4ameters
^ffcb4aChannel　^ffffff0.1　^ffcb4asecond
^ffcb4aCast　^ffffff0.7　^ffcb4asecond
^ffcb4aCooldown　^ffffff1.0　^ffcb4asecond

^ffffffFires an arrow at the target, dealing physical damage equal to ^96f5ff100%%^ffffff
of base Attack. Also inflicts a Bloodthirst effect


Bloodthirst Effect: In ^96f5ff15^ffffff seconds, the target takes physical damage equal to ^96f5ff40%%^ffffff
of base Attack. When the Bloodthirst Effect stacks up to ^96f5ff5^ffffff layers,
it will explode, dealing physical damage equal to
the remaining damage from the target's Bloodthirst status.

|if&skilllv()>1&LV2: ^ffffffDeals physical damage equal to ^96f5ff110%%^ffffff of base Attack. &^808080LV2�?Deals physical damage equal to 110%% of base Attack. |
|if&skilllv()>2&LV3�?^ffffffDeals physical damage equal to ^96f5ff125%%^ffffff of base Attack. &^808080LV3�?Deals physical damage equal to 125%% of base Attack.  |
|if&skilllv()>3&LV4�?^ffffffDeals physical damage equal to ^96f5ff150%%^ffffff of base Attack. &^808080LV4�?Deals physical damage equal to 150%% of base Attack.  |

^ffcb4aAt Celestial Infant LV^ffffff10/50/90/105^ffcb4a, the Skill LV^ffffff1/2/3/4^ffcb4a will be unlocked."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6066
#define __CPPGEN_GNET_SKILL6066
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6066:public Skill
    {
        public:
        enum
        { SKILL_ID = 6066 };
        Skill6066 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6066Stub:public SkillStub
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
        Skill6066Stub ():SkillStub (6066)
        {
            cls                 = 262;
#ifdef _SKILL_CLIENT
            name                = L"��Ѫ��";
            nativename          = "��Ѫ��";
            icon                = "��ͯ��Ѫ��.dds";
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
            effect              = "��������_����.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
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
        virtual ~ Skill6066Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
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
            return (float) (30);
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
            return (float) (40);
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