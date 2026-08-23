//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
36330  "Î¨Glacial Shards"36331  "^ff5c00Î¨Glacial Shards

^ffcb4aRangeã€€^96f5ff28.5^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff560^ffffff
^ffcb4aChannelã€€^ffffff1.5ã€€^ffcb4asecond
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff8.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff15
^ffcb4aWeaponã€€^ffffffSoulsphere
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Assault all enemies within ^96f5ff6 ^ffffffmeters with razor-sharp
shards of ice. Deals base magic damage plus
^96f5ff200%% ^ffffffof weapon damage plus ^96f5ff8322 ^ffffffas Water damage.
Has a ^96f5ff75%% ^ffffffchance to freeze targets for ^96f5ff5 ^ffffffseconds.

^00ffffEthereal Glyph Effect:@1
^00ffffLv1-4: Area increased to ^ffffff7 ^00ffffmeters.
^00ffffLv5-7: Area increased to ^ffffff8 ^00ffffmeters.
^00ffffLv8-9: Area increased to ^ffffff9 ^00ffffmeters.
^00ffffLv10: Area increased to ^ffffff10 ^00ffffmeters.@1@2
Area increased to ^ffffff%d^00ffff meters.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL633
#define __CPPGEN_GNET_SKILL633
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill633:public Skill
    {
        public:
        enum
        { SKILL_ID = 633 };
        Skill633 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill633Stub:public SkillStub
    {
        public:
        Skill633Stub ():SkillStub (633)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"¿ñ¡¤¹­åó¾«Í¨";
            nativename          = "¿ñ¡¤¹­åó¾«Í¨";
            icon                = "¹­åó¾«Í¨2.dds";
#endif
            max_level           = 1;
            type                = 5;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 30;
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
        virtual ~ Skill633Stub ()
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
            skill->GetPlayer ()->SetIncbow (0.75);
            skill->GetPlayer ()->SetInccrit (1);
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