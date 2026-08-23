//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
12210  "○Disturb Soul"12211  "^8080ff○Disturb Soul

^ffcb4aRange 　^96f5ff28.5^ffffff　^ffcb4a meters
^ffcb4aMana　^96f5ff285^ffffff
^ffcb4aChannel　^ffffff1.6　^ffcb4a seconds
^ffcb4aCast　^ffffff1.2　^ffcb4a seconds
^ffcb4aCooldown　^ffffff30.0　^ffcb4a seconds
^ffcb4aWeapon　^ffffffSoulsphere

^ffcb4aRequired Cultivation　^ffffffMaster of Discord
Unbalance the target's soul with psionic waves,
increasing their channeling time by ^96f5ff80%%^ffffff for ^96f5ff12^ffffff seconds.

^a6caf0Costs ^ffffff30^a6caf0 Chi.

^d618e7Demon version increases channeling time by ^96f5ff100%%^d618e7."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL221
#define __CPPGEN_GNET_SKILL221
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill221:public Skill
    {
        public:
        enum
        { SKILL_ID = 221 };
        Skill221 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill221Stub:public SkillStub
    {
        public:
        Skill221Stub ():SkillStub (221)
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
            effect              = "���辭.sgc";
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
#endif
        }
        virtual ~ Skill221Stub ()
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
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetIncdefence (1);
            skill->GetVictim ()->SetProbability (1.0 * -1);
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetValue (1);
            skill->GetVictim ()->SetIncresist2 (1);
            skill->GetVictim ()->SetProbability (1.0 * -1);
            skill->GetVictim ()->SetRatio (0.05);
            skill->GetVictim ()->SetScaleinchp (1);
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