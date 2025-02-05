#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

# define DOG_SOUND "Woof woof"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &other);
		~Dog(void);

		Dog &operator=(const Dog &);

		void makeSound(void) const;
};

#endif