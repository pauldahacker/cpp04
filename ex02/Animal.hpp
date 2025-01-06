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
		virtual void makeSound(void) const = 0;
};

/*
This is wrong because we do not use the virtual keyword for
makeSound() and the base class destructor.
*/
class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal(void);

		WrongAnimal &operator=(const WrongAnimal &other);

		std::string getType(void) const;
		void makeSound(void) const;
};

#endif