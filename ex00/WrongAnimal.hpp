#pragma once

#include <iostream>
#include <string>


class WrongAnimal
{
    protected :
        std::string _type;

    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal &src);
        
        void    makeSound(void) const;
        std::string getType(void) const;
};