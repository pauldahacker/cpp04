#include "Animal.hpp"

Animal::Animal(void) : type("Default")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string name) : type(name)
{
	std::cout << "Animal constructor called for: " << type << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Copy Animal constructor called for: " << other.type << std::endl;
	*this = other;
}

Animal::~Animal(void)
{
	std::cout << "Destroying Animal: " << type << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		type = other.getType();
	return (*this);
}

std::string Animal::getType(void) const
{
	return (type);
}

void Animal::makeSound(void) const
{
	std::cout << type << ": " << ANIMAL_SOUND << std::endl;
}