//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
8980  "Smack"8981  "^ffffffSmack　　　　　　　　　　　

^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.2　^ffcb4a seconds
^ffcb4aCast　^ffffff1.0　^ffcb4a seconds
^ffcb4aCooldown　^ffffff30　^ffcb4a seconds
^ffcb4aWeapon　^ffffffNone

^ffcb4aRequired Cultivation　^ffffffAware of Vacuity
Smash your enemy with a devastating slam, dealing base physical damage plus
^96f5ff100%%^ffffff of weapon damage plus ^96f5ff5135^ffffff. Interrupts and
silences target for ^96f5ff3^ffffff seconds.
Never misses.

Different weapon types have different effects.
Axe and Hammer: Silence duration is increased to ^96f5ff5^ffffff seconds.
Polearm: Range is increased to ^96f5ff20^ffffff meters, plus ^96f5ff100%%^ffffff physical damage of Gear Attack.
Blade or Sword: No longer Silences the target; Channel is reduced to ^96f5ff0.1
seconds^ffffff; Cast is reduced to ^96f5ff0.6^ffffff seconds; Physical Damage is increased by an additional ^96f5ff300%%^ffffff
of Gear Attack.
Other: Same as Axe and Hammer.

^a6caf0Costs ^ffffff15^a6caf0 Chi.
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL898
#define __CPPGEN_GNET_SKILL898
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill898:public Skill
    {
        public:
        enum
        { SKILL_ID = 898 };
        Skill898 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill898Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return skill->GetPlayer()->GetCurWeapon() == 1 ? 100 : 200;
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
                skill->GetPlayer ()->SetDecmp (20);
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
                return skill->GetPlayer()->GetCurWeapon() == 1 ? 600 : 1000;
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
                /*skill->GetPlayer ()->SetDecmp (180);
                skill->SetPlus (5135);
                skill->SetRatio (1);
                skill->SetDamage (skill->GetPlayer()->GetCurWeapon() == 1 ? 2 * skill->GetAttack () : skill->GetAttack ());
                skill->GetPlayer ()->SetPerform (1);*/
                switch(skill->GetPlayer ()->GetCurweapon ())
                {
                    case 1: //espada
                        skill->SetPlus (5135);
                        skill->SetRatio (1);
                        skill->SetDamage(skill->GetAttack() + skill->GetPlayer()->GetEquipattack());
                    break;
                    case 5: //lanca
                        skill->SetPlus (5135);
                        skill->SetRatio (1);
                        skill->SetDamage(skill->GetAttack() + 3 * skill->GetPlayer()->GetEquipattack());
                    break;
                    case 9: //machado
                    case 182: //punho
                    default:
                        skill->SetPlus (5135);
                        skill->SetRatio (1);
                        skill->SetDamage(skill->GetAttack());
                        break;
                }
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
        Skill898Stub ():SkillStub (898)
        {
            cls                 = 0;
#ifdef _SKILL_CLIENT
            name                = L"�Ͽ�";
            nativename          = "�Ͽ�";
            icon                = "��Х����.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 15;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 7;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2153;
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
                restrict_weapons.push_back (0);
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
#ifdef _SKILL_CLIENT
            effect              = "��Ӱ.sgc";
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
        virtual ~ Skill898Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (200);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 30000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 79 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
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
            return (float) (skill->GetPlayer ()->GetRange () + 3 + 0.3 * skill->GetLevel ());
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            //return (float) (18);
            return(float) (skill->GetPlayer()->GetCurWeapon() == 5 ? 20 : skill->GetPlayer()->GetRange());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 200);
            
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
            //skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer()->GetCurWeapon() != 1 ? 100 : 0);
            //skill->GetVictim ()->SetTime (skill->GetPlayer()->GetCurWeapon() == 9 ? 6000 : 4000);
            skill->GetVictim ()->SetProbability (1.0 * skill->GetPerformerCurWeapon() != 1 ? 100 : 0);
            skill->GetVictim ()->SetTime (skill->GetPerformerCurWeapon() == 9 ? 6000 : 4000);
            skill->GetVictim ()->SetSealed (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetBreak (1);
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
            return 22;
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (5);
        }
#endif
    };
}
#endif