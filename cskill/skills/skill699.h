//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
36990  "ΨBlade Tempest"36991  "^ff5c00ΨBlade Tempest

^ffcb4aRange　^96f5ff%d^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff4.0　^ffcb4aseconds
^ffcb4aCast　^ffffff1.0　^ffcb4aseconds
^ffcb4aCooldown　^ffffff30.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffWand, Unarmed
^ffcb4aGlyph Bonus　^ff5c00Martial Prowess

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Focus your Chi to create dozens of flaming blades
that rain down upon the target and all enemies within^96f5ff12^ffffff meters,
dealing base magic damage plus^96f5ff200%%^ffffff of weapon damage
plus ^96f5ff6200^ffffff as both physical both Physical and Fire damage.
Restores ^96f5ff40^ffffff Chi after use. Has a ^96f5ff50%%^ffffff chance to break the skill or casting of your enemies.


^a6caf0Costs ^ffffff2^a6caf0 Sparks

^00ffffEthereal Glyph Effect@1
^00ffffLv1-4: In ^ffffff10 ^00ffffseconds, reduces the Chi cost of your next ^ffffffΨBlack Ice Dragon Strike^00ffff to ^ffffff160
^00ffffLv5-7: In ^ffffff10 ^00ffffseconds, reduces the Chi cost of your next ^ffffffΨBlack Ice Dragon Strike^00ffff to ^ffffff140
^00ffffLv8-9 In ^ffffff10 ^00ffffseconds, reduces the Chi cost of your next ^ffffffΨBlack Ice Dragon Strike ^00ffffto ^ffffff120
^00ffff Lv10 : In ^ffffff10 ^00ffffseconds, reduces the Chi cost of your next ^ffffffΨBlack Ice Dragon Strike ^00ffffto ^ffffff100@1@2
^00ffffIn ^ffffff10 ^00ffffseconds, reduces the Chi cost of your next ^ffffffΨBlack Ice Dragon Strike ^00ffffto ^ffffff%d@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL699
#define __CPPGEN_GNET_SKILL699
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill699:public Skill
    {
        public:
        enum
        { SKILL_ID = 699 };
        Skill699 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill699Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 350;
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
                return 0;
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
                return 400;
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
        Skill699Stub ():SkillStub (699)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"2����սBOSS˲���޵�";
            nativename          = "2����սBOSS˲���޵�";
            icon                = "";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "��.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
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
        virtual ~ Skill699Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 400;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 0;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (4000 + 2000 * skill->GetLevel ());
            skill->GetVictim ()->SetShowicon (0);
            skill->GetVictim ()->SetInvincible (1);
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