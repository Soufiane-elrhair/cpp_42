#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "Contact.hpp"
# include <iomanip>
#include <stdlib.h>
#include <iomanip>
class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	add_contact(void);
	void	search_contact(void);
private:
	int index;
	Contact	contacts[8];
};


#endif

