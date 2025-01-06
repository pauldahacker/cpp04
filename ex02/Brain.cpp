#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Creating Brain" << std::endl;
    for (int i=0; i < N_IDEAS; ++i)
        ideas[i] = "Thought";
}

Brain::Brain(const Brain &other)
{
    std::cout << "Creating Brain using the copy constructor" << std::endl;
    for (int i=0; i < N_IDEAS; ++i)
        ideas[i] = other.ideas[i];
}

Brain::~Brain(void)
{
    std::cout << "Destroying Brain..." << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i=0; i < N_IDEAS; ++i)
            ideas[i] = other.ideas[i];
    }
    return (*this);
}