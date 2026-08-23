//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
54530  "Î¨Shadowless Wind"54531  "^ff5c00Î¨Shadowless Wind

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffff0.2ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.2ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff12.0ã€€^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffUnarmed, Fist or Claw
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4aRequired Cultivation ã€€^ffffffChaotic Soul
Leap from the ground and perform a sweeping kick,
attacking all enemies within ^96f5ff8 ^ffffffmeters.
Deals base physical damage plus ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff3233^ffffff as Physical and Metal damage.
For ^96f5ff20^ffffff seconds, increases your Normal Attack Rate by ^96f5ff20%%^ffffff.
Also interrupts the target's spellcasting.

^ff0000Sanguine Glyph Effect:@1
^ff0000Cost ^96f5ff50%%^ff0000 of current Chi. Each point of Chi cost increases Accuracy by ^96f5ff10%%^ff0000.
^ff0000LV1-4: For each ^96f5ff100^ff0000 Chi cost, deals an additional ^96f5ff125%%^ff0000 damage.
^ff0000Lv5-7: For each ^96f5ff100^ff0000 Chi cost, deals an additional ^96f5ff150%%^ff0000 damage.
^ff0000Lv8-9: For each ^96f5ff100^ff0000 Chi cost, deals an additional ^96f5ff175%%^ff0000 damage.
^ff0000Lv10: For each ^96f5ff100^ff0000 Chi cost, deals an additional ^96f5ff200%%^ff0000 damage.@1@2
^ff0000Cost ^96f5ff50%%^ff0000 of current Chi. Each point of Chi cost increases Accuracy by ^96f5ff10%%^ff0000.
For each ^96f5ff100^ff0000 Chi cost, deals and additional ^96f5ff%d%%^ff0000 damage. @2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL453
#define __CPPGEN_GNET_SKILL453
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill453:public Skill
    {
        public:
        enum
        { SKILL_ID = 453 };
        Skill453 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill453Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 3200;
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
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 5;
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
                float tmp1 = skill->GetPlayer ()->GetHp () * (1 - 0.6 * skill->GetCharging () / 3200);
                float tmp2 = skill->GetPlayer ()->GetHp () * 0.6 * skill->GetCharging () / 3200;
                skill->GetPlayer ()->SetDecmp (295);
                skill->GetPlayer ()->SetHp (tmp1);
                skill->SetPlus (tmp2 * 4 + 5000);
                skill->SetFiredamage (skill->GetPlus ());
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
        Skill453Stub ():SkillStub (453)
        {
            cls                 = 1;
#ifdef _SKILL_CLIENT
            name                = L"¿ñ¡¤Ñª¼ÀÑ×±¬";
            nativename          = "¿ñ¡¤Ñª¼ÀÑ×±¬";
            icon                = "Ñª¼ÀÑ×±¬2.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 5;
            rank                = 30;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 3;
            showorder           = 1207;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (292);
            }
#ifdef _SKILL_CLIENT
            effect              = "2Ñª¼ÀÑ×±¬.sgc";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(8, 10));
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
        virtual ~ Skill453Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (295);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
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
            return (float) (12);
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
            return (float) (6);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 295, 4);
            
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
            skill->GetVictim ()->SetProbability (1.0 * 50);
            skill->GetVictim ()->SetTime (4000);
            skill->GetVictim ()->SetDizzy (1);
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
            return (float) (25);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 5;
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