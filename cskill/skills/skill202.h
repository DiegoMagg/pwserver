//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
32020  "ΩForce of Will"32021  "^ffff00ΩForce of Will

^ffcb4aRange　^96f5ff%d^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.5　^ffcb4aseconds
^ffcb4aCast　^ffffff1.0　^ffcb4aseconds
^ffcb4aCooldown　^96f5ff%d^ffffff　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff10
^ffcb4aWeapon　^ffffffUnarmed, Magic Instruments

^ffcb4aRequired Cultivation　^ffffffMaster of Discord
Launch an orb of force at a spell-casting opponent.
Interrupts the target's channeling, freezing them
and preventing them from casting spells for ^96f5ff5^ffffff seconds.

^d618e7Demon version reduces the cooldown by ^96f5ff2^d618e7 seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL202
#define __CPPGEN_GNET_SKILL202
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill202:public Skill
    {
        public:
        enum
        { SKILL_ID = 202 };
        Skill202 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill202Stub:public SkillStub
    {
        public:
        Skill202Stub ():SkillStub (202)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"��׾";
            nativename          = "��׾";
            icon                = "";
#endif
            max_level           = 1;
            type                = 6;
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
            effect              = "ɳ��.sgc";
#endif
            range.type          = 0;
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
#endif
        }
        virtual ~ Skill202Stub ()
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
            skill->GetVictim ()->SetProbability (1.0 * 5);
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (0.3);
            skill->GetVictim ()->SetDecdodge (1);
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