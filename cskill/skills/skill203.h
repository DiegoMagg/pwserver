//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
32030  "Î¦Black Ice Dragon Strike"32031  "^ffff00Î¦Black Ice Dragon Strike

^ffcb4aRangeã€€^96f5ff%d^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff4.0ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.6ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Magic Instrument

^ffcb4aRequired Cultivationã€€^ffffffMaster of Harmony
Summon an icy dragon that smashes into all enemies
within ^96f5ff12 ^ffffffmeters of the target. Deals base magic
damage plus ^96f5ff750%% ^ffffffof weapon damage plus
^96f5ff16367 ^ffffffas
Water damage, and freezes the target, increasing the damage
that monsters take by ^96f5ff30%% ^fffffffor ^96f5ff%d ^ffffff
seconds. This effect can coexist with Heaven's Flame.
This effect will cancel Extreme Poison.

^a6caf0Costs ^ffffff2 ^a6caf0Sparks.

^f7dfa5Sage version has a ^96f5ff50%% ^f7dfa5chance to empower you for
^96f5ff10 ^f7dfa5seconds, increasing magic Critical Rate by ^96f5ff30%%^f7dfa5."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL203
#define __CPPGEN_GNET_SKILL203
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill203:public Skill
    {
        public:
        enum
        { SKILL_ID = 203 };
        Skill203 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill203Stub:public SkillStub
    {
        public:
        Skill203Stub ():SkillStub (203)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"¼áÈÍ";
            nativename          = "¼áÈÍ";
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
        virtual ~ Skill203Stub ()
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
            skill->GetVictim ()->SetTime (20000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetIncdefence (1);
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