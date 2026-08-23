//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
39440  "ΨMyriad Sword Stance"39441  "^ff5c00ΨMyriad Sword Stance

^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff0.2　^ffcb4aseconds
^ffcb4aCast　^ffffff3.0　^ffcb4aseconds.
^ffcb4aCooldown　^ffffff30.0　^ffcb4aseconds
^ffcb4aRequired Weapon:　^ffffffSword
^ffcb4aGlyph Bonus　^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Turn your vigor into an immense sword to destroy
your enemies. Enemies within ^96f5ff12^ffffff meters of the target
are dealt ^96f5ff400%%^ffffff base physical damage.
Never misses. Restores ^96f5ff25^ffffff Chi after use.

^a6caf0Costs ^ffffff1^a6caf0 Spark.

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Reduces the Chi cost of your next ^96f5ffΨHeaven's Flame ^ffcb4awithin ^96f5ff6 ^ffcb4aseconds by ^96f5ff80.
^ffcb4aLv5-7: Reduces the Chi cost of your next ^96f5ffΨHeaven's Flame ^ffcb4awithin ^96f5ff6 ^ffcb4aseconds by ^96f5ff120.
^ffcb4aLv8-9: Reduces the Chi cost of your next ^96f5ffΨHeaven's Flame ^ffcb4awithin ^96f5ff6 ^ffcb4aseconds by ^96f5ff160.
^ffcb4aLv10: Reduces the Chi cost of your next ^96f5ffΨHeaven's Flame ^ffcb4awithin ^96f5ff6 ^ffcb4aseconds by ^96f5ff200.@1@2
^ffcb4aReduces the Chi cost of your next ^96f5ffΨHeaven's Flame ^ffcb4awithin ^96f5ff6 ^ffcb4aseconds by ^96f5ff%d.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL944
#define __CPPGEN_GNET_SKILL944
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill944:public Skill
    {
        public:
        enum
        { SKILL_ID = 944 };
        Skill944 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill944Stub:public SkillStub
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
        Skill944Stub ():SkillStub (944)
        {
            cls                 = 127;
#ifdef _SKILL_CLIENT
            name                = L"ʱ����Ƭ.��ħ";
            nativename          = "ʱ����Ƭ.��ħ";
            icon                = "";
#endif
            max_level           = 10;
            type                = 4;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 0;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 0;
            allow_water         = 0;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 1;
            restrict_corpse     = 0;
            allow_forms         = 0;
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 2;
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
        virtual ~ Skill944Stub ()
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
            static int aarray[10] = { 0 };
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
            skill->GetVictim ()->SetTime (300000);
            skill->GetVictim ()->SetValue (50);
            skill->GetVictim ()->SetFastmpgen (1);
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