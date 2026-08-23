//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
32480  "Î”Master of Shadows"32481  "^ff0000Î”Master of Shadowsã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€Level %d|if&dynskilllv()>0&^ffcb4a +%d&|

^ffcb4aManaã€€^96f5ff225^ffffff
^ffcb4aCastã€€^ffffffInstant^ffcb4a
^ffcb4aCooldownã€€^ffffff300ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffDaggers
^ffcb4aItemã€€^96f5ffSubsiding Dirt^ffffff

^ffcb4aRequired Cultivationã€€^ffffffAware of Vacuity
Apply your mastery of the shadows to instantly
vanish from sight for ^96f5ff|if&(skilllv()+dynskilllv())<2&10&20|^ffffff seconds, increasing your

Stealth Level by ^96f5ff12^ffffff. If your Stealth ends while this effect is still active, you will re-enter
Stealth within ^96f5ff2^ffffff seconds. While out of Stealth, your
damage is increased by ^96f5ff50%%^ffffff. Removes the cooldown on
Knife Throw and reduces your Attack Speed by ^96f5ff200%%^ffffff.

|if&(skilllv()+dynskilllv())>Level 2&^ffffff3: During the shadow status, recovers ^96f5ff5^ff0000 Hit Charges per second. &^808080Leve 3: During the shadow status, recovers 5 Hit Charges per second."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3248
#define __CPPGEN_GNET_SKILL3248
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3248:public Skill
    {
        public:
        enum
        { SKILL_ID = 3248 };
        Skill3248 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3248Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp(225);
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
        Skill3248Stub ():SkillStub (3248)
        {
            cls                 = 5;
#ifdef _SKILL_CLIENT
            name                = L"´´ÊÀ¡¤ÏûÊ§";
            nativename          = "´´ÊÀ¡¤ÏûÊ§";
            icon                = "´´ÊÀÏûÊ§.dds";
#endif
            max_level           = 2;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
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
                restrict_weapons.push_back (23749);
            }
#ifdef _SKILL_CLIENT
            effect              = "´Ì¿Í_´´ÊÀ_»÷ÖÐ.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
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
#endif
        }
        virtual ~ Skill3248Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (225);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
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
            static int aarray[10] = { 49946,49947,49947,49947,49947,49947,49947,49947,49947,49947 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (16);
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
            //printf("skill3248: level: %d \n", (int)skill->GetLevel());
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime(100);
            skill->GetVictim ()->SetRatio(0.1);
            skill->GetVictim ()->SetAmount(skill->GetLevel());
            skill->GetVictim ()->SetValue(3250);
            skill->GetVictim ()->SetAurabless2(1);
            
            skill->GetVictim ()->SetProbability (1.0 * 2);
            skill->GetVictim ()->SetTime(skill->GetLevel() >= 2 ? 23000 : 11000);
            skill->GetVictim ()->SetRatio(1);
            skill->GetVictim ()->SetAmount(1);
            skill->GetVictim ()->SetValue(3249);
            skill->GetVictim ()->SetAuracurse4ASN(1);
            //skill->GetVictim ()->SetAuracurse(1);

            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (601);
            skill->GetVictim ()->SetRatio (1119);
            skill->GetVictim ()->SetAmount (1300);
            skill->GetVictim ()->SetNewValue(1301);
            skill->GetVictim ()->SetNewValue2(3799);
            skill->GetVictim ()->SetResetCooldownFeatureWith4SkillsID(1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime(4000);
            skill->GetVictim ()->SetRatio(0);
            skill->GetVictim ()->SetAmount(10);
            skill->GetVictim ()->SetValue(12);
            skill->GetVictim ()->SetInvisible2(1);
            
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetLevel() == 3 ? 100 : 0));
            skill->GetVictim ()->SetTime (23000);
            skill->GetVictim ()->SetFullChargeMercSecond (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (23000);
            skill->GetVictim ()->SetRatio (0.2);
            skill->GetVictim ()->SetEnhanceskilldamage3 (1);
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
            return (float) (35);
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
    };
}
#endif