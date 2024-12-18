#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

# define ANIMAL_SOUND "Bing bong"

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

#endif