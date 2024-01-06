#pragma once

#include <stack>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

template <typename T, typename myContainer=std::deque<T> >
class MutantStack : public std::stack<T, myContainer>
{
	public:
		MutantStack() : std::stack<T, myContainer>(){}
		MutantStack(MutantStack const &other) : std::stack<T, myContainer>(other){}
		MutantStack &operator=(MutantStack const &other)
		{
			if (this != &other)
				std::stack<T, myContainer>::operator=(other);
			return (*this);
		}
		~MutantStack(){}

		typedef typename myContainer::iterator iterator;
		iterator begin() { return (std::stack<T, myContainer>::c.begin()); }
		iterator end() { return (std::stack<T, myContainer>::c.end()); }
};