//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39530  "ΨDrake's Breath Bash"39531  "^ff5c00ΨDrake's Breath Bash

^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.6　^ffcb4aseconds
^ffcb4aCast　^ffffff1.0　^ffcb4asecond
^ffcb4aCooldown　^ffffff30.0　^ffcb4aseconds
^ffcb4aRequired Weapon:　^ffffffUnarmed, Fist or Claw
^ffcb4aGlyph Bonus　^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Focus your energy into your fists, then release into all
enemies in a ^96f5ff15^ffffff-meter line.
Deals base physical damage plus
^96f5ff100%% ^ffffffof weapon damage plus ^96f5ff11504^ffffff.
Half of this damage is Fire
damage. For the next ^96f5ff15 ^ffffffseconds, all your normal attacks
deal extra fire damage equal to ^96f5ff120%% ^ffffffof your weapon damage.
This attack is guaranteed to hit.

^a6caf0Costs ^ffffff2^a6caf0 Sparks.

^ff0000Sanguine Glyph Effect:@1 ^ff0000
^ff0000Lv1-4: Normal attacks deal an additional ^96f5ff35%% ^ff0000fire damage.
^ff0000Lv5-7: Normal attacks deal an additional ^96f5ff50%% ^ff0000fire damage.
^ff0000Lv8-9: Normal attacks deal an additional ^96f5ff65%% ^ff0000fire damage.
^ff0000Lv10: Normal attacks deal an additional ^96f5ff80%% ^ff0000fire damage.@1@2
^ff0000Normal attacks deal an additional ^96f5ff%d%% ^ff0000fire damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL53
#define __CPPGEN_GNET_SKILL53
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill53:public Skill
    {
        public:
        enum
        { SKILL_ID = 53 };
        Skill53 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill53Stub:public SkillStub
    {
        public:
        Skill53Stub ():SkillStub (53)
        {
            cls                 = 1;
#ifdef _SKILL_CLIENT
            name                = L"��ͨ";
            nativename          = "��ͨ";
            icon                = "��ͨ.dds";
#endif
            max_level           = 10;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 3;
            eventflag           = 1;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1225;
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
        virtual ~ Skill53Stub ()
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
            static int aarray[10] = { 11800,17300,24600,34200,47000,64000,87000,118000,160000,217000 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 2 * skill->GetLevel ());
            
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
            skill->GetPlayer ()->SetIncfire (0.02 * skill->GetLevel ());
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