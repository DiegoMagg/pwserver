//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
36320  "ΨGlacial Shards"36321  "^ff5c00ΨGlacial Shards

^ffcb4aRange　^96f5ff28.5^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff560^ffffff
^ffcb4aChannel　^ffffff1.5　^ffcb4asecond
^ffcb4aCast　^ffffff1.0　^ffcb4asecond
^ffcb4aCooldown　^ffffff8.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff15
^ffcb4aWeapon　^ffffffSoulsphere
^ffcb4aGlyph Bonus　^ff5c00Dragon's Might

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Assault all enemies within ^96f5ff6 ^ffffffmeters with razor-sharp
shards of ice. Deals base magic damage plus
^96f5ff200%% ^ffffffof weapon damage plus ^96f5ff8322 ^ffffffas Water damage.
Has a ^96f5ff75%% ^ffffffchance to freeze targets for ^96f5ff5 ^ffffffseconds.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Guaranteed to freeze the target for ^96f5ff3.0 ^00ff00seconds.
^00ff00Lv5-7: Guaranteed to freeze the target for ^96f5ff3.5 ^00ff00seconds.
^00ff00Lv8-9: Guaranteed to freeze the target for ^96f5ff4.0 ^00ff00seconds.
^00ff00Lv10: Guaranteed to freeze the target for ^96f5ff4.5 ^00ff00seconds.@1@2
Guaranteed to freeze the target for ^96f5ff%.1f^00ff00 seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL632
#define __CPPGEN_GNET_SKILL632
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill632:public Skill
    {
        public:
        enum
        { SKILL_ID = 632 };
        Skill632 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill632Stub:public SkillStub
    {
        public:
        Skill632Stub ():SkillStub (632)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"�桤����ͨ";
            nativename          = "�桤����ͨ";
            icon                = "����ͨ1.dds";
#endif
            max_level           = 1;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 20;
            eventflag           = 2;
            is_senior           = 1;
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
            pre_skills.push_back (std::pair < ID, int >(256, 10));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
        }
        virtual ~ Skill632Stub ()
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
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 75);
            
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
            skill->GetPlayer ()->SetIncbow (0.9);
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