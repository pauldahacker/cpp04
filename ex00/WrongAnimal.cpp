#include "Animal.hpp"

WrongAnimal::WrongAnimal(void) : type("Default")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Copy constructor called for WrongAnimal: " << other.type << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destroying WrongAnimal: " << getType() << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		setType(other.type);
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}

void WrongAnimal::setType(std::string name)
{
	type = name;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << getType() << ": " << WRONG_ANIMAL_SOUND << std::endl;
}