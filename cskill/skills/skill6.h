//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
60  "Blade and Sword Mastery"61  "^ffffffBlade and Sword Mastery  (Level %d)

^ffcb4aPassive Skill

^ffcb4aRequired Cultivation　^ffffffAware of Harmony
^ffffffIncreases all blade and sword weapon damage by ^96f5ff%d%%^ffffff."540  "Stream Strike"541  "^ffffffStream Strike  (Level %d)

^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%.1f^ffffff
^ffcb4aChannel　^ffffff0.2　^ffcb4aseconds
^ffcb4aCast　^ffffff1.0　^ffcb4aseconds
^ffcb4aCooldown　^ffffff3.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffMelee weapons

^ffcb4aRequired Cultivation　^ffffffSpiritual Adept
Violently strike your foe, dealing base
physical damage plus ^96f5ff%.1f^ffffff. Increases threat.

^a6caf0Costs ^ffffff30^a6caf0 Chi."550  "Fan of Flames"551  "^ffffffFan of Flames  (Level %d)

^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%.1f^ffffff
^ffcb4aChannel　^ffffff0.3　^ffcb4aseconds
^ffcb4aCast　^ffffff0.7　^ffcb4aseconds
^ffcb4aCooldown　^ffffff8.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff10
^ffcb4aWeapon　^ffffffMelee weapons

^ffcb4aRequired Cultivation　^ffffffAware of Harmony
Bash opponents with the force of an enraged dragon,
dealing base physical damage plus ^96f5ff%.1f^ffffff.
Affects enemies in a frontal spray."560  "Drake Sweep"561  "^ffffffDrake Sweep  (Level %d)

^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%.1f^ffffff
^ffcb4aChannel　^ffffff0.3　^ffcb4aseconds
^ffcb4aCast　^ffffff0.9　^ffcb4aseconds
^ffcb4aCooldown　^ffffff8.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff12
^ffcb4aWeapon　^ffffffMelee weapons

^ffcb4aRequired Cultivation　^ffffffAware of Discord
Use all of your strength for a sideswiping
cleave against all enemies within ^96f5ff8^ffffff meters.
Deals base physical damage plus ^96f5ff%.1f^ffffff."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6
#define __CPPGEN_GNET_SKILL6
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6:public Skill
    {
        public:
        enum
        { SKILL_ID = 6 };
        Skill6 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6Stub:public SkillStub
    {
        public:
        Skill6Stub ():SkillStub (6)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"������ͨ";
            nativename          = "������ͨ";
            icon                = "������ͨ.dds";
#endif
            max_level           = 10;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 3;
            eventflag           = 2;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1134;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "";
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
        }
        virtual ~ Skill6Stub ()
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
            static int aarray[10] = { 29,34,39,44,49,54,59,64,69,74 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 11800,17300,24600,34200,47000,64000,87000,118000,160000,239000 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 6 * skill->GetLevel ());
            
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
        {
            skill->GetPlayer ()->SetIncsword (0.06 * skill->GetLevel ());
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