//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37120  "ΨMountain's Seize"37121  "^ff5c00ΨMountain's Seize

^ffcb4aRange　^96f5ff%d^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff4.0　^ffcb4aseconds
^ffcb4aCast　^ffffff1.0　^ffcb4aseconds
^ffcb4aCooldown　^ffffff30.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffWand, Unarmed
^ffcb4aGlyph Bonus　^ff5c00Martial Prowess

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Focus your Chi to summon a massive boulder from a nearby
mountain and slam it into your target and all enemies within ^96f5ff12^ffffff meters.
Deals base magic damage plus ^96f5ff500%%^ffffff of weapon damage plus ^96f5ff12149^ffffff
as Earth damage. Has a ^96f5ff95%%^ffffff chance to stun the target for ^96f5ff6^ffffff seconds.
Restores ^96f5ff40^ffffff Chi after use.

^a6caf0Costs ^ffffff2^a6caf0 Sparks

^ff0000Sanguine Glyph Effect@1
^ff0000Lv1-4: In ^96f5ff10^ff0000 seconds, reduces the channeling cost of your next ^96f5ffΨBlade Tempest^ff0000 to ^96f5ff160
^ff0000Lv5-7: In ^96f5ff10^ff0000 seconds, reduces the channeling cost of your next ^96f5ffΨBlade Tempest^ff0000 to^96f5ff140
^ff0000Lv8-9: In ^96f5ff10^ff0000 seconds, reduces the channeling cost of your next ^96f5ffΨBlade Tempest^ff0000 to^96f5ff120
^ff0000 Lv10 : In ^96f5ff10^ff0000 seconds, reduces the channeling cost of your next ^96f5ffΨBlade Tempest^ff0000 to ^96f5ff100@1@2
^ff0000In ^96f5ff10^ff0000 seconds, reduces the channeling cost of your next ^96f5ffΨBlade Tempest^ff0000 to ^96f5ff%d@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL712
#define __CPPGEN_GNET_SKILL712
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill712:public Skill
    {
        public:
        enum
        { SKILL_ID = 712 };
        Skill712 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill712Stub:public SkillStub
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
        Skill712Stub ():SkillStub (712)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"��Ʒ����-�޵�ҩ��";
            nativename          = "��Ʒ����-�޵�ҩ��";
            icon                = "";
#endif
            max_level           = 5;
            type                = 4;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
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
#endif
        }
        virtual ~ Skill712Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 0;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 1,2,3,4,5,5,5,5,5,5 };
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
            skill->GetVictim ()->SetTime (2000 + 2000 * skill->GetLevel ());
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetInvincible2 (1);
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