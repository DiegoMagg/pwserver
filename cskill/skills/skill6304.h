//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
63040  "ΨWings of Protection"63041  "^ff5c00ΨWings of Protection　　　　　　　　　　　　　

^ffcb4aMana　^96f5ff%d^ffffff
^ffcb4aCast　^ffffffInstant
^ffcb4aCooldown　^ffffff60　^ffcb4aseconds
^ffcb4aWeapon　^ffffffUnarmed, Magic Instrument
^ffcb4aGlyph Bonus　^ff5c00Tiger's Rage

^ffcb4aRequired Cultivation　^ffffffCelestial Saint
Winged Elves have long been skilled at using their magical wings to
protect themselves in combat. During the first war against the Wraiths,
the Clerics developed a way to extend this protection to their allies.
Fashion a protective barrier around your ally, absorbing incoming
damage up to ^96f5ff50%%^ffffff of the target's maximum Health. The barrier lasts
for ^96f5ff30^ffffff seconds, or until the absorption limit has been reached.
Also increases the target's movement speed by ^96f5ff50%%^ffffff, and
grants immunity to control effects for ^96f5ff11^ffffffseconds.

^a6caf0Costs ^ffffff20^a6caf0 Chi.

^ff0000Sanguine Glyph Effect:@1
^ff0000Lv1-4: The duration of movement speed up and immunity to control effects
is increased to ^96f5ff12 ^ff0000seconds.
^ff0000Lv5-7: The duration of movement speed up and immunity to control effects
is increased to ^96f5ff13 ^ff0000seconds.
^ff0000Lv8-9: The duration of movement speed up and immunity to control effects
is increased to ^96f5ff14 ^ff0000seconds.
^ff0000Lv10: The duration of movement speed up and immunity to control effects
is increased to ^96f5ff15 ^ff0000seconds.@1@2
The duration of movement speed up and immunity to control effects
is increased to ^96f5ff%d ^ff0000seconds.@2"*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6304
#define __CPPGEN_GNET_SKILL6304
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6304:public Skill
    {
        public:
        enum
        { SKILL_ID = 6304 };
        Skill6304 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6304Stub:public SkillStub
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
                skill->GetPlayer ()->SetDecmp (800);
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
        Skill6304Stub ():SkillStub (6304)
        {
            cls                 = 7;
#ifdef _SKILL_CLIENT
            name                = L"����֮�ػ�";
            nativename          = "����֮�ػ�";
            icon                = "����֮�ػ���.dds";
#endif
            max_level           = 1;
            type                = 2;
            apcost              = 20;
            arrowcost           = 0;
            apgain              = 0;
            attr                = 1;
            rank                = 41;
            eventflag           = 0;
            is_senior           = 1;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 1;
            showorder           = 2652;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 3;
            {
                restrict_weapons.push_back (292);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "�ӻ�.sgc";
#endif
            range.type          = 0;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(920, 1));
            runes_attr          = 3;
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
            statestub.push_back (new State1 ());
#endif
        }
        virtual ~ Skill6304Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            return (float) (800);
        }
        int GetExecutetime (Skill * skill) const
        {
            return 0;
        }
        int GetCoolingtime (Skill * skill) const
        {
            return 60000;
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
            return (float) (30);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, wchar_t * buffer, int length, wchar_t * format) const
        {
            return _snwprintf (buffer, length, format, 800);
            
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
            skill->GetVictim ()->SetTime (30000);
            skill->GetVictim ()->SetAmount (skill->GetPlayer ()->GetMaxhp () / 10 * 5);
            skill->GetVictim ()->SetValue (1);
            skill->GetVictim ()->SetWingshield (1);
            
            int _glyph_value = get_glyph(skill->GetLevel (), 12000, 13000, 14000, 15000);
            
            skill->GetVictim ()->SetTime (_glyph_value);
            skill->GetVictim ()->SetFreemove (1);
            
            skill->GetVictim ()->SetProbability (1.0 * 100);
            skill->GetVictim ()->SetTime (_glyph_value);
            skill->GetVictim ()->SetRatio (0.5);
            skill->GetVictim ()->SetSpeedup (1);
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
            return (float) (35);
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