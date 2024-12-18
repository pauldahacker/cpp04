#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    setType("Dog");
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Copy constructor called for Dog: " << getType() << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destroying " << getType() << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		setType(other.getType());
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << getType() << ": " << DOG_SOUND << std::endl;
}