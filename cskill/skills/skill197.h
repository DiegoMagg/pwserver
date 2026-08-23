//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
31970  "ΩDrake's Ray"31971  "^ffff00ΩDrake's Ray

^ffcb4aRange　^96f5ff%d^ffffff+2^ffcb4a meters
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.2　^ffcb4aseconds
^ffcb4aCast　^ffffff0.5　^ffcb4aseconds
^ffcb4aCooldown　^ffffff6.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff10
^ffcb4aWeapon　^ffffffMelee weapons

^ffcb4aRequired Cultivation　^ffffffAware of the Void
Create a swift psionic blade to attack an enemy
from afar, dealing base physical damage plus ^96f5ff6747^ffffff.
Has a ^96f5ff66%%^ffffff chance to freeze the target for ^96f5ff3^ffffff seconds.
Range is increased by ^96f5fftwice^ffffff the weapon's range.

^d618e7Demon version increases range by ^96f5ff2^d618e7 meters."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL197
#define __CPPGEN_GNET_SKILL197
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill197:public Skill
    {
        public:
        enum
        { SKILL_ID = 197 };
        Skill197 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill197Stub:public SkillStub
    {
        public:
        Skill197Stub ():SkillStub (197)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"ʴ��";
            nativename          = "ʴ��";
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
            effect              = "���Ǵ�.sgc";
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
        virtual ~ Skill197Stub ()
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
            skill->GetVictim ()->SetDecattack (1);
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