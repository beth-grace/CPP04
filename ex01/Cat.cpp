#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Cat Brain allocation failed meow meow meow meow");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	return *this;
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " says: **Meoww**" << std::endl;
}