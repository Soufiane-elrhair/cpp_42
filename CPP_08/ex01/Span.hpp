
#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
private:
    unsigned int _N;
    std::vector<int> _vec;
    Span();
    
public:
    Span(unsigned int N);
    Span(Span const &other);
    Span &operator=(Span const &other);
    ~Span();

    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    class FullException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class NoSpanException : public std::exception
    {
        virtual const char *what() const throw();
    };
};