#include "Dog.hpp"


Dog::Dog(): Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy),
	_brain(copy._brain)
{
	this->_brain = new Brain();
	this-> _brain = copy._brain;
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this == &copy)
		return *this;
	delete _brain;
	_brain = new Brain(*copy._brain);
	this->_type = copy._type;
	return *this;
}

void	Dog::makeSound(void)const
{
	std::cout << this->getType() << " says: **Woof**" << std::endl;
}

const std::string	Dog::getIdea(size_t i)const
{
	return (this->_brain->getIdea(i));
		
}

void	Dog::setIdea(size_t i, std::string idea)
{
		this->_brain->setIdea(i, idea);
}