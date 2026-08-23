//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39200  "ΨRiver Avalanche"39201  "^ff5c00ΨRiver Avalanche

^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.4　^ffcb4aseconds
^ffcb4aCast　^ffffff1.2　^ffcb4aseconds
^ffcb4aCooldown　^ffffff5.0　^ffcb4aseconds
^ffcb4aChi Gained　^ffffff10
^ffcb4aWeapon　^ffffffMelee
^ffcb4aGlyph Bonus　^ff5c00Dragon's Might

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Deals base physical damage plus ^96f5ff170%%^ffffffof
weapon damage plus ^96f5ff4664^ffffff physical damage. Increases your Threat.

Different weapon types have different effects.
Axe and Hammer: Has ^96f5ff55%%^ffffff chance to stun the target for ^96f5ff3^ffffff seconds.
Polearm: Increases range to ^96f5ff20^ffffffmeters. Deals an additional ^96f5ff50%%^ffffff
of weapon damage.
Blades and Swords: Deals an additional ^96f5ff200%%^ffffff of weapon damage. Reduces the casting time to ^96f5ff1^ffffff second.
Other weapons: Same as Axe and Hammer.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional^96f5ff20%%^ffcb4a of weapon damage plus ^96f5ff2028^ffcb4a.
^ffcb4aLv5-7: Deals an additional^96f5ff30%%^ffcb4aof weapon damage plus ^96f5ff3042^ffcb4a.
^ffcb4aLv8-9: Deals an additional^96f5ff40%%^ffcb4aof weapon damage plus ^96f5ff4056^ffcb4a.
^ffcb4aLv10: Deals an additional^96f5ff50%%^ffcb4aof weapon damage plus ^96f5ff5070^ffcb4a.@1@2
^ffcb4aDeals an additional^96f5ff%d%%^ffcb4aof weapon damage plus ^96f5ff%d^ffcb4a.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL920
#define __CPPGEN_GNET_SKILL920
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill920:public Skill
    {
        public:
        enum
        { SKILL_ID = 920 };
        Skill920 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill920Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (800);
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
        Skill920Stub ():SkillStub (920)
        {
            cls                 = 7;
#ifdef _SKILL_CLIENT
            name                = L"��֮�ػ�";
            nativename          = "��֮�ػ�";
            icon                = "��֮�ػ�.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 20;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 2652;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "�ӻ�.sgc";
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
#endif
        }
        virtual ~ Skill920Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (800);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
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
            return (float) (0);
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
            return _snwprintf (buffer, length, format, 800);
            
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
            skill->GetVictim ()->SetTime (30000);
            skill->GetVictim ()->SetAmount (skill->GetPlayer ()->GetMaxhp () / 20 * 2);
            skill->GetVictim ()->SetValue (1);
            skill->GetVictim ()->SetWingshield (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetSpeedup (1);
            
            skill->GetVictim ()->SetTime (11000);
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
            return (float) (35);
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