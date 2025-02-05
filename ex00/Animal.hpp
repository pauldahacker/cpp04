#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define ANIMAL_SOUND "Bing bong"
# define WRONG_ANIMAL_SOUND "Bong bing"

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string name);
		Animal(const Animal &other);
		virtual ~Animal(void);

		Animal &operator=(const Animal &other);

		std::string getType(void) const;
		virtual void makeSound(void) const;
};

/*
This is wrong because we do not use the virtual keyword for
makeSound() and the base class destructor.
*/
class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal(void);

		WrongAnimal &operator=(const WrongAnimal &other);

		std::string getType(void) const;
		void makeSound(void) const;
	protected:
		std::string type;
};

#endif