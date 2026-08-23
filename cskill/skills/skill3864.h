//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
38640  "Î¨Bestial Rage"38641  "^ff5c00Î¨Bestial Rage

^ffcb4aManaã€€^ffffff50
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffAxe, Poleaxe, Hammer, Polehammer or Unarmed
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Consumes ^96f5ff5%%^ffffff of your current Health to restore Chi.
If your Health is below ^96f5ff50%%^ffffff, a magic shield will
appear and absorb up to ^96f5ff50%%^ffffff of your base physical
attack worth of magic damage. Lasts ^96f5ff10^ffffff seconds.
Cannot be used below ^96f5ff5%%^ffffff of your maximum Health.

^ffeaabArgent Glyph Effect@1
^ffeaabLv1-4: For every ^96f5ff16^ffeaab Health consumed, generate ^96f5ff1^ffeaab Chi.
^ffeaabLv5-7: For every ^96f5ff14^ffeaab Health consumed, generate ^96f5ff1^ffeaab Chi.
^ffeaabLv8-9: For every ^96f5ff12^ffeaab Health consumed, generate ^96f5ff1^ffeaab Chi.
^ffeaabLv10: For every ^96f5ff10^ffeaab Health consumed, generate ^96f5ff1^ffeaab Chi.@1@2
^ffeaabFor every ^96f5ff%d^ffeaab Health consumed, generate ^96f5ff1^ffeaab Chi.@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3864
#define __CPPGEN_GNET_SKILL3864
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3864:public Skill
    {
        public:
        enum
        { SKILL_ID = 3864 };
        Skill3864 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3864Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 0;
            }
            bool Quit (Skill * skill) const
            {
                return false;
            }
            bool Loop (Skill * skill) const
            {
                return false;
            }
            bool Bypass (Skill * skill) const
            {
                return false;
            }
            void Calculate (Skill * skill) const
            {
                skill->GetPlayer ()->SetDecmp (50);
                skill->GetPlayer ()->SetPerform (1);
                skill->GetPlayer ()->SetHp ((skill->GetPlayer ()->GetHp () > skill->GetPlayer ()->GetMaxhp () *0.05) ? skill->GetPlayer ()->GetHp () - (skill->GetPlayer ()->GetHp () * 0.05) : skill->GetPlayer ()->GetHp ());
            }
            bool Interrupt (Skill * skill) const
            {
                return false;
            }
            bool Cancel (Skill * skill) const
            {
                return 1;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill3864Stub ():SkillStub (3864)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ÊÞÍõÖ®Å­";
            nativename          = "Éñ¡¤ÊÞÍõÖ®Å­";
            icon                = "Éñ¡¤ÊÞÍõÖ®Å­°×.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 1;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 1526;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "¹ÖÎïÖÎÁÆÊõ.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "»ñµÃÔªÆøÔö¼Ó.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill3864Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (50);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000,1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 11208,11208,11208,11208,11208,11208,11208,11208,11208,11208 };
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
            int _glyph_value = get_glyph(skill->GetLevel (), 16, 14, 12, 10);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue ((skill->GetPlayer ()->GetMaxhp () * 0.05) / _glyph_value);
            skill->GetVictim ()->SetAp (1);
            
            skill->GetVictim ()->SetProbability (1.0 * (skill->GetPlayer()->GetHp() < skill->GetPlayer()->GetMaxhp()*0.5) ? 100 : 0);
            skill->GetVictim ()->SetTime (10000);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetAmount (skill->GetT0 () * 0.5);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetAbsorbmagicdamage (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttack ());
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
            return (float) (8.5);
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