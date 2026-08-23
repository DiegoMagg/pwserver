//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38120  "Î¨Tackling Slash"38121  "^ff5c00Î¨Tackling Slash

^ffcb4aRangeã€€^ffffff4.5^ffcb4a meters
^ffcb4aManaã€€^96f5ff115^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.5ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff15.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff50
^ffcb4aWeaponã€€^ffffffDagger
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Bum rush the target with a slashing flourish of
your daggers, dealing base physical damage plus ^96f5ff5211^ffffff.
Freezes the target for ^96f5ff10^ffffff seconds and slows the
target for ^96f5ff20^ffffff seconds, reducing movement speed by ^96f5ff50%%^ffffff.

^a6caf0Generates ^ffffff1 ^a6caf0Hit Charge.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff120%%^ffcb4a of weapon damage plus ^96f5ff1430^ffcb4a.
^ffcb4aLv5-7: Deals an additional ^96f5ff180%%^ffcb4a of weapon damage plus ^96f5ff2145^ffcb4a.
^ffcb4aLv8-9: Deals an additional ^96f5ff240%%^ffcb4a of weapon damage plus ^96f5ff2860^ffcb4a.
^ffcb4aLv10: Deals an additional ^96f5ff300%%^ffcb4a of weapon damage plus ^96f5ff3575^ffcb4a.@1@2
Deals an additional ^96f5ff%d%%^ffcb4a of weapon damage plus ^96f5ff%d^ffcb4a.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL812
#define __CPPGEN_GNET_SKILL812
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill812:public Skill
    {
        public:
        enum
        { SKILL_ID = 812 };
        Skill812 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill812Stub:public SkillStub
    {
        public:
        Skill812Stub ():SkillStub (812)
        {
            cls                 = 255;
#ifdef _SKILL_CLIENT
            name                = L"ÄýÉñ";
            nativename          = "ÄýÉñ";
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
            effect              = "ÐîÆø.sgc";
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
        virtual ~ Skill812Stub ()
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
            skill->GetVictim ()->SetValue (20);
            skill->GetVictim ()->SetAp (1);
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