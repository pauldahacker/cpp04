#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    std::cout << "Subject tests:" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;

    std::cout << "Tests with WrongCat and WrongAnimal:" << std::endl;
    const WrongAnimal* metaWrong = new WrongAnimal();
    const WrongAnimal* iWrong = new WrongCat();
    std::cout << iWrong->getType() << " " << std::endl;
    iWrong->makeSound(); // will output the WrongAnimal sound!
    metaWrong->makeSound(); // will output the WrongAnimal sound too!
    delete metaWrong;
    std::cout << std::endl;
    
    std::cout << "Difference between constructing WrongCat to a WrongAnimal vs a WrongCat pointer" << std::endl;
    const WrongCat* iCat = new WrongCat();
    std::cout << iCat->getType() << " " << std::endl; // iCat is a WrongCat pointer, so its type is WrongCat
    std::cout << iWrong->getType() << " " << std::endl; // iWrong is a WrongAnimal pointer, but its type is WrongCat
    iCat->makeSound(); // will output the WrongCat sound!
    iWrong->makeSound(); // will output the WrongAnimal sound!

    std::cout << std::endl << "output when deleting WrongAnimal pointer:" << std::endl;
    delete iWrong;
    std::cout << std::endl << "output when deleting WrongCat pointer:" << std::endl;
    delete iCat;
    return (0);
}