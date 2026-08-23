//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
28050  "â—Thundersnow"28051  "^8080ffâ—Thundersnow

^ffcb4aRangeã€€^96f5ff27 ^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff221^ffffff
^ffcb4aChannelã€€^ffffff1.0^ffcb4aã€€second
^ffcb4aCast ã€€^ffffff0.7^ffcb4aã€€seconds
^ffcb4aCooldownã€€^ffffff3.0^ffcb4aã€€seconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffff Scythe, Unarmed

^ffcb4aRequisite Cultivation ^ffffffAware of the Myriad
Conjure an icy thunderstorm to scour your enemy, dealing
^96f5ff80%%^ffffff of base magic damage plus ^96f5ff90%%^ffffff of weapon damage plus
^96f5ff3166^ffffff as Metal damage. Lightning burns the target over ^96f5ff18^ffffff seconds,
dealing an additional ^96f5ff1583^ffffff plus ^96f5ff20%%^ffffff base magic damage as Water
and Metal damage. Stacks up to ^96f5ff5^ffffff times.
^96f5ffWhile transformed, damage is increased by ^ffffff33%%^96f5ff
and the cooldown reduced to ^ffffff1^96f5ff second.

^ffa4a9Can cast while moving.

^f7dfa5Sage version increases the lightning burn duration by ^96f5ff3^f7dfa5 seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2805
#define __CPPGEN_GNET_SKILL2805
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2805:public Skill
    {
        public:
        enum
        { SKILL_ID = 2805 };
        Skill2805 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2805Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 950;
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
                skill->GetPlayer ()->SetDecmp (44);
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
                return 735;
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
                skill->GetPlayer ()->SetDecmp (177);
                skill->SetPlus (3166);
                skill->SetRatio (0.9);
                skill->SetGolddamage ((skill->GetPlayer ()->GetForm () == 1 ? 1.06 : 0.8) * skill->GetMagicattack ());
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
        Skill2805Stub ():SkillStub (2805)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"Õæ¡¤ËªÀ×Êõ";
            nativename          = "Õæ¡¤ËªÀ×Êõ";
            icon                = "ÏÉËªÀ×Êõ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 2;
            rank                = 20;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1012;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44879);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÔÂÏÉ_ËªÀ×Êõ_»÷ÖÐ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2588, 10));
            is_movingcast       = true;
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
        virtual ~ Skill2805Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (221);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 735;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[2][10] = { {3000,3000,3000,3000,3000,3000,3000,3000,3000,3000} , {1000,1000,1000,1000,1000,1000,1000,1000,1000,1000} };
            return aarray[skill->GetPlayer ()->GetForm ()][skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 92 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1500000 };
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
            return (float) (27 + skill->GetPlayer ()->GetPrayrangeplus ());
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (18000);
            skill->GetVictim ()->SetRatio (2);
            skill->GetVictim ()->SetAmount (1979 + 0.125 * skill->GetT0 ());
            skill->GetVictim ()->SetValue (1979 + 0.125 * skill->GetT0 ());
            skill->GetVictim ()->SetAddfrosteffect (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetMagicattack ());
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
            return (float) (36.5 + skill->GetPlayer ()->GetPrayrangeplus ());
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