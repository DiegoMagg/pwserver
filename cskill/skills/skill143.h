//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
41430  "ΨDistant Cloud"41431  "^ff5c00ΨDistant Cloud

^ffcb4aRange　^96f5ff12^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff174^ffffff
^ffcb4aChannel　^ffffff0.1　^ffcb4aseconds
^ffcb4aCast　^ffffff1.8　^ffcb4aseconds
^ffcb4aCooldown　^ffffff60.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffSaber
^ffcb4aGlyph Bonus　^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Launch the target into the air with a powerful
blow, dealing base physical damage plus ^96f5ff200%%^ffffff of
weapon damage plus ^96f5ff8933^ffffff. Increases your Critical
Rate by ^96f5ff40%%^ffffff for ^96f5ff6^ffffff seconds. Resets the cooldown
on Relentless Drift, and removes the cooldown
from your next Relentless Drift within ^96f5ff6^ffffff seconds.

^a6caf0Costs ^ffffff50 ^a6caf0Chi.

^ffcb4aGolden Glyph Effect@1
^ffcb4aLv1-4: Deals an additional ^96f5ff40%%^ffcb4a of weapon damage.
^ffcb4aLv5-7: Deals an additional ^96f5ff60%%^ffcb4a of weapon damage.
^ffcb4aLv8-9: Deals an additional ^96f5ff80%%^ffcb4a of weapon damage.
^ffcb4aLv10: Deals an additional ^96f5ff100%%^ffcb4a of weapon damage.@1@2
Deals an additional ^96f5ff%d%%^ffcb4a of weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL143
#define __CPPGEN_GNET_SKILL143
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill143:public Skill
    {
        public:
        enum
        { SKILL_ID = 143 };
        Skill143 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill143Stub:public SkillStub
    {
        public:
        Skill143Stub ():SkillStub (143)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"����";
            nativename          = "����";
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
            effect              = "";
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
        virtual ~ Skill143Stub ()
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
            skill->GetVictim ()->SetTime (3500);
            skill->GetVictim ()->SetFix (1);
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