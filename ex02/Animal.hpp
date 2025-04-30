#pragma once

#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>

class Animal
{
	protected:
		std::string _type;
		Animal();

	public:
		Animal(const Animal &copy);

		virtual ~Animal();

		Animal &operator=(const Animal &src);

		virtual void makeSound(void)const = 0;

		std::string getType(void)const;

};