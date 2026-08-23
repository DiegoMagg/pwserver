//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38100  "Î¨Cursed Jail"38101  "^ff5c00Î¨Cursed Jail

^ffcb4aRangeã€€^ffffff4.5 meters
^ffcb4aManaã€€^96f5ff290^ffffff
^ffcb4aChannelã€€^ffffff0.4ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff2.5ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffDagger
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffCelestial Saint
Attack the enemy's pressure points with a flurry of
precision attacks, stunning the target for ^96f5ff6^ffffff seconds
and dealing ^96f5ff200%%^ffffff of base physical damage. Slows the target
for ^96f5ff10^ffffff seconds, reducing speed by ^96f5ff60%%^ffffff. Base skill
damage is equal to ^96f5ff375%%^ffffff of weapon damage plus ^96f5ff7497^ffffff.

^a6caf0Costs ^ffffff1 ^a6caf0Spark^a6caf0 and ^ffffff50 ^a6caf0Chi.

^d618e7Consumes all Hit Charges to increase effectiveness.

^ffeaabArgent Glyph Effect:@1
Has a ^96f5ff17%%^ffeaab chance per Hit Charge to put you into Stealth for ^96f5ff10^ffeaab seconds.
^ffeaabLv1-4: Deals ^96f5ff240%%^ffeaab of base skill damage.
^ffeaabLv5-7: Deals ^96f5ff260%%^ffeaab of base skill damage.
^ffeaabLv8-9: Deals ^96f5ff280%%^ffeaab of base skill damage.
^ffeaabLv10: Deals ^96f5ff300%%^ffeaab of base skill damage.@1@2
Has a ^96f5ff17%%^ffeaab chance per Hit Charge to put you into Stealth for ^96f5ff10^ffeaab seconds.
Deals ^96f5ff%d%%^ffeaab of base skill damage.@2

"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL810
#define __CPPGEN_GNET_SKILL810
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill810:public Skill
    {
        public:
        enum
        { SKILL_ID = 810 };
        Skill810 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill810Stub:public SkillStub
    {
        public:
        Skill810Stub ():SkillStub (810)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"Ê´»ê";
            nativename          = "Ê´»ê";
            icon                = "";
#endif
            max_level           = 1;
            type                = 6;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
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
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "¹ÖÎïÅçÒÏËá.sgc";
#endif
            range.type          = 0;
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
        virtual ~ Skill810Stub ()
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
            static int aarray[10] = { 0 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
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
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 5);
            skill->GetVictim ()->SetTime (30000);
            skill->GetVictim ()->SetRatio (0.1);
            skill->GetVictim ()->SetDechp (1);
            return true;
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