//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
45100  "ΨFossilized Curse"45101  "^ff5c00ΨFossilized Curse

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

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Also reduces the target's physical attack by ^96f5ff100%%^00ff00 for ^96f5ff10^00ff00 seconds.
^00ff00Lv5-7: Also reduces the target's physical attack by ^96f5ff150%%^00ff00 for ^96f5ff10^00ff00 seconds.
^00ff00Lv8-9: Also reduces the target's physical attack by ^96f5ff200%%^00ff00 for ^96f5ff10^00ff00 seconds.
^00ff00Lv10: Also reduces the target's physical attack by ^96f5ff250%%^00ff00 for ^96f5ff10^00ff00 seconds.@1@2
^00ff00Also reduces the target's physical attack by ^96f5ff%d%%^00ff00 for ^96f5ff10^00ff00 seconds.^96f5ff^00ff00@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL510
#define __CPPGEN_GNET_SKILL510
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill510:public Skill
    {
        public:
        enum
        { SKILL_ID = 510 };
        Skill510 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill510Stub:public SkillStub
    {
        public:
        Skill510Stub ():SkillStub (510)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"�桤Ұ�Իظ�";
            nativename          = "�桤Ұ�Իظ�";
            icon                = "Ұ�Իظ�1.dds";
#endif
            max_level           = 1;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 20;
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
        virtual ~ Skill510Stub ()
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
            skill->GetPlayer ()->SetInchpgen (50);
            skill->GetPlayer ()->SetIncmpgen (20);
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