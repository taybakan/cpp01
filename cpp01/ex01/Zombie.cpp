#include "Zombie.hpp"

Zombie::Zombie(void){
	std::cout<< "Constructor is called" << std::endl;
}

void	Zombie::setName(std::string name){
	this->name = name;
}

void	Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){
	std::cout<< "Destructor is called for " << this->name << std::endl;
}
