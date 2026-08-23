//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
62870  "Î¦ Cragglord"62871  "^ffff00Î¦Cragglordã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€ã€€Level %d

^ffcb4aManaã€€^96f5ff1080^ffffff
^ffcb4aChannelã€€^ffffff0.1ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff180.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffMagic Instrument, Unarmed

^ffcb4aRequired Cultivationã€€^ffffffMaster of Harmony
Summon an elemental warrior to protect you. The Cragglord
attacks your enemies, dealing massive amounts of Fire
and physical damage. Lasts for ^96f5ff50^ffffff seconds.
You can use Energy Leech to draw power from Salvation and shield Mystic and allies within ^96f5ff15^ffffff meters,
increasing ^96f5ff500%%^ffffff Physical Attack and ^96f5ff700%%^ffffff Magic Attack of them for ^96f5ff10^ffffff seconds.
Obtain the effect upon the pet being summoned.


^a6caf0You can use Transference to increase the duration of the Cragglord.

^a6caf0Costs ^ffffff2^a6caf0 Sparks.

^f7dfa5Sage version reduces the Mana cost by ^96f5ff10%%^f7dfa5.
^f7dfa5Sage version increases the Duration by ^96f5ff3^f7dfa5 seconds."*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6287
#define __CPPGEN_GNET_SKILL6287
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6287:public Skill
    {
        public:
        enum
        { SKILL_ID = 6287 };
        Skill6287 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6287Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 100;
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
                skill->GetPlayer ()->SetDecmp (0.2 * 1404);
                skill->GetPlayer ()->SetPray (1);
            }
            bool Interrupt (Skill * skill) const
            {
                return skill->GetRand () < 5;
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
                return 1000;
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
                skill->GetPlayer ()->SetDecmp (0.8 * 1404);
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
        Skill6287Stub ():SkillStub (6287)
        {
            cls                 = 9;
#ifdef _SKILL_CLIENT
            name                = L"Ðþ¡¤ÔÖÐÇ½µÁÙ";
            nativename          = "Ðþ¡¤ÔÖÐÇ½µÁÙ";
            icon                = "»ðÉñÏÂ½ç.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 3;
            rank                = 21;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1423;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (292);
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
            pre_skills.push_back (std::pair < ID, int >(1662, 1));
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
        virtual ~ Skill6287Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (1404);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1000;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 180000,180000,180000,180000,180000,180000,180000,180000,180000,180000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
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
            return (float) (20);
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
            skill->GetVictim ()->SetProbability (1.0 * skill->GetTarget ()->GetValid () == 1 ? 100 : 0);
            skill->GetVictim ()->SetTime (1000);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetToxic (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetRatio (5.0);
            skill->GetVictim ()->SetIncattack (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (6000);
            skill->GetVictim ()->SetRatio (7.0);
            skill->GetVictim ()->SetIncmagic (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (1);
            skill->GetVictim ()->SetRatio (15);
            skill->GetVictim ()->SetAmount (1);
            skill->GetVictim ()->SetValue (18010);
            skill->GetVictim ()->SetAurabless (1);
            
            skill->GetVictim ()->SetTime (55000);
            skill->GetVictim ()->SetRatio (10);
            skill->GetVictim ()->SetValue (64245);
            skill->GetVictim ()->SetSummonpet3 (1);
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
            return (float) (15 + skill->GetLevel ());
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 6;
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