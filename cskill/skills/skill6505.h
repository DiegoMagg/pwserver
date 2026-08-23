//Skill Parser (c)from elementskill.dll v1.7.4

/* SKILL DESCRIPTION BEGIN */
/*
65050  "Genesis Skill Effect"65051  ""*/
/* SKILL DESCRIPTION END */

#ifndef __CPPGEN_GNET_SKILL6505
#define __CPPGEN_GNET_SKILL6505
namespace GNET
{
#ifdef _SKILL_SERVER
    class Skill6505:public Skill
    {
        public:
        enum
        { SKILL_ID = 6505 };
        Skill6505 ():Skill (SKILL_ID)
        {
        }
    };
#endif
    class Skill6505Stub:public SkillStub
    {
        public:
        Skill6505Stub ():SkillStub (6505)
        {
            cls                 = 14;
#ifdef _SKILL_CLIENT
            name                = L"��������Ч��";
            nativename          = "��������Ч��";
            icon                = "������.dds";
#endif
            max_level           = 10;
            type                = 2;
            apcost              = 0;
            arrowcost           = 0;
            apgain              = 10;
            attr                = 1;
            rank                = 0;
            eventflag           = 0;
            is_senior           = 0;
            posdouble           = 0;
            clslimit            = 0;
            time_type           = 0;
            showorder           = 1501;
            allow_land          = 1;
            allow_air           = 1;
            allow_water         = 1;
            allow_ride          = 0;
            auto_attack         = 0;
            long_range          = 0;
            restrict_corpse     = 0;
            allow_forms         = 2;
            {
                restrict_weapons.push_back (69843);
            }
            {
                restrict_weapons.push_back (0);
            }
#ifdef _SKILL_CLIENT
            effect              = "0";
#endif
            range.type          = 2;
            doenchant           = true;
            dobless             = false;
            commoncooldown      = 0;
            commoncooldowntime  = 0;
            pre_skills.push_back (std::pair < ID, int >(0, 1));
#ifdef _SKILL_CLIENT
            aerial_effect       = "";
            gfxfilename         = "";
            gfxhangpoint        = "0";
#endif
#ifdef _SKILL_SERVER
#endif
        }
        virtual ~ Skill6505Stub ()
        {
        }
        float GetMpcost (Skill * skill) const
        {
            static float aarray[10] = { 2,7,12,17,22,27,32,37,42,47 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetExecutetime (Skill * skill) const
        {
            return 1500;
        }
        int GetCoolingtime (Skill * skill) const
        {
            static int aarray[10] = { 3000,3000,3000,3000,3000,3000,3000,3000,3000,3000 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredLevel (Skill * skill) const
        {
            static int aarray[10] = { 0,5,10,15,20,25,30,35,40,45 };
            return aarray[skill->GetLevel () - 1];
        }
        int GetRequiredSp (Skill * skill) const
        {
            static int aarray[10] = { 0,300,1200,2800,5200,8400,12800,18600,26300,36500 };
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
            return (float) (1);
        }
        float GetPraydistance (Skill * skill) const
        {
            return (float) (0);
        }
#ifdef _SKILL_CLIENT
        int GetIntroduction (Skill * skill, const wchar_t * buffer, int length, const wchar_t * format) const
        {
            return 0;
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
        skill->GetVictim ()->SetTime (16000);
        skill->GetVictim ()->SetShowicon (0);
        skill->GetVictim ()->SetMarcaYin (1); 

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetTime (16000);
        skill->GetVictim ()->SetShowicon (0);
        skill->GetVictim ()->SetMarcaYang (1); 

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (6489);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (6574);
        skill->GetVictim ()->SetSkillcooldown3 (1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (6502);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (6503);
        skill->GetVictim ()->SetSkillcooldown (1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (6634);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (6628);
        skill->GetVictim ()->SetSkillcooldown3 (1);
       
        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (6500);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (6501);
        skill->GetVictim ()->SetSkillcooldown (1);

        skill->GetVictim ()->SetProbability (1.0 * 100);
        skill->GetVictim ()->SetRatio (6494);
        skill->GetVictim ()->SetAmount (500);
        skill->GetVictim ()->SetValue (6622);
        skill->GetVictim ()->SetSkillcooldown3 (1);
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
            return (float) (0);
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