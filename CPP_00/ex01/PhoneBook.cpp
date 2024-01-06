#include "./PhoneBook.hpp"
# include "Contact.hpp"

PhoneBook::PhoneBook():index(0){}
PhoneBook::~PhoneBook(){}

int my_search(std::string str)
{
	int i;
	i = 0;
	for (size_t i = 0; str[i]; i++)
	{
		if (!std::isprint((str[i])))
			return (1);
	}
	while (i < (int)str.length())
	{
		if (str[i] == ' ')
			i++;
		else
			return (0);
	}
	if (str[i - 1] != '\0')
		return (1);
	return (0);
}

void PhoneBook::add_contact(void){
    std::string	contact_data[5];

    std::cout << "--- ADD CONTACT ---" << std::endl;
	while (1)
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, contact_data[0]);
		if (my_search(contact_data[0]))
			continue;
		else
			break;
	}
	while (1)
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, contact_data[1]);
		if (my_search(contact_data[1]))
			continue;
		else
			break;
	}
	while (1)
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, contact_data[2]);
		if (my_search(contact_data[2]))
			continue;
		else
			break;
	}
	while (1)
	{
		std::cout << "Enter phone number: ";
		std::getline(std::cin, contact_data[3]);
		if (my_search(contact_data[3]))
			continue;
		else
			break;
	}
	while (1)
	{
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, contact_data[4]);
		if (my_search(contact_data[4]))
			continue;
		else
			break;
	}
	if (contacts[index].setContact(contact_data[0], contact_data[1], contact_data[2], contact_data[3], contact_data[4]))
		return ;
	this->index = (1 + this->index) % 8;
}

void    PhoneBook::search_contact(void)
{
    std::string	index;

	std::cout << "search contact" << std::endl;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->contacts[i].display_contact();
	}
    std::cout << "\033[33m Enter an index: \033[0m";
    getline(std::cin, index);
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
        contacts[atoi(index.c_str())].getContact();
    else
        std::cout << "Invalid index" << std::endl;
}