#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default Dog constructor called" << std::endl;
	dogBrain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Copy Dog constructor called for: " << type << std::endl;
	dogBrain = new Brain(*other.dogBrain);
}

Dog::~Dog(void)
{
	delete dogBrain;
	std::cout << "Destroying Dog: " << type << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		type = other.getType();
		delete dogBrain;
		dogBrain = new Brain(*other.dogBrain);
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << type << ": " << DOG_SOUND << std::endl;
}

std::string	Dog::getIdea(int index)
{
	return (dogBrain->ideas[index]);
}

void		Dog::setIdea(int index, std::string newIdea)
{
	dogBrain->ideas[index] = newIdea;
}