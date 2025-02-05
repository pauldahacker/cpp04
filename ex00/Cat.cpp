#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Copy Cat constructor called for: " << type << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destroying Cat: " << type << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		type = other.getType();
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << type << ": " << CAT_SOUND << std::endl;
}