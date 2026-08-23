//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
41020  "Î¨Everlasting Ode"41021  "^ff5c00Î¨Everlasting Ode

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff160^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff0.5ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff6.0ã€€^ffcb4a seconds
^ffcb4aChi Gainedã€€^ffffff25
^ffcb4aWeaponã€€^ffffffSaber
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Slash back through the arc of your attack, hitting
all enemies in a ^96f5ff120^ffffff-degree, ^96f5ff8^ffffff-meter radius
area. Deals base physical damage plus ^96f5ff4521^ffffff
and drains ^96f5ff5^ffffff Chi from the target.

^ffa4a9Combo Skill: Default hotkey ^59EE4C Q
^ffa4a9Required Skill:^59EE4C Galemark^96f5ff
While in Reaper Form, the cooldown is reduced to ^ffffff1^96f5ff second.

^00ff00Verdant Glyph Effect:@1
^00ff00Lv1-4: Range increased by ^96f5ff0.5^00ff00 meters. Area increased by ^96f5ff1^00ff00 meters.
^00ff00Lv5-7: Range increased by ^96f5ff1.0^00ff00 meters. Area increased by ^96f5ff2^00ff00 meters.
^00ff00Lv8-9: Range increased by ^96f5ff1.5^00ff00 meters. Area increased by ^96f5ff3^00ff00 meters.
^00ff00Lv10: Range increased by ^96f5ff2.0^00ff00 meters. Area increased by ^96f5ff4^00ff00 meters.@1@2
Range increased by ^96f5ff%.1f^00ff00 meters. Area increased by ^96f5ff%d^00ff00 meters.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4102
#define __CPPGEN_GNET_SKILL4102
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4102:public Skill
    {
        public:
        enum
        { SKILL_ID = 4102 };
        Skill4102 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4102Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 67;
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
                skill->GetPlayer ()->SetDecmp (0.2 * 160);
                skill->GetPlayer ()->SetPray (1);
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
#ifdef _SKILL_SERVER
        class State2:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 501;
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
                skill->GetPlayer ()->SetDecmp (0.8 * 160);
                skill->SetPlus (4521);
                skill->SetDamage (skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return false;
            }
            bool Cancel (Skill * skill) const
            {
                return 0;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
#ifdef _SKILL_SERVER
        class State3:public SkillStub::State
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
            }
            bool Interrupt (Skill * skill) const
            {
                return false;
            }
            bool Cancel (Skill * skill) const
            {
                return 0;
            }
            bool Skip (Skill * skill) const
            {
                return 0;
            }
        };
#endif
        Skill4102Stub ():SkillStub (4102)
        {
            cls                 = 10;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤¾Å¸è";
            nativename          = "Éñ¡¤¾Å¸è";
            icon                = "Éñ¡¤¾Å¸èÂÌ.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 25;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1014;
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
#ifdef _SKILL_CLIENT
            effect              = "Ò¹Ó°_¾Å¸è_»÷ÖÐ.sgc";
#endif
            range.type          = 4;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            combosk_preskill    = 2563;
            combosk_interval    = 6000;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "Ê©·Å¾àÀëÔö¼Ó.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill4102Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (160);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 501;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[2][10] = { {6000,6000,6000,6000,6000,6000,6000,6000,6000,6000} , {1000,1000,1000,1000,1000,1000,1000,1000,1000,1000} };
            return aarray[skill->GetPlayer ()->GetForm ()][skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 30000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            int _glyph_value = get_glyph(skill->GetLevel (), 1, 2, 3, 4);
            return (float) (8 + _glyph_value);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (90));
        }
        float GetPraydistance (Skill * skill) const
        {
            float _glyph_value = get_glyph(skill->GetLevel (), 0.5, 1, 1.5, 2);
            return (float) ((skill->GetPlayer ()->GetRange () - 1) + _glyph_value);
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (-5);
            skill->GetVictim ()->SetAp (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            // Garante o ataque crÃ­tico
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (8000);
            skill->GetVictim ()->SetValue (4106);
            skill->GetVictim ()->SetNewValue (6);
            skill->GetVictim ()->SetGlyphCriticalValid (1);
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
            return (float) (10 + 2);
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (2);
        }
#endif
#ifdef _SKILL_SERVER
        void ComboSkEndAction (Skill * skill) const
        {
            skill->GetPlayer ()->SetComboid (2564);
            return;
        }
#endif
    };
}
#endif