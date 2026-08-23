//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
34710  "ΨSupercell"34711  "^ff5c00ΨSupercell

^ffcb4aRange　^96f5ff27^ffffff　^ffcb4ameters
^ffcb4aMana　^96f5ff594^ffffff
^ffcb4aChannel　^ffffff3.5^ffcb4a　seconds
^ffcb4aCast　^ffffff1.4^ffcb4a　second
^ffcb4aCooldown　^ffffff30.0^ffcb4a　seconds
^ffcb4aWeapon　^ffffffScythe, Unarmed
^ffcb4aGlyph Bonus　^ff5c00Martial Prowess

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Bombard all enemies within ^96f5ff10^ffffff meters of your target
with an intense storm, dealing base magic damage plus
^96f5ff230%%^ffffff of weapon damage plus ^96f5ff5694^ffffff
as Metal damage. Has additional effects
based on your charges.

^96f5ff3^ffffff Thunder: Also deals base magic damage
plus ^96f5ff230%%^ffffff of weapon damage plus ^96f5ff5694^ffffff.
^96f5ff3^ffffff Ice: Freezes targets for ^96f5ff4^ffffff seconds.
^96f5ff2^ffffff Thunder, ^96f5ff1^ffffff Ice: Increases your
skill damage by ^96f5ff30%%^ffffff for ^96f5ff20^ffffff seconds.
^96f5ff1^ffffff Thunder, ^96f5ff2^ffffff Ice: Heals half your maximum Health
and reduces damage taken by ^96f5ff40%%^ffffff for ^96f5ff6^ffffff seconds.

Has a ^96f5ff25%%^ffff00 chance to activate a second Supercell
with a ^96f5ff2.5^ffff00-second channel that deals half damage
and costs 0 Chi. Lasts ^96f5ff30^ffff00 sec.

^a6caf0Costs ^ffffff2^a6caf0 Sparks.

^00ffffEthereal Glyph Effect:@1
If you have ^ffffff2 Thunder Charges and 1 Ice Charge^00ffff, both Supercells will increase your skill damage.
^00ffffLv1-4: Skill damage increased by ^ffffff40%%^00ffff for ^ffffff6^00ffff seconds.
^00ffffLv5-7: Skill damage increased by ^ffffff60%%^00ffff for ^ffffff6^00ffff seconds.
^00ffffLv8-9: Skill damage increased by ^ffffff80%%^00ffff for ^ffffff6^00ffff seconds.
^00ffffLv10: Skill damage increased by ^ffffff100%%^00ffff for ^ffffff6^00ffff seconds.@1@2
If you have ^ffffff2 Thunder Charges and 1 Ice Charge^00ffff, for ^ffffff6^00ffff seconds, both Supercells
will increase your skill damage by ^ffffff%d%%^00ffff.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL3471
#define __CPPGEN_GNET_SKILL3471
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill3471:public Skill
    {
        public:
        enum
        { SKILL_ID = 3471 };
        Skill3471 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill3471Stub:public SkillStub
    {
        public:
#define get_glyph(level, l1_4, l5_7, l8_9, lmax) level >= 1 && level <= 4 ? l1_4 : level >= 5 && level <= 7 ? l5_7 : level >= 8 && level <= 9 ? l8_9 : lmax;
        
#ifdef _SKILL_SERVER
        class State1:public SkillStub::State
        {
            public:
            int GetTime (Skill * skill) const
            {
                return 3467;
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
                skill->GetPlayer ()->SetDecmp (119);
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
                return 1402;
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
                skill->GetPlayer ()->SetDecmp (475);
                skill->SetPlus (5694);
                skill->SetRatio (2.3);
                skill->SetGolddamage (skill->GetMagicattack ());
                skill->SetDamage ((skill->GetPlayer ()->GetBalls () == 15 ? 1 : 0) * skill->GetMagicattack ());
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
        Skill3471Stub ():SkillStub (3471)
        {
            cls                 = 11;
#ifdef _SKILL_CLIENT
            name                = L"�񡤵��µӻ�";
            nativename          = "�񡤵��µӻ�";
            icon                = "�񡤵��µӻ���.dds";
#endif
            max_level           = 1;
            type                = 1;
            apcost              = 200;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 2;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1026;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (44879);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "��_���µӻ�_����.sgc";
#endif
            range.type          = 3;
            doenchant           = true;
            dobless             = true;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            combosk_nobreak     = 1;
            runes_attr          = 1;
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
        virtual ~ Skill3471Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (594);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1402;
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
            static int aarray[10] = { 30000000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredMoney (Skill * skill) const
        {
            static int aarray[10] = { 10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000,10000000 };
            return aarray[skill->GetLevel () - 1];
        }
        float GetRadius (Skill * skill) const
        {
            return (float) (10);
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
        bool StateAttack (Skill * skill) const
        {
            skill->GetVictim ()->SetProbability (1.0 * skill->GetPerformerCurBalls () == 3 ? 100 : 0);
            skill->GetVictim ()->SetTime (5402);
            skill->GetVictim ()->SetShowicon (1);
            skill->GetVictim ()->SetGeloAtiradora (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        bool BlessMe (Skill * skill) const
        {
            /*skill->GetVictim ()->SetProbability (1.0 * 25);
            skill->GetVictim ()->SetTime (31000);
            skill->GetVictim ()->SetValue(3468);
            skill->GetVictim ()->SetAmount(3471);
            skill->GetVictim ()->SetGlyphComboSkill(1);*/
            
            float _glyph_value = get_glyph(skill->GetLevel (), 0.4, 0.6, 0.8, 1);
            
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 () == 11 ? 100 : 0);
            skill->GetVictim ()->SetTime (7000);
            skill->GetVictim ()->SetValue (_glyph_value);
            skill->GetVictim ()->SetskillplusTM (1);
            
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 () == 7 ? 100 : 0);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetScaleinchp (1);
            
            skill->GetVictim ()->SetProbability (1.0 * skill->GetT0 () == 7 ? 100 : 0);
            skill->GetVictim ()->SetTime (7401);
            skill->GetVictim ()->SetRatio (0.4);
            skill->GetVictim ()->SetDechurt (1);
            return true;
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent0 (PlayerWrapper * player) const
        {
            return (float) (player->GetBalls ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetTalent1 (PlayerWrapper * player) const
        {
            return (float) (player->GetMagicattack ());
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
            return (float) (38 + skill->GetPlayer ()->GetPrayrangeplus ());
        }
#endif
#ifdef _SKILL_SERVER
        float GetHitrate (Skill * skill) const
        {
            return (float) (1.0);
        }
#endif
#ifdef _SKILL_SERVER
        void ComboSkEndAction (Skill * skill) const
        {
            skill->GetPlayer ()->GetComboarg ()->SetValue (0, skill->GetPlayer ()->GetRand ());
			return;
        }
#endif
    };
}
#endif