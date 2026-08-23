//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
50860  "Î¨Sparrow Flap"50861  "^ffff00Î¨Sparrow Flap

^ffcb4aManaã€€^96f5ff210^ffffff
^ffcb4aChannelã€€^ffffffInstant
^ffcb4aCooldownã€€^ffffff1.0ã€€^ffcb4asecond(s)
^ffcb4aWeaponã€€^ffffffFirearm

If you are within ^96f5ff50^ffffff meters from the decoy, you can
return to its location. Also gains a Life Straggler effect. The effect is similar
to Burning Flutter. "*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL5086
#define __CPPGEN_GNET_SKILL5086
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill5086:public Skill
    {
        public:
        enum
        { SKILL_ID = 5086 };
        Skill5086 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill5086Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
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
                skill->GetPlayer ()->SetDecmp (210);
                skill->GetPlayer ()->SetDecShadowRollback (1);
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
        Skill5086Stub ():SkillStub (5086)
        {
            cls                 = 12;
#ifdef _SKILL_CLIENT
            name                = L"Éñ¡¤Èµ·µð½»Ø";
            nativename          = "Éñ¡¤Èµ·µð½»Ø";
            icon                = "ÉñÑæÎèð½»ØÂÌ.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 2904;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 1;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 1;
            {
                restrict_weapons.push_back (59831);
            }
#ifdef _SKILL_CLIENT
            effect              = "";
#endif
            range.type          = 5;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
            combosk_preskill    = 5059;
            combosk_interval    = 10000;
            is_inherent         = true;
            feature             = 1303;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill5086Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (210);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 500;
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
            static int aarray[10] = { 1500000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000,1500000 };
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
            return (float) (50);
        }
        bool CheckComboSkExtraCondition (Skill * skill) const
        {
            return true;
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
            int _glyph_value = get_glyph(skill->GetPlayer ()->GetSkilllevel(5059), 20, 30, 40, 50);
            
            //skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer()->IsFilterExist(4711) ? 100 : 0);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (5100);
            skill->GetVictim ()->SetRatio (_glyph_value); //Percent
            skill->GetVictim ()->SetGlyphCritical2 (1);
            
            //skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer()->IsFilterExist(4711) ? 100 : 0);
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (5100);
            skill->GetVictim ()->SetAmount (5040); //Skill (Ind) --
            skill->GetVictim ()->SetValue (5024); //Skill2 (Presa) --
            skill->GetVictim ()->SetNewValue (5030); //Skill3 (Neon) --
            skill->GetVictim ()->SetNewValue2 (5046); //Skill4 (Caos) --
            skill->GetVictim ()->SetNewValue3 (5006); //Skill5 (Banimento) --
            skill->GetVictim ()->SetNewValue4 (5012); //Skill6 (Fluxo) --
            skill->GetVictim ()->SetNewValue5 (5018); //Skill7 (AfeiÃ§Ã£o) --
            skill->GetVictim ()->SetNewValue6 (6898); //Skill8 (Grito)
            skill->GetVictim ()->SetNewValue7 (6382); //Skill9 (MarÃ©)
            skill->GetVictim ()->SetRatio (100); //Percent
            skill->GetVictim ()->SetGlyphCriticalAtr (1);
            
            //skill->GetVictim ()->SetProbability (1.0 * skill->GetPlayer()->IsFilterExist(4711) ? 100 : 0);
            //skill->GetVictim ()->SetTime (1000);
            //skill->GetVictim ()->SetDecShadowRollback (1);
            
            //skill->GetVictim ()->SetProbability (1.0 * 100);
            //skill->GetVictim ()->SetGlyphJumpRollbackDec (1);
            
            return true;
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
            return (float) (50);
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