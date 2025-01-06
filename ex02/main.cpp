#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    std::cout << "Subject tests:" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    std::cout << std::endl;

    int n_animals = 6;
    const Animal* animalArray[n_animals];
    for (int i = 0; i < n_animals / 2; ++i)
    {
        animalArray[i] = new Dog();
        animalArray[i + n_animals / 2] = new Cat();
    }
    std::cout << std::endl;
    
    std::cout << "Testing for deep copies:" << std::endl;
    Dog ogDog = Dog();
    Cat ogCat = Cat();

    Dog copyDog = ogDog;
    Cat copyCat = Cat(ogCat);

    std::cout << std::endl << "OG and COPY DOG idea at index 42:" << std::endl;
    std::cout << ogDog.getIdea(42) << std::endl;
    std::cout << copyDog.getIdea(42) << std::endl;
    std::cout << std::endl << "OG and COPY CAT idea at index 42:" << std::endl;
    std::cout << ogCat.getIdea(42) << std::endl;
    std::cout << copyCat.getIdea(42) << std::endl;

    ogDog.setIdea(42, "Woof Woof");
    ogCat.setIdea(42, "Meow Meow");

    std::cout << std::endl << "After changing OG DOG and CAT idea at index 42:" << std::endl;
    std::cout << ogDog.getIdea(42) << std::endl;
    std::cout << copyDog.getIdea(42) << std::endl;
    std::cout << std::endl;
    std::cout << ogCat.getIdea(42) << std::endl;
    std::cout << copyCat.getIdea(42) << std::endl;
    std::cout << std::endl;

    // As required in subject
    for (int i = 0; i < n_animals; ++i)
        delete animalArray[i];
    
    // Uncomment this to see an error
    // Animal animal;
    return 0;
}