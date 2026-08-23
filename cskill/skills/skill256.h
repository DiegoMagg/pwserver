//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
22560  "ΦPyroshell"22561  "^ffff00ΦPyroshell

^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel 　^ffffff0.2　^ffcb4aseconds
^ffcb4aCast　^ffffff0.3　^ffcb4aseconds
^ffcb4aCooldown　^ffffff3.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffUnarmed, Magic instrument

^ffcb4aRequired Cultivation　^ffffffAware of the Myriad
Form a fireproof barrier around yourself,
increasing Fire Resistance by ^96f5ff120%%^ffffff, Critical
Rate by ^96f5ff15%%^ffffff, and Health regeneration by ^96f5ff12^ffffff
per second. Lasts for ^96f5ff15^ffffff minutes.

^a6caf0Only one elemental shell can be activated at a time.

^f7dfa5Sage version increases Fire Resistance to ^96f5ff150%%^f7dfa5."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL256
#define __CPPGEN_GNET_SKILL256
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill256:public Skill
    {
        public:
        enum
        { SKILL_ID = 256 };
        Skill256 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill256Stub:public SkillStub
    {
        public:
        Skill256Stub ():SkillStub (256)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"����ͨ";
            nativename          = "����ͨ";
            icon                = "����ͨ.dds";
#endif
            max_level           = 10;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 3;
            eventflag           = 2;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1324;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (13);
            }
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
        virtual ~ Skill256Stub ()
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
            return (float) (skill->GetPlayer ()->GetRange ());
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
            skill->GetPlayer ()->SetIncbow (0.06 * skill->GetLevel ());
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetEffectdistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange () + 5);
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