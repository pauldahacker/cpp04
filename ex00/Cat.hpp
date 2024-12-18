#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

# define CAT_SOUND "Meow meow rrrrr"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &other);
		~Cat(void);

		Cat &operator=(const Cat &);

		void makeSound(void) const;
};

#endif