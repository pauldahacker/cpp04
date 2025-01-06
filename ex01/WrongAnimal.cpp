#include "Animal.hpp"

WrongAnimal::WrongAnimal(void) : type("Default")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
	std::cout << "WrongAnimal constructor called for: " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Copy WrongAnimal constructor called for: " << other.type << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destroying WrongAnimal: " << type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << getType() << ": " << WRONG_ANIMAL_SOUND << std::endl;
}