#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "Contact.hpp"
# include <iomanip>
#include <stdlib.h>
class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	add_contact(void);
	void	search_contact(void);
private:
	static int index;
	Contact	contacts[8];
	void dispyaly_contact(int _index);
};


#endif

