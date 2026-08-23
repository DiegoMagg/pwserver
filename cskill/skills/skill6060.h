//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
60600  "Saint Hook"60601  "|if&skilllv()>0&^00FF00&^ffffff||if&skilllv()>1&^00FFFF&||if&skilllv()>2&^d618e7&||if&skilllv()>3&^FF6600&|Saint Hook　　　　　　　　　　　　  ^ffffffLevel %d

^ffcb4aRange　^ffffff10　 ^ffcb4ameters
^ffcb4aChannel　^ffffff0.1　^ffcb4asecond
^ffcb4aCast　^ffffff1.1　^ffcb4aseconds
^ffcb4aCooldown　^ffffff12.0　^ffcb4aseconds

^ffffffJi Ye the Lord of Beasts has two famous techniques. Saint Hook and Meteor Fall.
The first technique Saint Hook pulls enemy close, and deals
physical damage equal to ^96f5ff100%%^ffffff of base Attack.
The second technique Meteor Fall smashes the enemy with giant hammer,
knocking it back for ^96f5ff10^ffffff meters while dealing physical damage equal to ^96f5ff110%%^ffffff
of base Attack.

^ffa4a9Cast to gain the skill ^00FF00Meteor Fall^ffa4a9.^ffffff

|if&skilllv()>1&LV2: ^ffffffSaint Hook deals physical damage equal to ^96f5ff130%%^ffffff
of base Attack. ^ffffffMeteor Fall deals physical damage equal to ^96f5ff140%%^ffffff
of base Attack. &^808080LV2: Saint Hook deals physical damage equal to 130%%
of base Attack. Meteor Fall deals physical damage equal to 140%%
of base Attack. |
|if&skilllv()>2&LV3: ^ffffffSaint Hook and Meteor Fall's cooldown is
reduced to ^96f5ff8^ffffff seconds. Meteor Fall can stun the enemy
for ^96f5ff2^ffffff seconds. &^808080LV3: Saint Hook and Meteor Fall's cooldown is
reduced to 8 seconds. Meteor Fall can stun the enemy
for 2 seconds. |
|if&skilllv()>3&LV4: ^ffffffSaint Hook's cast range is increased to ^96f5ff20^ffffff meters.^ffffff
Meteor Fall's knock back distance is increased to ^96f5ff20^ffffff meters. &^808080LV4: Saint Hook's cast range is increased to 20 meters.
Meteor Fall's knock back distance is increased to 20 meters. |

^ffcb4aAt Celestial Infant LV^ffffff10/50/90/105^ffcb4a, the Skill LV^ffffff1/2/3/4^ffcb4a will be unlocked."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6060
#define __CPPGEN_GNET_SKILL6060
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6060:public Skill
    {
        public:
        enum
        { SKILL_ID = 6060 };
        Skill6060 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6060Stub:public SkillStub
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
        Skill6060Stub ():SkillStub (6060)
        {
            cls                 = 262;
#ifdef _SKILL_CLIENT
            name                = L"̫����";
            nativename          = "̫����";
            icon                = "��̫ͯ����.dds";
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
            effect              = "";
#endif
            range.type          = 0;
            doenchant           = true;
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
        virtual ~ Skill6060Stub ()
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
            static int aarray[10] = { 12000,12000,8000,8000,8000,8000,8000,8000,8000,8000 };
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
            static float aarray[10] = { 10.00,10.00,10.00,20.00,20.00,20.00,20.00,20.00,20.00,20.00 };
            return aarray[skill->GetLevel () - 1];
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
            return (float) (5);
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