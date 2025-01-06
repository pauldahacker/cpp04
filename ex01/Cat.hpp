#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define CAT_SOUND "Meow meow"
# define WRONG_CAT_SOUND "Miaw miaw"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &other);
		~Cat(void);

		Cat &operator=(const Cat &);

		void makeSound(void) const;
		std::string	getIdea(int index);
		void		setIdea(int index, std::string newIdea);
	private:
		Brain*	catBrain;
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