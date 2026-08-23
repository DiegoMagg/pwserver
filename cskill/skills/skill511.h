//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
45110  "ΨFossilized Curse"45111  "^ff5c00ΨFossilized Curse

^ffcb4aRequires Fox Form
^ffcb4aRange　^96f5ff%d^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff1　^ffcb4asecond
^ffcb4aCast　^ffffff1.3　^ffcb4aseconds
^ffcb4aCooldown　^ffffff2　^ffcb4aminutes
^ffcb4aWeapon　^ffffffUnarmed, Magic Instrument

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Assault your enemy with the essence of death itself. Deals
base magic damage plus ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff150%%^ffffff of
your maximum Health  plus ^96f5ff20%%^ffffff of base magic damage as Wood
damage. Removes all status effects from the target that
increase Magic Defenses, and reduces Attack Rate by
^96f5ff100%%^ffffff and Accuracy by ^96f5ff300%%^ffffff for ^96f5ff15^ffffff seconds. Never misses.

^a6caf0Costs ^ffffff1 ^a6caf0Spark.

^00ffffEthereal Glyph Effect:@1
^00ffffNo longer reduces Attack Rate and Accuracy.
^00ffffNo longer removes Magic Defense effects.
^00ffffLv1-4: Reduces the target's physical attack by ^ffffff200%%^00ffff for ^ffffff10^00ffff seconds.
^00ffffLv5-7: Reduces the target's physical attack by ^ffffff250%%^00ffff for ^ffffff10^00ffff seconds.
^00ffffLv8-9: Reduces the target's physical attack by ^ffffff300%%^00ffff for ^ffffff10^00ffff seconds.
^00ffffLv10: Reduces the target's physical attack by ^ffffff350%%^00ffff for ^ffffff10^00ffff seconds.@1@2
^00ffffNo longer reduces Attack Rate and Accuracy.
^00ffffNo longer removes Magic Defense effects.
Reduces the target's physical attack by ^ffffff%d%%^00ffff for ^ffffff10^00ffff seconds.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL511
#define __CPPGEN_GNET_SKILL511
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill511:public Skill
    {
        public:
        enum
        { SKILL_ID = 511 };
        Skill511 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill511Stub:public SkillStub
    {
        public:
        Skill511Stub ():SkillStub (511)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"��Ұ�Իظ�";
            nativename          = "��Ұ�Իظ�";
            icon                = "Ұ�Իظ�2.dds";
#endif
            max_level           = 1;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 30;
            eventflag           = 1;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1510;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (9);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(109, 10));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
#endif
        }
        virtual ~ Skill511Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (19);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1500;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 4000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 89 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
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
            return (float) (1 - 0.0111111 * (20 + 2.5 * skill->GetLevel ()));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange () + 3 + 0.2 * skill->GetLevel ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 25);
            
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
            skill->GetPlayer ()->SetInchpgen (70);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetEffectdistance (Skill * skill) const
        {
            return (float) (25);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 0;
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