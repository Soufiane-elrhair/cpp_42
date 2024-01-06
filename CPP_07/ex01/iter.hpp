#ifndef ITER_HPP
# define ITER_HPP
# include <stddef.h>
# include <iostream>

template <typename T, typename U>
void    iter(T *array, size_t len, U f)
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
