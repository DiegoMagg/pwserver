//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
5300  "â—Bestial Rage"5301  "^8080ffâ—Bestial Rage

^ffcb4aManaã€€^ffffff50
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffAxe, Poleaxe, Hammer or Polehammer, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of the Myriad
Fly into a berserker rage, generating ^96f5ff6^ffffff Chi
whenever you are hit with an attack.
Lasts ^96f5ff20^ffffff seconds. If your Health is below
^96f5ff50%%^ffffff, a magic shield will appear and absorb
up to ^96f5ff4000^ffffff magic damage. Lasts ^96f5ff10^ffffff seconds.

^f7dfa5Sage version extends the duration to ^96f5ff20^f7dfa5 seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL530
#define __CPPGEN_GNET_SKILL530
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill530:public Skill
    {
        public:
        enum
        { SKILL_ID = 530 };
        Skill530 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill530Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (50);
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
        Skill530Stub ():SkillStub (530)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"Õæ¡¤ÊÞÍõÖ®Å­";
            nativename          = "Õæ¡¤ÊÞÍõÖ®Å­";
            icon                = "Ìì±ÀµØÁÑ1.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 20;
            eventflag           = 1;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 1526;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "¹ÖÎïÖÎÁÆÊõ.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(188, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill530Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (50);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
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
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
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
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetTime (20000);
            skill->GetVictim ()->SetValue (6);
            skill->GetVictim ()->SetApgen (1);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer ()->GetHp () > skill->GetPlayer ()->GetMaxhp () * 0.5 ? 0 : 100);
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetAmount (4000);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetAbsorbmagicdamage (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttack ());
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
            return (float) (8.5);
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