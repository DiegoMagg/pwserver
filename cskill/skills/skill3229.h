//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
32290  "Î”Blackwing Arrow"32291  "^ff0000Î”Blackwing Arrow           Level %d|if&dynskilllv()>0&^ffcb4a +%d&|

^ffcb4aRangeã€€^ffffffRanged Attack
^ffcb4aManaã€€^96f5ff225^ffffff
^ffcb4aChannelã€€^ffffff0.5ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.2ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff300ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffRanged Weapons
^ffcb4aItemã€€^96f5ffUnceasing Soil^ffffff

^ffcb4aRequired Cultivationã€€^ffffffAware of Vacuity
Channel dark energy into your bow to shoot your
enemy with black lightning, dealing base physical
damage plus ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff7458^ffffff as
Physical and Metal damage. Increases your Physical Penetration
by ^96f5ff3000^ffffff for ^96f5ff20^ffffff seconds and grants you immunity to
movement-impairing effects for ^96f5ff10^ffffff seconds.

^a6caf0Costs ^ffffff1^a6caf0 unit of ammo.
^a6caf0Weapon damage increases to 500%% at Level 2.

|if&(skilllv()+dynskilllv())>Level 2&^ffffff3: Randomly activates ^ff0000Î”Thunder Abduction^ffffff,
^ff0000Î”Quickshot^ffffff, ^ff0000Î”Lightning Strike^ffffff, or ^ff0000Î”Take Aim^ffffff.

^808080Level 3: Activates Î”Thunder Abduction."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3229
#define __CPPGEN_GNET_SKILL3229
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3229:public Skill
    {
        public:
        enum
        { SKILL_ID = 3229 };
        Skill3229 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3229Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 500;
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
                return 1200;
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
                skill->GetPlayer ()->SetDecmp(225);
                skill->SetPlus(7458);
                skill->SetRatio(skill->GetLevel() == 2 ? 5 : 1 );
                skill->SetDamage(skill->GetAttack() * 0.5);
                skill->SetGolddamage(skill->GetAttack() * 0.5);
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
        Skill3229Stub ():SkillStub (3229)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"´´ÊÀ¡¤¹´»êÃð¿ÕÊ¸";
            nativename          = "´´ÊÀ¡¤¹´»êÃð¿ÕÊ¸";
            icon                = "´´ÊÀ¹´»êÃð¿ÕÊ¸.dds";
#endif
            max_level           = 2;
            type                = 1;
            apcost              = 0;
            arrowcost           = 1;
            apgain              = 0;
            attr                = 7;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1125;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (13);
            }
#ifdef _SKILL_CLIENT
            effect              = "´´ÊÀ_¹´»êÃðÌìÊ¸_ÐÂÒý¶ø²»·¢.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
            itemcost            = 49982;
            itemcostcount       = 1;
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
        virtual ~ Skill3229Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (225);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1200;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 300000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 49930,49931,49931,49931,49931,49931,49931,49931,49931,49931 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (12);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1);
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
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 10);
            skill->GetVictim ()->SetTime (100);
            skill->GetVictim ()->SetRatio (0.1);
            skill->GetVictim ()->SetAmount (skill->GetLevel());
            skill->GetVictim ()->SetValue(3233);
            skill->GetVictim ()->SetAurabless2(1);
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
            return (float) (skill->GetPlayer ()->GetRange () + 5);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 9;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
        }
#endif
#ifdef _SKILL_SERVER
        void ComboSkEndAction (Skill * skill) const
        {
            skill->GetPlayer ()->GetComboarg ()->SetValue (0, skill->GetPlayer ()->GetRand ());
            return;
        }
#endif
    };
}
#endif