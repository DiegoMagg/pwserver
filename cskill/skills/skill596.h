//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
35960  "Œ®Earth Vector"35961  "^ff5c00Œ®Earth Vector

^ffcb4aRange„ÄÄ^96f5ff28.5^ffffff„ÄÄ^ffcb4ameters
^ffcb4aMana„ÄÄ^96f5ff680^ffffff
^ffcb4aChannel„ÄÄ^ffffff1.0„ÄÄ^ffcb4aseconds
^ffcb4aCast„ÄÄ^ffffff1.0„ÄÄ^ffcb4aseconds
^ffcb4aCooldown„ÄÄ^ffffff20.0„ÄÄ^ffcb4aseconds
^ffcb4aWeapon„ÄÄ^ffffffSphere
^ffcb4aGlyph Bonus„ÄÄ^ff5c00Martial Prowess

^ffcb4aRequired Cultivation„ÄÄ^ffffffChaotic Soul
Manipulate the earth's magnetic field to crush enemies within ^96f5ff6^ffffff meters.
Deals base magic damage plus ^96f5ff200%%^ffffff
of weapon damage plus ^96f5ff3987^ffffff as Earth damage.
Has a ^96f5ff85%%^ffffff chance to stun the target for ^96f5ff6^ffffff seconds.

^a6caf0Costs ^ffffff1^a6caf0 Spark
^a6caf0Restores ^ffffff50^a6caf0 Chi

^00ff00Verdant Glyph Effect@1
^00ff00Lv1-4: Guaranteed to stun the target for ^96f5ff4.5^00ff00 seconds
^00ff00Lv5-7: Guaranteed to stun the target for ^96f5ff5.0^00ff00 seconds
^00ff00Lv8-9: Guaranteed to stun the target for ^96f5ff5.5^00ff00 seconds
^00ff00 Lv10 : Guaranteed to stun the target for ^96f5ff6.0^00ff00 seconds@1@2
Guaranteed to stun the target for ^96f5ff%.1f^00ff00 seconds@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL596
#define __CPPGEN_GNET_SKILL596
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill596:public Skill
    {
        public:
        enum
        { SKILL_ID = 596 };
        Skill596 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill596Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1000;
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
                skill->GetPlayer ()->SetDecmp (45);
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
                return 600;
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
                skill->GetPlayer ()->SetDecmp (180);
                skill->SetPlus (5403);
                skill->SetRatio (0);
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
        Skill596Stub ():SkillStub (596)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"’Ê°§¿ß∏ø ∏";
            nativename          = "’Ê°§¿ß∏ø ∏";
            icon                = "¿ß∏ø ∏1.DDS";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 100;
            arrowcost           = 1;
            apgain              = 0;
            attr                = 1;
            rank                = 20;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1304;
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
            effect              = "1–È»ı ∏.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(237, 10));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill596Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (225);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 600;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 15000;
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
            return _snwprintf (buffer, length, format, 225, 8);
            
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
            skill->GetVictim ()->SetProbability (1.0 * 90);
            skill->GetVictim ()->SetTime (8500);
            skill->GetVictim ()->SetFix (1);
            skill->GetVictim ()->SetProbability (1.0 * 25);
            skill->GetVictim ()->SetTime (5500);
            skill->GetVictim ()->SetSealed (1);
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
            return (float) (skill->GetPlayer ()->GetRange () + 5);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 21;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.5);
        }
#endif
    };
}
#endif