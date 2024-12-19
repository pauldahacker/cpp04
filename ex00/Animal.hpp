#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

# define ANIMAL_SOUND "Bing bong"
# define WRONG_ANIMAL_SOUND "Bong bing"

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal &other);
		virtual ~Animal(void);

		Animal &operator=(const Animal &other);

		std::string getType(void) const;
		void setType(std::string name);

		virtual void makeSound(void) const;
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
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal(void);

		WrongAnimal &operator=(const WrongAnimal &other);

		std::string getType(void) const;
		void setType(std::string name);

		void makeSound(void) const;
};

#endif