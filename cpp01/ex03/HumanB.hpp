#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		weapon;
public:
	HumanB(std::string name);
	void setName(std::string name);
	void setWeapon(Weapon aweapon);
	std::string	getName(void);
	Weapon getWeapon(void);
	void attack(void);
};
