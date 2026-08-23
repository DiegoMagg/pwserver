//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
22260  "Î£Storm Dance"22261  "^ffff00Î£Storm Dance

^ffcb4aRangeã€€^96f5ff27^ffffffã€€^ffcb4aMeters
^ffcb4aManaã€€^96f5ff900^ffffff
^ffcb4aChannel ã€€^ffffff2.0ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff10.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aWeaponã€€^ffffffUnarmed, Magic instrument

^ffcb4aRequired Cultivationã€€^ffffffCelestial Sage
Blast your enemy with the power of a raging
hurricane, dealing base magic damage plus ^96f5ff250%%^ffffff
of weapon damage plus ^96f5ff8776^ffffff as Wood damage. Lowers
the target's maximum Health by ^96f5ff8%%^ffffff for ^96f5ff8^ffffff seconds. Has
a chance to reduce the cooldown of your next Absorb
Soul within ^96f5ff6^ffffff seconds by ^96f5ff50%%^ffffff. The chance to reduce
the cooldown is up to ^96f5ff50%%^ffffff, based on your Soulforce."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2226
#define __CPPGEN_GNET_SKILL2226
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2226:public Skill
    {
        public:
        enum
        { SKILL_ID = 2226 };
        Skill2226 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2226Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 2000;
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
                skill->GetPlayer ()->SetDecmp (0.2 * 900);
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 5;
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
                return 1000;
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
                skill->GetPlayer ()->SetDecmp (0.8 * 900);
                skill->SetPlus (8776);
                skill->SetRatio (2.5);
                skill->SetWooddamage (skill->GetMagicattack ());
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
        Skill2226Stub ():SkillStub (2226)
        {
            cls                 = 9;
#ifdef _SKILL_CLIENT
            name                = L"ÖÁ¡¤ÔÙÎè·çÔÆ";
            nativename          = "ÖÁ¡¤ÔÙÎè·çÔÆ";
            icon                = "ÖÁ¡¤ÔÙÎè·çÔÆ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 3;
            rank                = 22;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1425;
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
            effect              = "÷ÈÁé_ÔÙÎè·çÔÆ.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(1729, 1));
            pre_skills.push_back (std::pair < ID, int >(1727, 1));
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
        virtual ~ Skill2226Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (900);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 10000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
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
            static int aarray[10] = { 42114,42114,42114,42114,42114,42114,42114,42114,42114,42114 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (3 + 0.4 * skill->GetLevel ());
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (4 + 0.3 * skill->GetLevel ());
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (27);
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
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetRatio (0.08);
            skill->GetVictim ()->SetDechp (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 ());
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (1622);
            skill->GetVictim ()->SetModifyspecskillpray (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) ((player->GetSoulpower () - player->GetLevel () * player->GetLevel () - 50 * player->GetLevel ()) * 0.00125);
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
            return 8;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1);
        }
#endif
    };
}
#endif