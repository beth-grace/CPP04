#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main ()
{
	std::cout   << "*************************************************************\n"
				<< "**                   STANDARD BRAIN TESTS                  **\n" 
				<< "*************************************************************" << std::endl;

	
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << std::endl;
	std::cout << "j is a " << j->getType() << std::endl;
	std::cout << "i is a " << i->getType() << std::endl;

	std::cout << std::endl;

	delete j;
	delete i;


	std::cout   << "*************************************************************\n"
				<< "**                      BRAIN ARRAY TESTS                  **\n" 
				<< "*************************************************************" << std::endl;

	const Animal *animalArray[10];
	for (int i = 0; i < 5; i++)
	{
		animalArray[i] = new Dog();
		std::cout << std::endl;
		std::cout << "ARRAY INDEX[" << i << "] : " << animalArray[i]->getType() << std::endl;
		std::cout << std::endl;
	}
	for (int i = 5; i < 10; i++)
	{
		animalArray[i] = new Cat();
		std::cout << std::endl;
		std::cout << "ARRAY INDEX[" << i << "] : " << animalArray[i]->getType() << std::endl;
		std::cout << std::endl;
	}

	std::cout << std::endl << "*************************************************************\n" 
						   << "**                      DEEP COPY TESTS:                   **\n" 
						   << "*************************************************************" << std::endl;

	Dog *a = new Dog();

	a->setIdea(100, "This shouldn't work.");
	a->setIdea(0, "I am an IDEA - YAY!");
	std::cout << "This is the set idea(0) for dog a:  " << a->getIdea(0) << std::endl;
	
	Dog *b = new Dog(*a);
	std::cout << "This is the idea(0) for dog b copied from dog a:   " << b->getIdea(0) << std::endl;
	b->setIdea(0, "I am the NEW IDEA TO REPLACE THE OLD IDEA - YAY!");
	std::cout << "This is the changed idea(0) for dog b: " << b->getIdea(0) << std::endl;
	std::cout << "This is the original idea(0) for dog a: " <<  a->getIdea(0) << std::endl;

	std::cout  << "*************************************************************\n"
			   << "**                          DELETING:                      **\n" 
			   << "*************************************************************" << std::endl;

	delete b;
	delete a;

	for (int i = 0; i < 10; i++)
	{
		delete animalArray[i];
		std::cout << std::endl;
	}
	return (0);
}