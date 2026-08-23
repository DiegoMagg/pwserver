//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
33980  "ΨSonic Boom"33981  "^ff5c00ΨSonic Boom　　　　　　　　　　　

^ffcb4aRange　^96f5ff27^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff192^ffffff
^ffcb4aChannel　^ffffff1.2^ffcb4a　seconds
^ffcb4aCast　^ffffff0.8^ffcb4a　second
^ffcb4aCooldown　^ffffff1.0^ffcb4a　second
^ffcb4aChi Gained　^ffffff15
^ffcb4aWeapon　^ffffffScythe, Unarmed
^ffcb4aGlyph Bonus　^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　^ffffffChaotic Soul
Swing your scythe in a supersonic arc, dealing ^96f5ff90%%^ffffff
of base magic damage plus ^96f5ff120%%^ffffff of weapon damage plus
^96f5ff4454^ffffff as Metal damage. Generates a Thunder Charge.
^96f5ffWhile in Reaper Form, damage is increased by ^ffffff33%%.

^ffa4a9Can cast while moving.

^00ff00Verdant Glyph Effect:@1
^00ff00Deals additional damage if the target is monster
^00ff00Lv1-4: Deals an additional ^96f5ff80%%^00ff00 of weapon damage plus ^96f5ff1360^00ff00.
^00ff00Lv5-7: Deals an additional ^96f5ff120%%^00ff00 of weapon damage plus ^96f5ff2040^00ff00.
^00ff00Lv8-9: Deals an additional ^96f5ff160%%^00ff00 of weapon damage plus ^96f5ff2720^00ff00.
^00ff00Lv10: Deals an additional ^96f5ff200%%^00ff00 of weapon damage plus ^96f5ff3400^00ff00.@1@2
^00ff00Deals an additional ^96f5ff%d%%^00ff00 of weapon damage plus ^96f5ff%d^00ff00@2
"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3398
#define __CPPGEN_GNET_SKILL3398
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3398:public Skill
    {
        public:
        enum
        { SKILL_ID = 3398 };
        Skill3398 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3398Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 1150;
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
                skill->GetPlayer ()->SetDecmp (38);
                skill->GetPlayer ()->SetForceCriticalAttack (1);
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
                return 800;
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.8, 1.2, 1.6, 2);
                int _glyph_value_2 = get_glyph(skill->GetLevel (), 1360, 2040, 2720, 3400);
                skill->GetPlayer ()->SetDecmp (154);
                skill->SetPlus (4454 + (skill->GetTarget ()->GetCls () == -1 ? _glyph_value_2 : 0));
                skill->SetRatio (1.2 + (skill->GetTarget ()->GetCls () == -1 ? _glyph_value : 0));
                skill->GetPlayer ()->SetAddball (5);
                skill->SetGolddamage ((skill->GetPlayer ()->GetForm () == 1 ? 1.2 : 0.9) * skill->GetMagicattack ());
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
        Skill3398Stub ():SkillStub (3398)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"��˷��ӽ";
            nativename          = "��˷��ӽ";
            icon                = "��˷��ӽ��.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 15;
            attr                = 2;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1003;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (0);
            }
            {
                restrict_weapons.push_back (44879);
            }
#ifdef _SKILL_CLIENT
            effect              = "����_˷��ӽ_����.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            is_movingcast       = true;
            runes_attr          = 1;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "ֱ���˺�����2.gfx";
            gfxhangpoint        = "HH_bind";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
            statestub.push_back (new State2 ());
            statestub.push_back (new State3 ());
#endif
        }
        virtual ~ Skill3398Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (192);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 802;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 89 };
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
            return (float) (27 + skill->GetPlayer ()->GetPrayrangeplus ());
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
        bool TakeEffect (Skill * skill) const
        {;
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetEffectdistance (Skill * skill) const
        {
            return (float) (36.5 + skill->GetPlayer ()->GetPrayrangeplus ());
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