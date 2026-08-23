//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
65040  "ΔBreath Pulse"65041  "^ff0000ΔBreath Pulse　　　　　　　Level %d|if&dynskilllv()>0&^ffcb4a +%d&|

^ffcb4aRequires Snow Ape form
^ffcb4aMana　^96f5ff225^ffffff
^ffcb4aChannel　^ffffffInstant
^ffcb4aCooldown　^ffffff300　^ffcb4aseconds
^ffcb4aWeapon　^ffffffClubs, Unarmed
^ffcb4aCost Item　^96f5ffSubsiding Dirt^ffffff

^ffcb4aRequired Cultivation　^ffffffAware of Vacuity
Immediately remove negative effects such as Paralyzed, Unarmed, Silenced,
Frozen, Stunned, and Sleep.
Unlocks all human form skills except Snow Ape Form, Conjure Shadows, and Goose Descent.
Lasts for ^96f5ff|if&(skilllv()+dynskilllv())<2&10&20|^ffffff seconds.

Level |if&(skilllv()+dynskilllv())>2&3: ^ffffffDuring the period, gain Yin and Yang state every second.
Reset the cooldown of Falling Punishment, Heavenly Chasm, Cosmic Union, and
Plane Traversal. Level &^8080803: During the period, gain Yin and Yang state every second.
Reset the cooldown of Falling Punishment, Heavenly Chasm, Cosmic Union, and
Plane Traversal. |

^a6caf0Used when inflicted with control effects."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6504
#define __CPPGEN_GNET_SKILL6504
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6504:public Skill
    {
        public:
        enum
        { SKILL_ID = 6504 };
        Skill6504 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6504Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp(225);
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
        Skill6504Stub ():SkillStub (6504)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"������һ��˫Ϣ";
            nativename          = "������һ��˫Ϣ";
            icon                = "����һ��˫Ϣ.dds";
#endif
            max_level           = 2;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 1501;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (69843);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
            itemcost            = 49982;
            itemcostcount       = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill6504Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (225);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 900;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 300000,300000,300000,300000,300000,300000,300000,300000,300000,300000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 70226,70227,70227,70227,70227,70227,70227,70227,70227,70227 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (16);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (0);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1);
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, const wchar_t * buffer, int length, const wchar_t * format) const
        {
            return 0;
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
            skill->GetVictim ()->SetCleardebuff2 (1);
            
            // N�vel de Genesis (G18)
            char genesis_enable = 0;
            genesis_enable += skill->GetPlayer ()->GetGenesisLevelEnabled ();

            // Envia o Protocolo pro Client
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (genesis_enable == 1 ? 20000 : 10000);
            skill->GetVictim ()->SetMonkeyformUltimate (1);
      
            skill->GetVictim ()->SetProbability (1.0 * (genesis_enable == 1 ? 100 : 0));
            skill->GetVictim ()->SetTime (genesis_enable == 1 ? 20000 : 10000);
            skill->GetVictim ()->SetRatio (0.1);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (6505);
            skill->GetVictim ()->SetAurabless (1);
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
            return (float) (35);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 9;
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