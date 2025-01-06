#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default Cat constructor called" << std::endl;
	catBrain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Copy Cat constructor called for: " << type << std::endl;
	catBrain = new Brain(*other.catBrain);
}

Cat::~Cat(void)
{
	delete catBrain;
	std::cout << "Destroying Cat: " << type << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		type = other.getType();
		delete catBrain;
		catBrain = new Brain(*other.catBrain);
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << type << ": " << CAT_SOUND << std::endl;
}

std::string	Cat::getIdea(int index)
{
	return (catBrain->ideas[index]);
}

void		Cat::setIdea(int index, std::string newIdea)
{
	catBrain->ideas[index] = newIdea;
}