#include "Span.hpp"

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N){}

Span::Span(Span const &other)
{
	*this = other;
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		this->_N = other._N;
		this->_vec = other._vec;
	}
	return (*this);
}

Span::~Span(){}

void Span::addNumber(int n)
{
	if (this->_vec.size() < this->_N)
		this->_vec.push_back(n);
	else
		throw Span::FullException();
}

int Span::shortestSpan()
{
	if (this->_vec.size() < 2)
		throw Span::NoSpanException();
	std::vector<int> tmp = this->_vec;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for (unsigned int i = 2; i < tmp.size(); i++)
	{
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return (min);
}

int Span::longestSpan()
{
	if (this->_vec.size() < 2)
		throw Span::NoSpanException();
	std::vector<int> tmp = this->_vec;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_vec.size() + std::distance(begin, end) > this->_N)
		throw Span::FullException();
	this->_vec.insert(this->_vec.end(), begin, end);
}


const char *Span::FullException::what() const throw()
{
	return ("Error: The Span is full");
}

const char *Span::NoSpanException::what() const throw()
{
	return ("Error: There is no Span to find");
}