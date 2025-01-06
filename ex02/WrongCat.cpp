#include "Cat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "Copy WrongCat constructor called for: " << type << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destroying WrongCat: " << type << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		type = other.getType();
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << type << ": " << WRONG_CAT_SOUND << std::endl;
}