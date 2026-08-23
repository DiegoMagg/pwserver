//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37140  "ΨVenomous Scarab"0  "Scarab"37141  "^ff5c00ΨVenomous Scarab

^ffcb4aRange　^96f5ff27^ffffff　 ^ffcb4ameters
^ffcb4aMana　^96f5ff130^ffffff
^ffcb4aChannel　^ffffff1.5　^ffcb4aseconds
^ffcb4aCast　^ffffff1.0　^ffcb4asecond
^ffcb4aCooldown　^ffffff1.0　^ffcb4asecond
^ffcb4aChi Gained　^ffffff15
^ffcb4aRequired Weapon:　^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonus　^ff5c00Dragon's Might

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Throw a virulent parasite at the enemy, dealing
base magic damage plus ^96f5ff150%% ^ffffffof weapon damage plus
^96f5ff5953 ^ffffffas Wood damage. Deals an additional ^96f5ff20%% ^ffffffdamage
if you have a pet summoned. Weakens the target for
^96f5ff6 ^ffffffseconds, reducing Magic Defense by ^96f5ff60%%^ffffff."0  "Scarab"0  "^ffcb4ameters"0  "^ffcb4aMana　^96f5ff130^ffffff"0  "^ffcb4aChannel　^ffffff1.5　^ffcb4aseconds"0  "^ffcb4aCast　^ffffff1.0　^ffcb4asecond"0  "^ffcb4aCooldown　^ffffff1.0　^ffcb4asecond"0  "Gained　^ffffff15"0  "Weapon:　^ffffffUnarmed"0  "Instrument"0  "Bonus　^ff5c00Dragon's"0  "Might"0  "Cultivation　^ffffffChaotic"0  "Soul"0  "a"0  "parasite"0  "the"0  "dealing"0  "magic"0  "plus"0  "^ffffffof"0  "damage"0  "plus"0  "^ffffffas"0  "damage."0  "an"0  "^96f5ff20%%"0  "^ffffffdamage"0  "you"0  "a"0  "summoned."0  "the"0  "for"0  "^ffffffseconds"0  "Magic"0  "by"0  "^96f5ff60%%^ffffff."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL714
#define __CPPGEN_GNET_SKILL714
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill714:public Skill
    {
        public:
        enum
        { SKILL_ID = 714 };
        Skill714 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill714Stub:public SkillStub
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
        Skill714Stub ():SkillStub (714)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"��Ʒ����-�����ж�ҩ��";
            nativename          = "��Ʒ����-�����ж�ҩ��";
            icon                = "";
#endif
            max_level           = 5;
            type                = 4;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
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
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "��ӥ֮��.sgc";
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
        virtual ~ Skill714Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (0);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 0;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 1,2,3,4,5,5,5,5,5,5 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0 };
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
            skill->GetVictim ()->SetTime (4000 + 4000 * skill->GetLevel ());
            skill->GetVictim ()->SetFreemove (1);
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