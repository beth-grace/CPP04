#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy),
	_brain(copy._brain)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &copy)
		return *this;
	delete _brain;
	_brain = new Brain(*copy._brain);
	this->_type = copy._type;
	return *this;
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " says: **Meoww**" << std::endl;
}

const std::string	Cat::getIdea(size_t i) const
{
	return (this->_brain->getIdea(i));
		
}

void	Cat::setIdea(size_t i, std::string idea)
{
		this->_brain->setIdea(i, idea);
}