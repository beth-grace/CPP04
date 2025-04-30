#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main ()
{
	std::cout << std::endl << "*************************************************************" << std::endl;
	std::cout << "**                  NICOLE'S RIGHT TESTS:                  **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;
	
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << std::endl;
	std::cout << "j is a " << j->getType() << std::endl;
	std::cout << "i is a " << i->getType() << std::endl;
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

std::cout << std::endl << "*************************************************************" << std::endl;
	std::cout << "**                  NICOLE'S RONG TESTS:                  **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;


	const WrongAnimal *Animol = new WrongAnimal();
	const WrongAnimal *Cart = new WrongCat();

	std::cout << std::endl;

	std::cout << "Animol is a " << Animol->getType() << std::endl;
	Animol->makeSound();

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Cart is a " << Cart->getType() << std::endl;
	Cart->makeSound();

	std::cout << std::endl;
	std::cout << std::endl;

	delete Animol;
	delete Cart;

	std::cout << std::endl;
	std::cout << std::endl;

	return (0);
}