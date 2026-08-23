//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
51580  "â—‹Darkverse: Solar Scorch"51581  "^8080ffâ—‹Darkverse: Solar Scorch

^ffcb4aManaã€€^96f5ff207^ffffff
^ffcb4aChannelã€€^ffffff0.1   ^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.4   ^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff5.0   ^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff5
^ffcb4aWeaponã€€^ffffffSword Shield, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffMaster of Discord
The fifth move in the Darkverse form. Each time you land a hit,
the target loses ^96f5ff10^ffffff points of Chi. Changes all damage
you deal into Fire damage. Lasts ^96f5ff20^ffffff minutes.

^808080Only one Darkverse effect can be active at a time.

^d618e7Restores ^96f5ff30^d618e7 Chi after use."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL158
#define __CPPGEN_GNET_SKILL158
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill158:public Skill
    {
        public:
        enum
        { SKILL_ID = 158 };
        Skill158 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill158Stub:public SkillStub
    {
        public:
        Skill158Stub ():SkillStub (158)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"Ìú½³¾«Í¨";
            nativename          = "Ìú½³¾«Í¨";
            icon                = "Ìú½³¾«Í¨.dds";
#endif
            max_level           = 10;
            type                = 9;
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
            showorder           = 3001;
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
        virtual ~ Skill158Stub ()
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
            static int aarray[10] = { 5 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0,500,2500,5000,25000,50000,100000,170000,300000,500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 0,1000,5000,10000,50000,100000,200000,350000,600000,1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 3439,0,0,3442,0,3444,0,3446,3447,3448 };
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
            static int array[10] = { 10, 20, 30, 45, 60, 80, 100, 120, 150, 200 };
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