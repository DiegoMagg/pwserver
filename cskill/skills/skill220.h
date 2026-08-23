//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
12200  "●Disturb Soul"12201  "^8080ff●Disturb Soul

^ffcb4aRange 　^96f5ff28.5^ffffff　^ffcb4a meters
^ffcb4aMana　^96f5ff285^ffffff
^ffcb4aChannel　^ffffff1.6　^ffcb4a seconds
^ffcb4aCast　^ffffff1.2　^ffcb4a seconds
^ffcb4aCooldown　^ffffff30.0　^ffcb4a seconds
^ffcb4aWeapon　^ffffffSoulsphere

^ffcb4aRequired Cultivation　^ffffffMaster of Harmony
Unbalance the target's soul with psionic waves,
increasing their channeling time by ^96f5ff80%%^ffffff for ^96f5ff15^ffffff seconds.

^a6caf0Costs ^ffffff30^a6caf0 Chi.

^f7dfa5Sage version increases the duration by ^96f5ff3^f7dfa5 seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL220
#define __CPPGEN_GNET_SKILL220
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill220:public Skill
    {
        public:
        enum
        { SKILL_ID = 220 };
        Skill220 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill220Stub:public SkillStub
    {
        public:
        Skill220Stub ():SkillStub (220)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"��ˮһս";
            nativename          = "��ˮһս";
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
            effect              = "����޼�.sgc";
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
        virtual ~ Skill220Stub ()
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
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetSharpblade (1);
            skill->GetVictim ()->SetProbability (1.0 * -1);
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetDecdefence (1);
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