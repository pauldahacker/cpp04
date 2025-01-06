#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define DOG_SOUND "Woof woof"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &other);
		~Dog(void);

		Dog &operator=(const Dog &);

		void		makeSound(void) const;
		std::string	getIdea(int index);
		void		setIdea(int index, std::string newIdea);
	private:
		Brain*	dogBrain;
};

#endif