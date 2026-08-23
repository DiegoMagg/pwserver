//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
12350  "â—‹Aqua Cannon"12351  "^8080ffâ—‹Aqua Cannon

^ffcb4aManaã€€^96f5ff680^ffffff
^ffcb4aChannelã€€^ffffff1.5ã€€^ffcb4a seconds
^ffcb4aCastã€€^ffffff1.5ã€€^ffcb4a seconds
^ffcb4aCooldownã€€^ffffff8.0ã€€^ffcb4a seconds
^ffcb4aChi Gainedã€€^ffffff20
^ffcb4aWeaponã€€^ffffffSoulsphere

^ffcb4aRequired Cultivationã€€^ffffffMaster of Discord
Fire a powerful blast of pressurized water at all
targets within ^96f5ff8^ffffff meters meters, dealing base magic damage
plus ^96f5ff200%%^ffffff of weapon damage plus ^96f5ff5376^ffffff as Water damage.
Has a ^96f5ff92%%^ffffff chance to slow targets by ^96f5ff80%%^ffffff for ^96f5ff5^ffffff seconds.

^d618e7Demon version has a ^96f5ff50%%^d618e7 chance to choke the target for ^96f5ff6^d618e7 seconds, dealing an additional ^96f5ff4518.8^d618e7 Water damage."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL235
#define __CPPGEN_GNET_SKILL235
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill235:public Skill
    {
        public:
        enum
        { SKILL_ID = 235 };
        Skill235 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill235Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
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
                skill->GetPlayer ()->SetDecmp (0.2 * (-5.5 + 7.5 * skill->GetLevel ()));
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
                return 600;
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
                skill->GetPlayer ()->SetDecmp (0.8 * (-5.5 + 7.5 * skill->GetLevel ()));
                skill->SetPlus (2.3 * skill->GetLevel () * skill->GetLevel () + 63.2 * skill->GetLevel () + 46.4);
                skill->SetRatio (0);
                skill->SetDamage (skill->GetAttack ());
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
        Skill235Stub ():SkillStub (235)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"Á¬Éä";
            nativename          = "Á¬Éä";
            icon                = "Á¬Éä.dds";
#endif
            max_level           = 10;
            type                = 1;
            apcost              = 0;
            arrowcost           = 1;
            apgain              = 5;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
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
            effect              = "Á¬Éä.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
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
        virtual ~ Skill235Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 2,9,17,24,32,39,47,54,62,69 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 600;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 0,3,8,13,18,23,28,33,38,43 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0,100,800,2100,4100,7000,10900,16100,23000,32000 };
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
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format,
            skill->GetLevel (),
            -5.5 + 7.5 * skill->GetLevel (), 2.3 * skill->GetLevel () * skill->GetLevel () + 63.2 * skill->GetLevel () + 46.4);
            
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
            return (float) (skill->GetPlayer ()->GetRange () + 5);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 21;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1 + 0.05 * skill->GetLevel ());
        }
#endif
    };
}
#endif