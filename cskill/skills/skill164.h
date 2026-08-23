//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
51640  "â—‹Backspin Slash"51641  "^8080ffâ—‹Backspin Slash

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff171.1^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4asecond(s)
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond(s)
^ffcb4aCooldownã€€^ffffff10ã€€^ffcb4asecond(s)
^ffcb4aWeaponã€€^ffffffSword Shield

^ffcb4aRequired Cultivationã€€ã€€^ffffffMaster of Discord
Attacks with all might, dealing Physical Damage to the target equal to
your base Physical Attack plus ^96f5ff7933^ffffff. Also interrupts the target.

^a6caf0Costs ^ffffff10^a6caf0 Chi.

^d618e7Channel and Cast time are reduced by ^96f5ff0.1^d618e7 seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL164
#define __CPPGEN_GNET_SKILL164
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill164:public Skill
    {
        public:
        enum
        { SKILL_ID = 164 };
        Skill164 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill164Stub:public SkillStub
    {
        public:
        Skill164Stub ():SkillStub (164)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"·ÉÐÐÆ÷¾«Í¨";
            nativename          = "·ÉÐÐÆ÷¾«Í¨";
            icon                = "·É½£¾«Í¨.dds";
#endif
            max_level           = 6;
            type                = 7;
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
            showorder           = 4001;
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
        virtual ~ Skill164Stub ()
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
            static int aarray[10] = { 150 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 3300,14000,48000,160000,185000,200000,200000,200000,200000,200000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 4200,19000,63000,220000,255000,275000,275000,275000,275000,275000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 4226,4227,4228,4229,4230,4231,4231,4231,4231,4231 };
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), skill->GetAbility (), skill->GetMaxability ());
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        int GetMaxAbility (Skill * skill) const
        {
            static int array[10] = { 10, 20, 30, 40, 50, 60 };
            return array[skill->GetLevel () - 1];
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