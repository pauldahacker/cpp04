#include "Animal.hpp"

Animal::Animal(void) : type("Default")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Copy constructor called for Animal: " << other.type << std::endl;
	*this = other;
}

Animal::~Animal(void)
{
	std::cout << "Destroying Animal: " << getType() << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		setType(other.type);
	return (*this);
}

std::string Animal::getType(void) const
{
	return (type);
}

void Animal::setType(std::string name)
{
	type = name;
}

void Animal::makeSound(void) const
{
	std::cout << getType() << ": " << ANIMAL_SOUND << std::endl;
}