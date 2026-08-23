//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
51880  "ΨMortal Chant"51881  "^ff5c00ΨMortal Chant
　　　　　　　　　　　　　
^ffcb4aRange　^ffffffMelee
^ffcb4aMana　^96f5ff95.6^ffffff
^ffcb4aChannel　^ffffff0.1　^ffcb4asecond(s)
^ffcb4aCast　^ffffff0.7　^ffcb4asecond(s)
^ffcb4aCooldown　^ffffff1.0　^ffcb4asecond(s)
^ffcb4aChi Gained　^ffffff20
^ffcb4aWeapon　^ffffffSword Shield
^ffcb4aGlyph Bonus    ^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　　^ffffffChaotic Soul
Slashes with the heavy sword, dealing Physical Damage to the target equal to
your base Physical Attack plus ^96f5ff50%%^ffffff gear Attack and ^96f5ff7850^ffffff.

^ffeaabArgent Glyph Effect:@1
In Shattered Dream status:
^ffeaabLV1-4: Increases damage by ^96f5ff40%%^ffeaab of your gear Attack.
^ffeaabLV5-7: Increases damage by ^96f5ff60%%^ffeaab of your gear Attack.
^ffeaabLV8-9: Increases damage by ^96f5ff80%%^ffeaab of your gear Attack.
^ffeaabLV10: Increases damage by ^96f5ff100%%^ffeaab of your gear Attack.@1@2
In Shattered Dream status, increases damage by ^96f5ff%d%%^ffeaab of your gear Attack.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5188
#define __CPPGEN_GNET_SKILL5188
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5188:public Skill
    {
        public:
        enum
        { SKILL_ID = 5188 };
        Skill5188 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5188Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
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
                skill->GetPlayer ()->SetDecmp (0.2 * (95.6));
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
                float _glyph_value = get_glyph(skill->GetLevel (), 0.4, 0.6, 0.8, 1);
                float _glyph_value_plus = skill->GetPlayer ()->IsFilterExist (4460) ? _glyph_value : 0;
                
                skill->GetPlayer ()->SetDecmp (0.8 * (95.6));
                skill->SetPlus (7850);
                skill->SetRatio (0.5 + _glyph_value_plus);
                skill->SetDamage (skill->GetAttack ());
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
        Skill5188Stub ():SkillStub (5188)
        {
            cls                 = 13;
#ifdef _SKILL_CLIENT
            name                = L"���˾�ʽ";
            nativename          = "���˾�ʽ";
            icon                = "���˾�ʽ��.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 20;
            attr                = 1;
            rank                = 40;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
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
            effect              = "���_��ͨһ��_����.sgc";
#endif
            range.type          = 0;
            doenchant           = false;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(5133, 1));
            pre_skills.push_back (std::pair < ID, int >(5134, 1));
            runes_attr          = 3;
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
        virtual ~ Skill5188Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (95);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 700;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 1000;
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 100 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 50000000 };
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
            return (float) (skill->GetPlayer ()->GetRange ());
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, skill->GetLevel (), 95.6);
            
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
            return (float) (skill->GetPlayer ()->GetRange () + 10);
        }
#endif
#ifdef _SKILL_SERVER
        int GetAttackspeed (Skill * skill) const
        {
            return 3;
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