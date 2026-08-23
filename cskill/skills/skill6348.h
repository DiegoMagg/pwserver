//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
63480  "Î” Thunder Abduction"63481  "^ff0000Î”Thunder Abduction

^ffcb4aRangeã€€^ffffffRanged
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.6ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff3.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff30
^ffcb4aWeaponã€€^ffffffRanged Weapon

^ffcb4aRequired Cultivationã€€^ffffffAware of Vacuity
A bow leads Lightning to your foe, dealing double base physical damage
plus ^96f5ff400%%^ffffff of weapon damage plus ^96f5ff17506^ffffff.
The damage type is converted into Metal and Physical damage.
Guaranteed to hit and stun the target for ^96f5ff3^ffffff seconds.
In ^96f5ff10^ffffff seconds Increases your normal Attack Speed by ^96f5ff60%%^ffffff.

^a6caf0Costs ^ffffff1^a6caf0 unit of ammo.

^ffa4a9Combo Skill: Default Hotkey ^59EE4C E
^ffa4a9Required Skill:^59EE4C Î” Blackwing Arrow"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6348
#define __CPPGEN_GNET_SKILL6348
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6348:public Skill
    {
        public:
        enum
        { SKILL_ID = 6348 };
        Skill6348 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6348Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 120;
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
                skill->GetPlayer ()->SetDecmp (27);
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
                return 480;
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
                skill->GetPlayer ()->SetDecmp (120);
                skill->SetPlus (17506);
                skill->SetRatio (4);
                skill->SetGolddamage (skill->GetAttack ());
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
                return 1;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill6348Stub ():SkillStub (6348)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"´´ÊÀ¡¤ÒýÀ×¶áÆÇÊ¸";
            nativename          = "´´ÊÀ¡¤ÒýÀ×¶áÆÇÊ¸";
            icon                = "´´ÊÀ¡¤ÒýÀ×¶áÆÇÊ¸.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 1;
            apgain              = 30;
            attr                = 7;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1302;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (13);
            }
#ifdef _SKILL_CLIENT
            effect              = "´´ÊÀ_¹´»êÃðÌìÊ¸_ÐÂÁ¬Éä.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
            combosk_preskill    = 3229;
            combosk_interval    = 20000;
            is_inherent         = true;
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
        virtual ~ Skill6348Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (135);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 600;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 3000,3000,3000,3000,3000,3000,3000,3000,3000,3000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 89 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 9664,9664,9664,9664,9664,9664,9664,9664,9664,9664 };
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
        return (float) (skill->GetPlayer ()->GetRange ());
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
    bool StateAttack (Skill * skill) const 
    { 
        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetTime (4100);
        skill->GetVictim ()->SetDizzy (1);
        return true; 
    } 
#endif 
#ifdef _SKILL_SERVER 
    bool BlessMe (Skill * skill) const 
    { 
        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetTime (11000);
        skill->GetVictim ()->SetRatio (0.6);
        skill->GetVictim ()->SetFastattack (1);
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
        return (float) (skill->GetPlayer ()->GetRange () + 10);
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