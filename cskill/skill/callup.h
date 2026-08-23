#ifndef __SKILL_CALLUP_H
#define __SKILL_CALLUP_H

#include <string>

namespace GNET
{

class Callup
{
public:
	int		id;						// Summoner ID
	int		count;					// Number

	int		livetime;				// survival time
	int		hp;						// blood value
	int		attack_mode;			// Attack method 1-point attack 2-sided attack
	bool	restrict_target;		// Do you need a target
	float	rect_length;			// side length of the face attack rectangle

	int		attack;					// attack power
	int		poison;					// poison attack
	int		attack_water;			// Water system attack power
	float	wood_factor;			// Reduce wood defense factor
	float	wood_prob;				// Reduce the probability of wood defense coefficient
	float	fix_prob;				// Fixed probability
	int		defence;				// Defense
	float	velocity;				// Moving speed
	float	interval;				// attack interval
	float	view;					// vision
	float	search_distance;		// Auto find distance
	float	attack_distance;		// attack distance

	Callup(int i=0, int c=0) : id(i), count(c) { }
	Callup(const Callup &rhs) : id(rhs.id), count(rhs.count),
			livetime(rhs.livetime), hp(rhs.hp), attack_mode(rhs.attack_mode),
			restrict_target(rhs.restrict_target), rect_length(rhs.rect_length), attack(rhs.attack),
			poison(rhs.poison), attack_water(rhs.attack_water), wood_factor(rhs.wood_factor),
			wood_prob(rhs.wood_prob), fix_prob(rhs.fix_prob), defence(rhs.defence),
			velocity(rhs.velocity), interval(rhs.interval), view(rhs.view),
			search_distance(rhs.search_distance), attack_distance(rhs.attack_distance) { }
	virtual ~Callup() { }
	Callup& operator = (const Callup& rhs)
	{
		id = rhs.id;
		count = rhs.count;

		livetime = rhs.livetime;
		hp = rhs.hp;
		attack_mode = rhs.attack_mode;
		restrict_target = rhs.restrict_target;
		rect_length = rhs.rect_length;
    
		attack = rhs.attack;
		poison = rhs.poison;
		attack_water = rhs.attack_water;
		wood_factor = rhs.wood_factor;
		wood_prob = rhs.wood_prob;
		fix_prob = rhs.fix_prob;
		defence = rhs.defence;
		velocity = rhs.velocity;
		interval = rhs.interval;
		view = rhs.view;
		search_distance = rhs.search_distance;
		attack_distance = rhs.attack_distance;
		return *this;
	}

	void SetId(int i) { id = i; }
	int GetId() const { return id; }

	void SetCount(int c) { count = c; }
	int GetCount() const { return count; }

	void SetLivetime(int l) { livetime = l; }
	int GetLivetime() const { return livetime; }

	void SetHp(int h) { hp = h; }
	int GetHp() const { return hp; }

	void SetAttackmode(int a) { attack_mode = a; }
	int GetAttackmode() const { return attack_mode; }

	void SetRestricttarget(bool r) { restrict_target = r; }
	bool GetRestricttarget() const { return restrict_target; }

	void SetRectlength(float r) { rect_length = r; }
	float GetRectlength() const { return rect_length; }

	void SetAttack(int a) { attack = a; }
	int GetAttack() const { return attack; }

	void SetPoison(int p) { poison = p; }
	int GetPoison() const { return poison; }

	void SetAttackwater(int a) { attack_water = a; }
	int GetAttackwater() const { return attack_water; }

	void SetWoodfactor(float w) { wood_factor = w; }
	float GetWoodfactor() const { return wood_factor; }

	void SetWoodprob(float w) { wood_prob = w; }
	float GetWoodprob() const { return wood_prob; }

	void SetFixprob(float f) { fix_prob = f; }
	float GetFixprob() const { return fix_prob; }

	void SetDefence(int d) { defence = d; }
	int GetDefence() const { return defence; }

	void SetVelocity(float v) { velocity = v; }
	float GetVelocity() const { return velocity; }

	void SetInterval(float i) { interval = i; }
	float GetInterval() const { return interval; }

	void SetView(float v) { view = v; }
	float GetView() const { return view; }

	void SetSearchdistance(float s) { search_distance = s; }
	float GetSearchdistance() const { return search_distance; }

	void SetAttackdistance(float a) { attack_distance = a; }
	float GetAttackdistance() const { return attack_distance; }

};

}

#endif

