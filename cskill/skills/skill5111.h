//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
51110  "Î”Landslide Gallop"51111  "^ff0000Î”Landslide Gallop  ã€€ã€€ã€€ã€€ã€€ã€€Lv.%d|if&dynskilllv()>0&^ffcb4a +%d&|

^ffcb4aManaã€€^96f5ff278^ffffff
^ffcb4aChannelã€€^ffffff0.6   ^ffcb4aseconds
^ffcb4aCooldownã€€^ffffff300  ^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffSword Shield
^ffcb4aCost Itemã€€^96f5ffSubsiding Dirt^ffffff

^ffcb4aRequired Cultivationã€€^ffffffAware of Vacuity
My shield shall be my horse, and lead me into the bloodshed.
Increases your movement speed by ^96f5ff100%%^ffffff and evades debuff.
Also lowers your damage taken by ^96f5ff50%%^ffffff. For every second,
deals base physical damage to all enemies within ^96f5ff8^ffffff meters
plus ^96f5ff110%%^ffffff of weapon damage plus ^96f5ff6406^ffffff physical damage.
Lasts^96f5ff|if&(skilllv()+dynskilllv())<2&10&20|^ffffff seconds.
Interrupted when Mana is exhausted or when ESC is pressed.

^ffa4a9Can be cast during movement.

|if&(skilllv()+dynskilllv())>2&^ffffffLv 3: When using the skill, immediately reset the cooldown of Shield of Cataclysm,
Shield of Rejection, Shield of Halo,
Shield of Imprecation, and Shield of Monstrosity.
Restores
^96f5ff50^ffffff Shield Energy after use.
&^808080Lv3: When using the skill, immediately reset the cooldown of Shield of Cataclysm,
Shield of Rejection, Shield of Halo,
Shield of Imprecation, and Shield of Monstrosity.
Restores
50 Shield Energy after use.|"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5111
#define __CPPGEN_GNET_SKILL5111
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5111:public Skill
    {
        public:
        enum
        { SKILL_ID = 5111 };
        Skill5111 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5111Stub:public SkillStub
    {
        public:
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 600;
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
                skill->GetPlayer ()->SetPerform (2);
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
                return 1500;
            }
            bool Quit (Skill * skill) const
            {
                return false;
            }
            bool Loop (Skill * skill) const
            {
                return skill->GetPlayer ()->GetMp () > 279 && skill->GetSection () < (skill->GetLevel () == 1 ? 8 : 16);
            }
            bool Bypass (Skill * skill) const
            {
                return false;
            }
            void Calculate (Skill * skill) const
            {
                skill->SetSection (skill->GetSection () + 1);
                skill->GetPlayer ()->SetDecmp (278);
                skill->SetPlus (6406);
                skill->SetRatio (4.3);
                skill->SetDamage (skill->GetAttack ());
                skill->GetPlayer ()->SetCombat (1);
                skill->GetPlayer ()->SetPerform (0);
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
        class State4:public SkillStub::State
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
        Skill5111Stub ():SkillStub (5111)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"´´ÊÀ¡¤Å­Âí±¼À½";
            nativename          = "´´ÊÀ¡¤Å­Âí±¼À½";
            icon                = "´´ÊÀÅ­Âí±¼À½.dds";
#endif
            max_level           = 2;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 8;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 2;
            showorder           = 0;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59830);
            }
#ifdef _SKILL_CLIENT
            effect              = "´´ÊÀ³å·æÏÝÕó_»÷ÖÐ.sgc";
#endif
            range.type          = 7;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            is_movingcast       = true;
            itemcost            = 49982;
            itemcostcount       = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
            statestub.push_back (new State4 ());
#endif
        }
        virtual ~ Skill5111Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (278);
        }
        int GetExecutetime (Skill * skill) const
        {
            return -1;
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
            static int aarray[10] = { 60736,60737,60737,60737,60737,60737,60737,60737,60737,60737 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (9);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (8);
        }
        float GetAngle (Skill * skill) const
        {
            return (float) (1 - 0.0111111 * (0));
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (skill->GetPlayer ()->GetRange () + 50);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format , 278, 278, 4800);
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 0;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * skill->GetSection () < 2 ? 100 : 0);
            skill->GetVictim ()->SetTime (skill->GetLevel () == 1 ? 11000 : 21000);
            skill->GetVictim ()->SetAmount (0.5); // Defesa
            skill->GetVictim ()->SetRatio (1); // Speed
            skill->GetVictim ()->SetUltimatePaladin (1);
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
            return 30;
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