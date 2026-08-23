//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
54020  "Î£Magical Ice Shield"54021  "^ffff00Î£Magical Ice Shieldã€€ã€€ã€€ã€€ã€€ã€€

^ffcb4aManaã€€^96f5ffAll Current Mana
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff120.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffWand, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of Vacuity

Spend all your Mana to conjure a magical ice shield.  //ok
You become Frozen but Invincible for ^96f5ff5^ffffffseconds and restore full Health. //ok
You also gain a shield with a durability equal to the Mana consumed for ^96f5ff10^ffffff seconds. //ok
If you are hit while the shield is active, when it expires or when it is broken, all enemy
targets within^96f5ff12^ffffff meters will be frozen for ^96f5ff5^ffffff seconds. //ok
While frozen, these targets will take ^96f5ff130%%^ffffff damage. //ok



The Frozen effect works similar to Stunned, but doesn't conflict with Stunned.
The Frozen effect inflicted by this skill doesn't conflict with the effect of Occult Ice."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5402
#define __CPPGEN_GNET_SKILL5402
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5402:public Skill
    {
        public:
        enum
        { SKILL_ID = 5402 };
        Skill5402 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5402Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (skill->GetPlayer ()->GetMp ());
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
        Skill5402Stub ():SkillStub (5402)
        {
            cls                 = 1;
#ifdef _SKILL_CLIENT
            name                = L"ÖÁ¡¤ÕæÔª±ù¶Ü";
            nativename          = "ÖÁ¡¤ÕæÔª±ù¶Ü";
            icon                = "ÖÁÕæÔª±ù¶Ü.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 2902;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÎåÐÐÖ®»¤.sgc";
#endif
            range.type          = 5;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(904, 1));
            pre_skills.push_back (std::pair < ID, int >(1806, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5402Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (1);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 120000,120000,120000,120000,120000,120000,120000,120000,120000,120000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 5000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000 };
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
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (0);
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
            return 100;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            /*skill->GetVictim ()->SetProbability (1.0 * 100); // Congela por 5 Segundos
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetIncNewShieldMage (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100); //Cura full hp
            skill->GetVictim ()->SetValue (skill->GetT0());
            skill->GetVictim ()->SetHeal (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100); // Escudo
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetRatio (skill->GetT1());
            skill->GetVictim ()->SetIncNewShieldMage2 (1);*/
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (11000);
            skill->GetVictim ()->SetValue (skill->GetPlayer ()->GetMaxmp ());
            skill->GetVictim ()->SetAmount(1);
            skill->GetVictim ()->SetShieldDamageReduce (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (6500);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetValue (skill->GetPlayer ()->GetMaxhp ());
            skill->GetVictim ()->SetInvincible5 (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (6500);
            skill->GetVictim ()->SetDizzy (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (6500);
            skill->GetVictim ()->SetValue (skill->GetPlayer ()->GetMaxhp ());
            skill->GetVictim ()->SetHpgen (1);
            
            /*skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (12);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (5403);
            skill->GetVictim ()->SetAuracurse (1);*/
            
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetMaxhp ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetMaxmp ());
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
            return (float) (0);
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