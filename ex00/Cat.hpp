#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

# define CAT_SOUND "Meow meow rrrrr"
# define WRONG_CAT_SOUND "Miaw miaw rrrrr"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &other);
		~Cat(void);

		Cat &operator=(const Cat &);

		void makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &other);
		~WrongCat(void);

		WrongCat &operator=(const WrongCat &);

		void makeSound(void) const;
};

#endif