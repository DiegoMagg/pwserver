//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
36800  "ΨHailstorm"36801  "^ff5c00ΨHailstorm

^ffcb4aRange　^96f5ff%d^ffffff　^ffcb4aMeters
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff1.8　^ffcb4aseconds
^ffcb4aCast　^ffffff1.0　^ffcb4aseconds
^ffcb4aCooldown　^ffffff12.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff5
^ffcb4aRequired Weapon:　^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonus　^ff5c00Dragon's Might

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Conjure a hailstorm to rain down on all enemies near the target.
Deals base magic damage plus ^96f5ff4740 ^ffffffas Water damage.
Has a ^96f5ff50%% ^ffffffchance to freeze targets for ^96f5ff4 ^ffffffseconds.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Channeling time reduced to ^96f5ff1.4 ^00ff00seconds.
^00ff00Lv5-7: Channeling time reduced to ^96f5ff1.2 ^00ff00seconds.
^00ff00Lv8-9: Channeling time reduced to ^96f5ff1 ^00ff00seconds.
^00ff00Lv10: Channeling time reduced to ^96f5ff0.8 ^00ff00seconds.@1@2
^00ff00Channeling time reduced to ^96f5ff%.1f ^00ff00seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL680
#define __CPPGEN_GNET_SKILL680
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill680:public Skill
    {
        public:
        enum
        { SKILL_ID = 680 };
        Skill680 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill680Stub:public SkillStub
    {
        public:
        Skill680Stub ():SkillStub (680)
        {
            cls                 = 3;
#ifdef _SKILL_CLIENT
            name                = L"�桤ľ��ͨ";
            nativename          = "�桤ľ��ͨ";
            icon                = "ľϵ��ͨ1.dds";
#endif
            max_level           = 1;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 20;
            eventflag           = 1;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1630;
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
            pre_skills.push_back (std::pair < ID, int >(325, 10));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
#endif
        }
        virtual ~ Skill680Stub ()
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
            static int aarray[10] = { 92 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1500000 };
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
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (0);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 20);
            
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
            skill->GetPlayer ()->SetIncwood (0.25);
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