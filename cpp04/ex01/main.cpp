/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:32:30 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
# include "Brain.hpp"

int main(void)
{
    std::cout << "-------------------Main tst-----------------------" << std::endl;
    {

        const Animal *j = new Dog();
        const Animal *i = new Cat();
        delete j; // should not create a leak
        delete i;
    }
    std::cout << "-----------------Half cat Half dog-------------------" << std::endl;
    {
        Animal *array[10];

        for (int i = 0; i < 10; i++)
        {
            if (i % 2 == 0)
                array[i] = new Dog();
            else
                array[i] = new Cat();
        }
        for (int i = 0; i < 10; i++)
            delete array[i];
    }
    std::cout << "------------Deep copy for dog--------------------" << std::endl;
    {
        Dog dog1;
        Dog dog2;

        dog1 = dog2;
    }
    std::cout << "------------Deep copy for cat--------------------" << std::endl;
    {
        Cat cat1;
        Cat cat2;

        cat1 = cat2;
    }

    return 0;
}

