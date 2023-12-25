/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:35:22 by selrhair          #+#    #+#             */
/*   Updated: 2023/10/22 15:35:23by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

void _42Tests(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return ;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
}

void _myTests(void)
{
    Array<char> c(5);

    try
    {

        std::cout << "size of c: " << c.size() << std::endl;
        std::cout << "now we try to add 5 elements to arry c" << std::endl;
        for (size_t i = 0; i < c.size(); i++)
            c[i] = i + 65;
        std::cout << "now we try to display the elements of c" << std::endl;
        std::cout << "c[0]: " << c[0] << std::endl;
        std::cout << "c[1]: " << c[1] << std::endl;
        std::cout << "c[2]: " << c[2] << std::endl;
        std::cout << "c[3]: " << c[3] << std::endl;
        std::cout << "c[4]: " << c[4] << std::endl;
        std::cout << "now we try to access c[5] which is out of range" << std::endl;
        std::cout << "c[5]: " << c[5] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    std::cout << "-------- _42Tests: " << std::endl;
    _42Tests();
    std::cout << "\n-------- _myTests:" << std::endl;
    _myTests();
    return 0;
}