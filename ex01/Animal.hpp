#pragma once

#include <iostream>
#include <string>


class Animal
{
    protected :
       std::string _type;

    public :
        Animal();
        Animal(const Animal &copy);
       virtual ~Animal();

        Animal &operator=(const Animal &src);
        
        void    makeSound(void) const;
        std::string getType(void) const;
};