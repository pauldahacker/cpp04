#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

# define DOG_SOUND "Woof woof grrrr"

class Dog : public Animal
{
	private:
		std::string	type;
	public:
		Dog(void);
		Dog(std::string name);
		Dog(const Dog &other);
		~Dog(void);

		Dog &operator=(const Dog &);

		void makeSound(void) const;
};

#endif