#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal():_type("default")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
    :_type(copy._type)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	return *this;
}

void WrongAnimal::makeSound(void)const
{
	std::cout << "This WrongAnimal doesn't make any sound." << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return (this->_type);
}