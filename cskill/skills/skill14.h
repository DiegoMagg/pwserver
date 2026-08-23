//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
4140  "‚óèMage Bane"4141  "^8080ff‚óèMage Bane

^ffcb4aRange„ÄÄ^ffffffMelee
^ffcb4aMana„ÄÄ^96f5ff%d^ffffff
^ffcb4aChannel„ÄÄ^ffffff0.4„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff0.7„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff15.0„ÄÄ^ffcb4aseconds
^ffcb4aWeapon„ÄÄ^ffffffBlade or Sword

^ffcb4aRequired Cultivation„ÄÄ^ffffffAware of the Myriad
Blast the enemy with a ray of brilliance, dealing
base physical damage plus ^96f5ff50%%^ffffff of weapon damage
plus ^96f5ff4863^ffffff. Decreases the enemy's channeling speed
over the next ^96f5ff8^ffffff seconds by ^96f5ff50%%^ffffff. Never misses.

^a6caf0Costs ^ffffff1^a6caf0 Spark.

^f7dfa5Sage version has a ^96f5ff25%%^f7dfa5 chance to consume no Sparks.
^f7dfa5The target's channeling speed is increased by ^96f5ff100%%^f7dfa5."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL14
#define __CPPGEN_GNET_SKILL14
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill14:public Skill
    {
        public:
        enum
        { SKILL_ID = 14 };
        Skill14 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill14Stub:public SkillStub
    {
        public:
        Skill14Stub ():SkillStub (14)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"£™";
            nativename          = "£™";
            icon                = " …—™.dds";
#endif
            max_level           = 3;
            type                = 3;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 143;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 1;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (9);
            }
#ifdef _SKILL_CLIENT
            effect              = " …—™.sgc";
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
#ifdef _SKILL_SERVER
#endif
        }
        virtual ~ Skill14Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 15,20,25,25,25,25,25,25,25,25 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 3000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 200002;
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
            return (float) (433);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel ());
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 333;
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
            return (float) (5);
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