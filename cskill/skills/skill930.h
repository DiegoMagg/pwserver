//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39300  "Î¨Blade Tornado"39301  "^ff5c00Î¨Blade Tornado

^ffcb4aManaã€€^96f5ff495^ffffff
^ffcb4aChannelã€€^ffffff0.4ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff180.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Melee weapon
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Create a whirling tempest of fiery rage for ^96f5ff12^ffffff seconds.
Every ^96f5ff3^ffffffsecond,
all enemies within ^96f5ff10^ffffff meters will take damage. Deals
weapon damage plus ^96f5ff450%%^ffffff of weapon Attack plus^96f5ff20000^ffffff
physical damage and slows target by ^96f5ff30%%^ffffff. Lasts ^96f5ff3^ffffff seconds.
Reduces incoming damage by^96f5ff50%%^ffffff and
makes you immune to all control effects. Cannot be a critical strike,
but has a chance to
double your Critical Rate and deal ^96f5ff1.5^ffffff times damage.
Recharges^96f5ff2^ffffff Sparks over a duration ^96f5ff12^ffffff seconds.
^a6caf0Costs ^ffffff3^a6caf0Sparks.

^ffeaabArgent Glyph Effect:@1
^ffeaabLv1-4: When hitting target, has a ^96f5ff40%%^ffeaab chance of stunning target for ^96f5ff4^ffeaab seconds.
^ffeaabLv5-7: When hitting target, has a ^96f5ff60%%^ffeaab chance of stunning target for ^96f5ff4^ffeaab seconds.
^ffeaabLv8-9: When hitting target, has a ^96f5ff80%%^ffeaab chance of stunning target for ^96f5ff4^ffeaab seconds.
^ffeaabLv10: When hitting target, has a ^96f5ff100%%^ffeaab chance of stunning target for ^96f5ff4^ffeaab seconds.@1@2
^ffeaabWhen hitting target, has a ^96f5ff%d%%^ffeaab chance of stunning target for ^96f5ff4^ffeaab seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL930
#define __CPPGEN_GNET_SKILL930
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill930:public Skill
    {
        public:
        enum
        { SKILL_ID = 930 };
        Skill930 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill930Stub:public SkillStub
    {
        public:
        Skill930Stub ():SkillStub (930)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"×÷·Ï";
            nativename          = "×÷·Ï";
            icon                = "";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 22;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 0;
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
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "¾ÞÁéÉñÁ¦.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
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
        virtual ~ Skill930Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (1);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 180000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 95 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 2 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1,1,1,1,1,1,1,1,1,1 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (16);
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
            return _snwprintf (buffer, length, format);
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
        int GetAttackspeed (Skill * skill) const
        {
            return 15;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1);
        }
#endif
    };
}
#endif