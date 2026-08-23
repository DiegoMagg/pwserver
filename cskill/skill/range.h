#ifndef __SKILL_RANGE_H
#define __SKILL_RANGE_H

#include <string>

namespace GNET
{

class Skill;

#ifdef INTEPRETED_EXPR 
class Range : public Marshal
#else
class Range
#endif
{
public:
	enum Type{
		POINT = 0,
		LINE = 1,
		SELFBALL = 2,
		TARGETBALL = 3,
		SECTOR = 4,
		SELF = 5,
		
		RECTANGLE = 6, // Square Attack
		SELFSPHERE = 7, // Circle around you
		TARGETSPHERE = 8, // Circle around the target
		
		UNC_9 = 9, // skill 3334
		UNC_10 = 10, //Dragon Sweep / Elmslie's Dragon Tail
		UNC_11 = 11, //Lightning strike prayer for Holy Lightning
		
	};
	char	type;	// 0 points 1 line 2 own ball 3 target ball 4 cone 5 own
public:
	Range(char t=1) : type(t) { }

#ifdef INTEPRETED_EXPR 
	std::string		radius_exp;				// Cylindrical radius, or spherical radius
	std::string		attackdistance_exp;		// kill distance
	std::string		angle_exp;				// half angle
	std::string		praydistance_exp;		// Chanting distance
	std::string		effectdistance_exp;		// Maximum effective distance
public:
	Range(const Range &rhs) : type(rhs.type),
			radius_exp(rhs.radius_exp), attackdistance_exp(rhs.attackdistance_exp),
			angle_exp(rhs.angle_exp), praydistance_exp(rhs.praydistance_exp),
			effectdistance_exp(rhs.effectdistance_exp) { }
	Range& operator = (const Range& rhs)
	{
		type = rhs.type;
		radius_exp = rhs.radius_exp;
		attackdistance_exp = rhs.attackdistance_exp;
		angle_exp = rhs.angle_exp;
		praydistance_exp = rhs.praydistance_exp;
		effectdistance_exp = rhs.effectdistance_exp;
		return *this;
	}
	OctetsStream& marshal(OctetsStream &os)	const
	{
		return os << type << radius_exp << attackdistance_exp << angle_exp
				<< praydistance_exp << effectdistance_exp;
	}
	const OctetsStream& unmarshal(const OctetsStream &os)
	{
		return os >> type >> radius_exp >> attackdistance_exp >> angle_exp
				>> praydistance_exp >> effectdistance_exp;
	}
#else
public:
	Range(const Range &rhs) : type(rhs.type){} 
#endif

	bool IsPoint() const { return 0 == type; }
	bool IsLine() const { return 1 == type || 6 == type ; }
	bool IsSelfBall() const { return 2 == type || 7 == type ; }
	bool IsTargetBall() const { return 3 == type || 8 == type; }
	bool IsSector() const { return 4 == type; }
	bool IsSelf() const { return 5 == type; }
	bool NoTarget() const { return 5 == type || 2 == type; }
	
};

}

#endif

