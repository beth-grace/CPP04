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

Cat::Cat(const Cat &copy): Animal(),
    _type(copy._type)
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

void	Cat::getIdea(void)const
{
	for (int i = 0; i < 3; i++)
		std::cout << "The idea number " << i << " of the Cat is: " << this->_brain->getIdea(i) << " at the address " << this->_brain->getIdeaAddress(i) << std::endl;
}

void	Cat::setIdea(size_t i, std::string idea)
{
		this->_brain->setIdea(i, idea);
}