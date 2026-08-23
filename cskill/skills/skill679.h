//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
36790  "ΨHailstorm"36791  "^ff5c00ΨHailstorm

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

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff72%% ^ffcb4aof weapon damage plus ^96f5ff1036^ffcb4a.
^ffcb4aLv5-7: Deals an additional ^96f5ff108%% ^ffcb4aof weapon damage plus ^96f5ff1554^ffcb4a.
^ffcb4aLv8-9: Deals an additional ^96f5ff144%% ^ffcb4aof weapon damage plus ^96f5ff2072^ffcb4a.
^ffcb4aLv10: Deals an additional ^96f5ff180%% ^ffcb4aof weapon damage plus ^96f5ff2590^ffcb4a.@1@2
^ffcb4aDeals an additional ^96f5ff%d%% ^ffcb4aof weapon damage plus ^96f5ff%d^ffcb4a.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL679
#define __CPPGEN_GNET_SKILL679
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill679:public Skill
    {
        public:
        enum
        { SKILL_ID = 679 };
        Skill679 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill679Stub:public SkillStub
    {
        public:
        Skill679Stub ():SkillStub (679)
        {
            cls                 = 3;
#ifdef _SKILL_CLIENT
            name                = L"���ⲫ��ͨ";
            nativename          = "���ⲫ��ͨ";
            icon                = "ȭ����ͨ2.dds";
#endif
            max_level           = 1;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 30;
            eventflag           = 4;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1629;
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
            pre_skills.push_back (std::pair < ID, int >(324, 10));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
#endif
        }
        virtual ~ Skill679Stub ()
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
            return _snwprintf (buffer, length, format, 150);
            
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
            skill->GetPlayer ()->SetIncfight (0.3);
            skill->GetPlayer ()->SetInccrit (3);
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