#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	setType("Cat");
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Copy constructor called for: " << getType() << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destroying " << getType() << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		setType(other.getType());
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << getType() << ": " << CAT_SOUND << std::endl;
}