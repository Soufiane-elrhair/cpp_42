/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:56:13 by selrhair          #+#    #+#             */
/*   Updated: 2023/10/23 14:55:45y selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <stddef.h>
# include <iostream>

template <typename T>
void    iter(const T *array, size_t len, void (*f)(const T&))
{
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void    show(const T &x)
{
    std::cout << x << std::endl;
}


#endif /* ITER_HPP */
