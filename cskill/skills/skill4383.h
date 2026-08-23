//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
43830  "Î¨Sand Flood"43831  "^ff5c00Î¨Sand Flood

^ffcb4aRangeã€€^96f5ff28.5^ffffffã€€^ffcb4ameters
^ffcb4aManaã€€^96f5ff606^ffffff
^ffcb4aChannelã€€^ffffff0.5ã€€^ffcb4aseconds
^ffcb4aCastã€€^ffffff1.0ã€€^ffcb4asecond
^ffcb4aCooldownã€€^ffffff30.0ã€€^ffcb4aseconds
^ffcb4aWeaponã€€^ffffffSoulsphere
^ffcb4aGlyph Bonusã€€^ff5c00Dragon's Might

^ffcb4aRequired Cultivationã€€^ffffffChaotic Soul
Drown the target in a ^96f5ff12^ffffff-second flood of sand, dealing base
magic damage plus ^96f5ff500%%^ffffff of weapon damage plus ^96f5ff8984^ffffff as Earth damage.
The sand explodes when the effect ends, dealing base
magic damage plus ^96f5ff150%%^ffffff of weapon damage plus ^96f5ff8722^ffffff as Earth damage.

Cannot be a critical strike, but has a chance of
delivering a blow that deals ^96f5ff1.5^ffffff times damage. The chance of delivering this blow will be double the chances of delivering a critical strike.


^a6caf0Costs ^ffffff30^a6caf0 Chi

^ffcb4aGolden Glyph Effect:@1
^ffcb4aLv1-4: Deals an additional ^96f5ff40%%^ffcb4a of weapon damage over time.
^ffcb4aLv5-7: Deals an additional ^96f5ff60%%^ffcb4a of weapon damage over time.
^ffcb4aLv8-9: Deals an additional ^96f5ff80%%^ffcb4a of weapon damage over time.
^ffcb4aLv10: Deals an additional ^96f5ff100%%^ffcb4a of weapon damage over time.@1@2
^ffcb4aDeals an additional ^96f5ff%d%%^ffcb4a of weapon damage over time.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL4383
#define __CPPGEN_GNET_SKILL4383
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill4383:public Skill
    {
        public:
        enum
        { SKILL_ID = 4383 };
        Skill4383 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill4383Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 500;
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
                skill->GetPlayer ()->SetDecmp (121);
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
                skill->GetPlayer ()->SetDecmp (485);
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
        Skill4383Stub ():SkillStub (4383)
        {
            cls                 = 2;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤ºéÉ³ÔáÌì";
            nativename          = "Éñ¡¤ºéÉ³ÔáÌì";
            icon                = "ÉñºéÉ³ÔáÌì»Æ.dds";
#endif
            max_level           = 1;
            type                = 3;
            apcost              = 30;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 6;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 2901;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (25333);
            }
#ifdef _SKILL_CLIENT
            effect              = "Î×Ê¦_·çÑÒÔá¸Ä.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "Ö±½ÓÉËº¦Ôö¼Ó1.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill4383Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (606);
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
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 1000000 };
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
            return (float) (28.5);
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
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetValue (skill->GetT0 () *
            (1 +
            0.01 * (skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () >
            0 ? skill->GetT1 () - skill->GetPlayer ()->GetDefenddegree () : 0)));
            skill->GetVictim ()->SetDelayearthhurt (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (12000);
            skill->GetVictim ()->SetAmount (skill->GetT2 ());
            skill->GetVictim ()->SetFallen (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            float _glyph_value = get_glyph(player->GetSkilllevel (4383), 0.4, 0.6, 0.8, 1);
            
            return (float) ((player->GetPuremagicattack () + (1.5 + _glyph_value) * player->GetEquipattack () + 8722) * (player->GetRand () <
            player->GetCrit () * 2 ? 1.5 : 1));
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetAttackdegree ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent2 (PlayerWrapper * player) const
        {
            return (float) (player->GetMagicattack () + 8984 + 5 * player->GetEquipattack ());
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
            return 7;
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