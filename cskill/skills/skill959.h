//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39590  "ΨGravel Blade"39591  "^ff5c00ΨGravel Blade

^ffcb4aRange　^96f5ff28^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff75^ffffff
^ffcb4aChannel　^ffffff0.3　^ffcb4aseconds
^ffcb4aCast　^ffffff0.7　^ffcb4aseconds
^ffcb4aCooldown　^ffffff3.0 ^ffcb4aseconds
^ffcb4aChi Gained　^ffffff20
^ffcb4aRequired Weapon:　^ffffffSword
^ffcb4aGlyph Bonus　^ff5c00Martial Prowess

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Deliver a massive blow to your enemy, dealing ^96f5ff110%%^ffffff of
base physical damage plus ^96f5ff100%%^ffffff of weapon damage plus ^96f5ff1650^ffffff.

Has a ^96f5ff100%% ^ffffffchance of applying the ΨBloodletting
status, causing your ^96f5ffΨStalagstrike^ffffff to
deal an additional ^96f5ff3750 ^ffffffdamage and
stun the target for ^ffffff5 ^00ffffseconds.


^00ffffEthereal Glyph Effect:@1
^00ffffLv1-4: Deals an additional ^ffffff20%%^00ffff of weapon damage plus ^ffffff1780^00ffff.
^00ffffLv5-7: Deals an additional ^ffffff30%% ^00ffffof weapon damage plus ^ffffff2670^00ffff.
^00ffffLv8-9: Deals an additional ^ffffff40%% ^00ffffof weapon damage plus ^ffffff3560^00ffff.
^00ffffLv10: Deals an additional ^ffffff50%% ^00ffffof weapon damage plus ^ffffff4450^00ffff.@1@2
^00ffffDeals an additional ^ffffff%d%% ^00ffffof weapon damage plus ^ffffff%d^00ffff.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL959
#define __CPPGEN_GNET_SKILL959
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill959:public Skill
    {
        public:
        enum
        { SKILL_ID = 959 };
        Skill959 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill959Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecelfmp (80 - skill->GetT0 () * 0.2 - skill->GetT1 () * 0.2);
                skill->GetPlayer ()->SetDecelfap (500);
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
        Skill959Stub ():SkillStub (959)
        {
            cls                 = 258;
#ifdef _SKILL_CLIENT
            name                = L"��ˮ��";
            nativename          = "��ˮ��";
            icon                = "ˮ��.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 500000;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 4;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
#ifdef _SKILL_CLIENT
            effect              = "��ˮ��.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 0));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill959Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (80);
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
            static int aarray[10] = { 50025,50030,50035,50040,50045,50050,50055,50060,50065,50070 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1040,1680,2560,3720,5260,7300,10000,13620,18480,25000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (40);
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
            return _snwprintf (buffer, length, format, skill->GetLevel (), 5 + skill->GetLevel () * 0.2);
            
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
            skill->GetVictim ()->SetTime (5000 + skill->GetLevel () * 200);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetImmunewater (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfstr ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetElfagi ());
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
            return (float) (50);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 20;
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