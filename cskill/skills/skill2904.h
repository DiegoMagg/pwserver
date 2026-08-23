//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
29040  "Î©Lunar Grace"29041  "^ffff00Î©Lunar Grace

^ffcb4aManaã€€^96f5ff116^ffffff
^ffcb4aCastã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff60.0ã€€^ffcb4aseconds
^ffcb4aRequired Weaponã€€^ffffffSaber, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of the Void
Drink in the radiant energy of the moonlight, making you immune to movement
impairing effects for ^96f5ff15^ffffff seconds. Resets the cooldown on  Blinking Moment,
and removes the cooldown from your next Blinking Moment within ^96f5ff5^ffffff seconds.

^a6caf0Costs ^ffffff50 ^a6caf0Chi.

^d618e7Demon version increases the immunity duration by ^96f5ff2^d618e7 seconds.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL2904
#define __CPPGEN_GNET_SKILL2904
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill2904:public Skill
    {
        public:
        enum
        { SKILL_ID = 2904 };
        Skill2904 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill2904Stub:public SkillStub
    {
        public:
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
                skill->GetPlayer ()->SetDecmp (0.2 * 116);
                skill->GetPlayer ()->SetPerform (1);
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
        Skill2904Stub ():SkillStub (2904)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"»Ä¡¤ÔÂÒû";
            nativename          = "»Ä¡¤ÔÂÒû";
            icon                = "Ä§ÔÂÒû.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 50;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 30;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 1009;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44878);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "Ò¹Ó°_ÔÂÒû_»÷ÖÐ.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(2755, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill2904Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (116);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1068;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
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
            static int aarray[10] = { 47433,47433,47433,47433,47433,47433,47433,47433,47433,47433 };
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
            skill->GetVictim ()->SetTime (16001);
            skill->GetVictim ()->SetFreemove (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetAmount (500);
            skill->GetVictim ()->SetValue (2559);
            skill->GetVictim ()->SetSkillcooldown (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetAmount (500);
            skill->GetVictim ()->SetValue (2753);
            skill->GetVictim ()->SetSkillcooldown (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetAmount (500);
            skill->GetVictim ()->SetValue (4469);
            skill->GetVictim ()->SetSkillcooldown (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetAmount (500);
            skill->GetVictim ()->SetValue (4470);
            skill->GetVictim ()->SetSkillcooldown (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetAmount (500);
            skill->GetVictim ()->SetValue (4471);
            skill->GetVictim ()->SetSkillcooldown (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetAmount (500);
            skill->GetVictim ()->SetValue (4472);
            skill->GetVictim ()->SetSkillcooldown (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetAmount (500);
            skill->GetVictim ()->SetValue (4473);
            skill->GetVictim ()->SetSkillcooldown (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio (0);
            skill->GetVictim ()->SetAmount (500);
            skill->GetVictim ()->SetValue (4474);
            skill->GetVictim ()->SetSkillcooldown (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (5500);
            skill->GetVictim ()->SetRatio (4469);
            skill->GetVictim ()->SetValue (6);
            skill->GetVictim ()->SetFreecooldown(1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (100);
            skill->GetVictim ()->SetRatio (0.1);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (2863);
            skill->GetVictim ()->SetAurabless2 (1);
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
            return (float) (10);
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