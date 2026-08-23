//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39100  "Î¨Army Crusher"39101  "^ff5c00Î¨Army Crusher

^ffcb4aRangeã€€^ffffffMelee
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff3.0 ^ffcb4aseconds
^ffcb4aChi Gainedã€€^ffffff10
^ffcb4aWeaponã€€^ffffffMelee weapons
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Sweep your weapon in a massive arc, delivering
a powerful attack against all enemies within ^96f5ff12^ffffff
meters, dealing base physical damage plus ^96f5ff7241^ffffff.

^00ffffEthereal Glyph Effect:@1
^00ffffLv1-4: Generates ^ffffff15 Chi.
^00ffffLv5-7: Generates ^ffffff20 Chi.
^00ffffLv8-9: Generates ^ffffff25 Chi.
^00ffffLv10: Generates ^ffffff30 Chi.@1@2
^00ffffGenerates ^ffffff%d Chi.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL910
#define __CPPGEN_GNET_SKILL910
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill910:public Skill
    {
        public:
        enum
        { SKILL_ID = 910 };
        Skill910 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill910Stub:public SkillStub
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
        Skill910Stub ():SkillStub (910)
        {
            cls                 = 3;
#ifdef _SKILL_CLIENT
            name                = L"²Êºç¹Æ";
            nativename          = "²Êºç¹Æ";
            icon                = "²Êºç¹Æ.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 20;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 3;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 2451;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "²Êºç¹Æ.sgc";
#endif
            range.type          = 2;
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
        virtual ~ Skill910Stub ()
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
            return 20000;
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
            return (float) (15);
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
            return (float) (12);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 12, 800);
            
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 10;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 35);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetAmount (4500);
            skill->GetVictim ()->SetToxic (1);
            skill->GetVictim ()->SetProbability (1.0 * 35);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetAmount (4500);
            skill->GetVictim ()->SetBleeding (1);
            skill->GetVictim ()->SetProbability (1.0 * 15);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetDecdefence (1);
            skill->GetVictim ()->SetProbability (1.0 * 15);
            skill->GetVictim ()->SetTime (9000);
            skill->GetVictim ()->SetRatio (1);
            skill->GetVictim ()->SetDecresist (1);
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
            return (float) (3);
        }
#endif
    };
}
#endif