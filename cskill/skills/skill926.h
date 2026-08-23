//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39260  "Î¨Blade Tornado"39261  "^ff5c00Î¨Blade Tornado

^ffcb4aManaã€€^96f5ff495^ffffff
^ffcb4aChannelã€€^ffffff0.4ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.7ã€€^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff180.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffUnarmed, Melee weapon
^ffcb4aGlyph Bonusã€€^ff5c00Martial Prowess

^ffcb4a Required Cultivationã€€^ffffffCelestial Saint
Create a whirling tempest of fiery rage for ^96f5ff12^ffffff seconds. Every ^96f5ff3^ffffffseconds,
all enemies within ^96f5ff10^ffffff meters will take damage. Deals
^96f5ff450%%^ffffff of weapon damage plus ^96f5ff20000^ffffff
physical damage and slows target by ^96f5ff30%%^ffffff. Lasts ^96f5ff3^ffffff seconds.
Reduces incoming damage by ^96f5ff50%%^ffffff and
makes you immune to all control effects. Cannot be a critical strike, but has a chance to
double your Critical Rate and deal ^96f5ff1.5^ffffff times damage.

Recharges ^96f5ff2 ^ffffff Sparks over a duration of ^96f5ff12^ffffff seconds.


^a6caf0Costs ^ffffff3^a6caf0 Sparks.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff360%%^ffcb4a of weapon damage.
^ffcb4aLv5-7: Deals an additional ^96f5ff540%%^ffcb4a of weapon damage.
^ffcb4aLv8-9: Deals an additional ^96f5ff720%%^ffcb4a of weapon damage.
^ffcb4a Lv10: Deals an additional ^96f5ff900%%^ffcb4a of weapon damage.@1@2
^ffcb4aDeals an additional ^96f5ff%d%%^ffcb4a of weapon damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL926
#define __CPPGEN_GNET_SKILL926
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill926:public Skill
    {
        public:
        enum
        { SKILL_ID = 926 };
        Skill926 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill926Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (1000);
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
                int temp = skill->GetPlayer ()->GetMaxmp () * 15 / 10;
                skill->SetPlus (2500);
                skill->SetEarthdamage (temp);
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
        Skill926Stub ():SkillStub (926)
        {
            cls                 = 1;
#ifdef _SKILL_CLIENT
            name                = L"ÁéÆøÕð±¬";
            nativename          = "ÁéÆøÕð±¬";
            icon                = "ÁéÆøÕð±¬.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 100;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 6;
            rank                = 32;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2257;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "ÔªËØÐé¿Õ.sgc";
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
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill926Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (1000);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 300000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 4000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (8 + 0.4 * skill->GetLevel ());
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (4 + 0.3 * skill->GetLevel ());
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (30);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 30, 1000);
            
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
            skill->GetVictim ()->SetTime (30000);
            skill->GetVictim ()->SetAmount (skill->GetT0 ());
            skill->GetVictim ()->SetMagicleak (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (30000);
            skill->GetVictim ()->SetValue (20);
            skill->GetVictim ()->SetApleak (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetPuremagicattack () / 2);
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
            return (float) (40);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 30;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (3);
        }
#endif
    };
}
#endif