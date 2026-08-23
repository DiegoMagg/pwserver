//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
36380  "ΨRed Tide"36381  "^ff5c00ΨRed Tide

^ffcb4aRange　^96f5ff28.5^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff680^ffffff
^ffcb4aChannel　^ffffff1.5　^ffcb4aseconds
^ffcb4aCast　^ffffff1.0　^ffcb4asecond
^ffcb4aCooldown　^ffffff30.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffSoulsphere
^ffcb4aGlyph Bonus　^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Conjure a wave of blood to wash over all enemies within ^96f5ff8 ^ffffffmeters.
Deals base magic damage plus ^96f5ff230%% ^ffffffof weapon damage plus ^96f5ff9538 ^ffffffas
Water damage. Has an ^96f5ff80%% ^ffffffchance to cause enemies to bleed for
^96f5ff9 ^ffffffseconds, dealing damage equal to ^96f5ff1.2 ^fffffftimes your Soulforce.

^a6caf0Costs ^ffffff1 ^a6caf0Spark.

^a6caf0Restores ^ffffff50 ^a6caf0Chi after use.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Guaranteed to cause enemies to bleed, dealing damage equal to ^96f5ff1.1 ^00ff00times of your Soulforce.
^00ff00Lv5-7: Guaranteed to cause enemies to bleed, dealing damage equal to ^96f5ff1.2 ^00ff00times of your Soulforce.
^00ff00Lv8-9: Guaranteed to cause enemies to bleed, dealing damage equal to ^96f5ff1.3 ^00ff00times of your Soulforce.
^00ff00Lv10: Guaranteed to cause enemies to bleed, dealing damage equal to ^96f5ff1.4 ^00ff00times of your Soulforce.@1@2
Guaranteed to cause enemies to bleed, dealing damage equal to ^96f5ff%.1f ^00ff00times of your Soulforce.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL638
#define __CPPGEN_GNET_SKILL638
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill638:public Skill
    {
        public:
        enum
        { SKILL_ID = 638 };
        Skill638 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill638Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1500;
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
                skill->GetPlayer ()->SetDecmp (29);
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
                return 800;
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
                skill->GetPlayer ()->SetDecmp (116);
                skill->SetPlus (0);
                skill->SetRatio (0);
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
        Skill638Stub ():SkillStub (638)
        {
            cls                 = 3;
#ifdef _SKILL_CLIENT
            name                = L"�桤�׹�";
            nativename          = "�桤�׹�";
            icon                = "�׹�1.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 3;
            rank                = 20;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1603;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (292);
            }
#ifdef _SKILL_CLIENT
            effect              = "1�׹�.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(301, 10));
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
        virtual ~ Skill638Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (145);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 800;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
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
            return (float) (27);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 27, 145, 6427);
            
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
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetAmount (skill->GetT0 () *
            (1 +
            0.01 * (skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () >
            0 ? skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () : 0)));
            skill->GetVictim ()->SetBurning (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (1.2 * player->GetWeaponmagicdamage () + 7713);
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttackdegree ());
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
            return (float) (36);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 26;
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