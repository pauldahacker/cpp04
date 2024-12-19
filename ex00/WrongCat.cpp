#include "Cat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	setType("WrongCat");
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "Copy constructor called for: " << getType() << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destroying " << getType() << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		setType(other.getType());
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << getType() << ": " << WRONG_CAT_SOUND << std::endl;
}