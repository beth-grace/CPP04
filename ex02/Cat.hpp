#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private :
        Brain *_brain;

    public :
        Cat();
        Cat(const Cat &copy);
        ~Cat();

        Cat &operator=(const Cat &src);

        void    makeSound(void) const;
        std::string    getIdea(void)const;
        void    setIdea(size_t i, std::string idea);
};