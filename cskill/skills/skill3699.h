//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
36990  "ΨBlade Tempest"36991  "^ff5c00ΨBlade Tempest

^ffcb4aRange　^96f5ff%d^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aChannel　^ffffff4.0　^ffcb4aseconds
^ffcb4aCast　^ffffff1.0　^ffcb4aseconds
^ffcb4aCooldown　^ffffff30.0　^ffcb4aseconds
^ffcb4aWeapon　^ffffffWand, Unarmed
^ffcb4aGlyph Bonus　^ff5c00Martial Prowess

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Focus your Chi to create dozens of flaming blades
that rain down upon the target and all enemies within^96f5ff12^ffffff meters,
dealing base magic damage plus^96f5ff200%%^ffffff of weapon damage
plus ^96f5ff6200^ffffff as both physical both Physical and Fire damage.
Restores ^96f5ff40^ffffff Chi after use. Has a ^96f5ff50%%^ffffff chance to break the skill or casting of your enemies.


^a6caf0Costs ^ffffff2^a6caf0 Sparks

^00ffffEthereal Glyph Effect@1
^00ffffLv1-4: In ^ffffff10 ^00ffffseconds, reduces the Chi cost of your next ^ffffffΨBlack Ice Dragon Strike^00ffff to ^ffffff160
^00ffffLv5-7: In ^ffffff10 ^00ffffseconds, reduces the Chi cost of your next ^ffffffΨBlack Ice Dragon Strike^00ffff to ^ffffff140
^00ffffLv8-9 In ^ffffff10 ^00ffffseconds, reduces the Chi cost of your next ^ffffffΨBlack Ice Dragon Strike ^00ffffto ^ffffff120
^00ffff Lv10 : In ^ffffff10 ^00ffffseconds, reduces the Chi cost of your next ^ffffffΨBlack Ice Dragon Strike ^00ffffto ^ffffff100@1@2
^00ffffIn ^ffffff10 ^00ffffseconds, reduces the Chi cost of your next ^ffffffΨBlack Ice Dragon Strike ^00ffffto ^ffffff%d@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3699
#define __CPPGEN_GNET_SKILL3699
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3699:public Skill
    {
        public:
        enum
        { SKILL_ID = 3699 };
        Skill3699 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3699Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 4000;
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
                skill->GetPlayer ()->SetDecmp (524);
                skill->SetPlus (6200);
                skill->SetRatio (2);
                skill->SetFiredamage (skill->GetMagicattack ());
                skill->SetPlus (6200);
                skill->SetRatio (2);
                skill->SetDamage (skill->GetMagicattack ());
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
        Skill3699Stub ():SkillStub (3699)
        {
            cls                 = 1;
#ifdef _SKILL_CLIENT
            name                = L"�񡤻𺣵�ɽ";
            nativename          = "�񡤻𺣵�ɽ";
            icon                = "�񡤻𺣵�ɽ��.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 40;
            attr                = 5;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1208;
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
            effect              = "��ʦ_��_�𺣵�ɽ_����.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            runes_attr          = 2;
            feature             = 107;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "����״̬Ч����ǿ1.gfx";
            gfxhangpoint        = "HH_spine";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3699Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (655);
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
            static int aarray[10] = { 2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000,2000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredItem (Skill * skill) const
        {
            static int aarray[10] = { 11208,11208,11208,11208,11208,11208,11208,11208,11208,11208 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (12);
        }
        float GetAttackdistance (Skill * skill) const
        {
            return (float) (7);
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
            return _snwprintf (buffer, length, format);
        }
#endif
#ifdef _SKILL_SERVER
        int GetEnmity (Skill * skill) const
        {
            return 10000;
        }
#endif
#ifdef _SKILL_SERVER
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * 50);
            skill->GetVictim ()->SetBreak (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            
            int _glyph_value = get_glyph(skill->GetLevel (), 40, 60, 80, 100); // Necessário fazer ocálculo por conta da descrição
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (10100);
            skill->GetVictim ()->SetAmount (3702); //Skill
            skill->GetPlayer ()->SetValue (108); // Feature
            skill->GetVictim ()->SetRatio (_glyph_value); //Percent
            skill->GetVictim ()->SetGlyphApCost (1);
            
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
            return (float) (36);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 11;
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