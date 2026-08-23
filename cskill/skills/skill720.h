//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
37200  "ΨRedstone Venomworm"0  "Venomworm"37201  "^ff5c00ΨRedstone Venomworm

^ffcb4aRange　^96f5ff%d^ffffff　^ffcb4aMeters
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff1.5　^ffcb4aseconds
^ffcb4aCast　^ffffff0.8　^ffcb4aseconds
^ffcb4aCooldown　^ffffff8.0　^ffcb4aseconds
^ffcb4aRequired Weapon:　^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonus　^ff5c00Dragon's Might

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Fling a venomous sandworm at the target, dealing base magic
damage plus ^96f5ff300%%^ffffff of weapon damage plus ^96f5ff3578^ffffff as Wood damage. The
worm burrows into the target for ^96f5ff15^ffffff seconds, lowering its Physical
Defense by ^96f5ff50%%^ffffff. Has a ^96f5ff25%%^ffffff chance to instead reduce Physical Defense
by ^96f5ff180%%^ffffff. Also deals ^96f5ff600%%^ffffff of weapon damage plus ^96f5ff6427^ffffff as Fire damage.

^a6caf0Costs ^ffffff25^a6caf0 Chi."0  "Venomworm"0  "^ffcb4aRange　^96f5ff%d^ffffff　^ffcb4aMeters"0  "^ffcb4aMana　^96f5ff%d^ffffff"0  "^ffcb4aChannel　^ffffff1.5　^ffcb4aseconds"0  "^ffcb4aCast　^ffffff0.8　^ffcb4aseconds"0  "^ffcb4aCooldown　^ffffff8.0　^ffcb4aseconds"0  "Weapon:　^ffffffUnarmed"0  "Instrument"0  "Bonus　^ff5c00Dragon's"0  "Might"0  "Cultivation　^ffffffChaotic"0  "Soul"0  "a"0  "sandworm"0  "the"0  "dealing"0  "magic"0  "plus"0  "of"0  "damage"0  "^96f5ff3578^ffffff"0  "Wood"0  "The"0  "burrows"0  "the"0  "for"0  "seconds"0  "its"0  "Physical"0  "by"0  "Has"0  "^96f5ff25%%^ffffff"0  "to"0  "reduce"0  "Defense"0  "^96f5ff180%%^ffffff."0  "deals"0  "of"0  "damage"0  "^96f5ff6427^ffffff"0  "Fire"0  "damage."0  "^ffffff25^a6caf0"0  "Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL720
#define __CPPGEN_GNET_SKILL720
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill720:public Skill
    {
        public:
        enum
        { SKILL_ID = 720 };
        Skill720 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill720Stub:public SkillStub
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
        Skill720Stub ():SkillStub (720)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"��Ʒ����-����ҩ��";
            nativename          = "��Ʒ����-����ҩ��";
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
            effect              = "���ɰٴ�.sgc";
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
        virtual ~ Skill720Stub ()
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
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio (0.15 + 0.15 * skill->GetLevel ());
            skill->GetVictim ()->SetScaleinchp (1);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetRatio (0.15 + 0.15 * skill->GetLevel ());
            skill->GetVictim ()->SetScaleincmp (1);
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