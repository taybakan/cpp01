#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	setName(name);
}

void	HumanB::setName(std::string name){
	this->name = name;
}

std::string	HumanB::getName(void){
	return(this->name);
}

void	HumanB::setWeapon(Weapon aweapon){
	this->weapon = aweapon;
}

Weapon	HumanB::getWeapon(void){
	return(this->weapon);
}

void	HumanB::attack(void){
	std::string	wType;
	std::string	name;

	wType = this->weapon.getType();
	name = getName();

	std::cout << name << " attacked with " << wType << std::endl;
}