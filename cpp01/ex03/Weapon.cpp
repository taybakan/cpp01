#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	setType(type);
}

Weapon::Weapon(void){
}

void Weapon::setType(std::string type){
	this->type = type;
}

std::string Weapon::getType(void){
	return(this->type);
}