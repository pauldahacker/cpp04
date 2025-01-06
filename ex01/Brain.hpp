#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define N_IDEAS 100

struct Brain
{
	public:
		Brain(void);
		Brain(const Brain &other);
		~Brain(void);

		Brain &operator=(const Brain &other);

		std::string	ideas[N_IDEAS];
};

#endif