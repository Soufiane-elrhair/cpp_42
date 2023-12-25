/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:22:16 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
    private:
        T* _array;
        unsigned int _size;

    public:
        Array(){
            _array = new T[NULL];
            _size = 0;
        };
        Array(unsigned int n){
            _array = new T[n];
            _size = n;
        };
        Array(Array const &other){
            _array = new T[other._size];
            _size = other._size;
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = other._array[i];
        };
        ~Array(){
            delete [] _array;
        };

        Array   &operator=(Array const &other){
            if (this != &other)
            {
                delete [] _array;
                _array = new T[other._size];
                _size = other._size;
                for (unsigned int i = 0; i < _size; i++)
                    _array[i] = other._array[i];
            }
            return (*this);
        };
        
        T       &operator[](unsigned int i){
            if (i >= _size)
                throw std::out_of_range("Out of range");
            return (_array[i]);
        };

        unsigned int size() const{
            return (_size);
        };
};


#endif /* ARRAY_HPP */
