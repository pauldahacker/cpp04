#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Copy Dog constructor called for: " << type << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destroying Dog: " << type << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		type = other.getType();
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << type << ": " << DOG_SOUND << std::endl;
}