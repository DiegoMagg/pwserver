//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39170  "ΨDrake's Ray"39171  "^ff5c00ΨDrake's Ray

^ffcb4aRange　^96f5ff%d^ffffff　^ffcb4aMeters
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.2　^ffcb4aseconds
^ffcb4aCast　^ffffff0.5　^ffcb4aseconds
^ffcb4aCooldown　^ffffff5.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff10
^ffcb4aWeapon　^ffffffMelee weapons
^ffcb4aGlyph Bonus　^ff5c00Martial Prowess

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Create a swift psionic blade to attack an enemy
from afar, dealing base physical damage plus ^96f5ff6747^ffffff.
Has a ^96f5ff66%%^ffffff chance to freeze the target for ^96f5ff3^ffffff seconds.
Range is increased by ^96f5fftwice^ffffff the weapon's range.

^ff0000Sanguine Glyph Effect:@1
^ff0000Costs ^96f5ff50%%^ff0000 of current Chi. Accuracy increased by ^96f5ff10%%^ff0000 per point of Chi spent.
^ff0000Lv1-4: For every ^96f5ff100^ff0000 Chi spent, deals ^96f5ff125%%^ff0000 of base physical damage.
^ff0000Lv5-7: For every ^96f5ff100^ff0000 Chi spent, deals ^96f5ff150%%^ff0000 of base physical damage.
^ff0000Lv8-9: For every ^96f5ff100^ff0000 Chi spent, deals ^96f5ff175%%^ff0000 of base physical damage.
^ff0000Lv10: For every ^96f5ff100^ff0000 Chi spent, deals ^96f5ff200%%^ff0000 of base physical damage.@1@2
^ff0000Costs ^96f5ff50%%^ff0000 of current Chi. Accuracy increased by ^96f5ff10%%^ff0000 per point of Chi spent.
For every ^96f5ff100^ff0000 Chi spent, deals ^96f5ff%d%%^ff0000 of base physical damage.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL917
#define __CPPGEN_GNET_SKILL917
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill917:public Skill
    {
        public:
        enum
        { SKILL_ID = 917 };
        Skill917 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill917Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (1000);
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
        Skill917Stub ():SkillStub (917)
        {
            cls                 = 6;
#ifdef _SKILL_CLIENT
            name                = L"Ԫ��ŷ�";
            nativename          = "Ԫ��ŷ�";
            icon                = "Ԫ��ŷ�.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 22;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 2553;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (1);
            }
            {
                restrict_weapons.push_back (5);
            }
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (13);
            }
            {
                restrict_weapons.push_back (182);
            }
            {
                restrict_weapons.push_back (291);
            }
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "Ԫ��ŷ�.sgc";
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
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill917Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (1000);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 180000;
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (5500);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetFastpray (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetValue (399);
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