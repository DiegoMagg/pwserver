//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
25880  "Thundersnow"25881  "^ffffffThundersnow (Level %d)

^ffcb4aRangeã€€^96f5ff%.1f ^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%.1f^ffffff
^ffcb4aChannelã€€^ffffff1.0^ffcb4aã€€second
^ffcb4aCast ã€€^ffffff0.7^ffcb4aã€€seconds
^ffcb4aCooldownã€€^ffffff3.0^ffcb4aã€€seconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffff Scythe, Unarmed

^ffcb4aRequisite Cultivation ^ffffffAware of Coalescence
Conjure an icy thunderstorm to scour your enemy, dealing
^96f5ff80%%^ffffff of base magic damage plus ^96f5ff%.1f%%^ffffff of weapon damage plus
^96f5ff%.1f^ffffff as Metal damage. Lightning burns the target over ^96f5ff15^ffffff seconds,
dealing an additional ^96f5ff%.1f^ffffff plus ^96f5ff20%%^ffffff base magic damage as Water
and Metal damage. Stacks up to ^96f5ff5^ffffff times.
^96f5ffWhile transformed, damage is increased by ^ffffff33%%^96f5ff
and the cooldown reduced to ^ffffff1^96f5ff second.

^ffa4a9Can cast while moving."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2588
#define __CPPGEN_GNET_SKILL2588
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2588:public Skill
    {
        public:
        enum
        { SKILL_ID = 2588 };
        Skill2588 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2588Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (0.2 * (108 + 9.6 * skill->GetLevel ()));
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
                skill->GetPlayer ()->SetDecmp (0.8 * (108 + 9.6 * skill->GetLevel ()));
                skill->SetPlus (2.9 * skill->GetLevel () * skill->GetLevel () + 122.4 * skill->GetLevel () + 1006.1);
                skill->SetRatio (0.45 + 0.045 * skill->GetLevel ());
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
        Skill2588Stub ():SkillStub (2588)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"ËªÀ×Êõ";
            nativename          = "ËªÀ×Êõ";
            icon                = "ËªÀ×Êõ.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 2;
            rank                = 5;
            eventflag           = 0;
            is_senior           = 0;
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
            pre_skills.push_back (std::pair < ID, int >(2575, 1));
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
        virtual ~ Skill2588Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 117,127,136,146,156,165,175,184,194,204 };
            return aarray[skill->GetLevel () - 1];
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
            static int aarray[10] = { 49,53,57,61,65,69,73,77,81,85 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 33370,40334,48447,57997,68750,81600,113950,186390,295240,458250 };
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
            return (float) (16.5 + 0.9 * skill->GetLevel () + skill->GetPlayer ()->GetPrayrangeplus ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            16.5 + 0.9 * skill->GetLevel (),
            108 + 9.6 * skill->GetLevel (),
            0.8 * 45 + 0.8 * 4.5 * skill->GetLevel (),
            0.8 * 2.9 * skill->GetLevel () * skill->GetLevel () + 0.8 * 122.4 * skill->GetLevel () + 0.8 * 1006.1,
            2.9 * skill->GetLevel () * skill->GetLevel () + 122.4 * skill->GetLevel () + 1006.1);
            
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
            skill->GetVictim ()->SetTime (15000);
            skill->GetVictim ()->SetRatio (2);
            skill->GetVictim ()->SetAmount (0.5 * (2.9 * skill->GetLevel () * skill->GetLevel () + 122.4 * skill->GetLevel () + 1006.1) +
            0.1 * skill->GetT0 ());
            skill->GetVictim ()->SetValue (0.5 * (2.9 * skill->GetLevel () * skill->GetLevel () + 122.4 * skill->GetLevel () + 1006.1) +
            0.1 * skill->GetT0 ());
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
            return (float) (25 + skill->GetLevel () + skill->GetPlayer ()->GetPrayrangeplus ());
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