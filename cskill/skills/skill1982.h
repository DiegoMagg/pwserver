//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
19820  "â—Imbued Panda Form"19821  "^8080ffâ—Imbued Panda Form
^96f5ff
^ffcb4aManaã€€^96f5ff%d^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff2.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffAxe, Poleaxe, Hammer or Polehammer, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffAware of the Myriad
Transform into your panda form,
increasing maximum Health by ^96f5ff60%% ^ffffffand speed
by ^96f5ff%d%%^ffffff. Inherit current Health by a certain percentage.

^a6caf0Shares a cooldown with Tiger Form.
^a6caf0Used when inflicted with control effects.

^f7dfa5Sage version generates ^96f5ff20 ^f7dfa5Chi."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL1982
#define __CPPGEN_GNET_SKILL1982
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill1982:public Skill
    {
        public:
        enum
        { SKILL_ID = 1982 };
        Skill1982 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill1982Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (100);
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
        Skill1982Stub ():SkillStub (1982)
        {
            cls                 = 4;
#ifdef _SKILL_CLIENT
            name                = L"Õæ¡¤ÐÜÃ¨±ä";
            nativename          = "Õæ¡¤ÐÜÃ¨±ä";
            icon                = "ÕæÐÜÃ¨±ä.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 0;
            rank                = 20;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 4;
            showorder           = 1514;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (9);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "1°×»¢±ä.sgc";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 4;
            commoncooldowntime  = 2000;
            pre_skills.push_back (std::pair < ID, int >(1980, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            //statestub.push_back (new State2 ());
            //statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill1982Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (100);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 2000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000,5000000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange () + 2 + 0.3 * skill->GetLevel ());
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
            return _snwprintf (buffer, length, format, 100, 90);
            
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
            skill->GetVictim ()->SetProbability (1.0 * 0.4);
            skill->GetVictim ()->SetRatio (2);
            skill->GetVictim ()->SetAmount (0.9);
            skill->GetVictim ()->SetValue (0);
            skill->GetVictim ()->SetTigerform (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetMaxhp ());
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
            return (float) (5);
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