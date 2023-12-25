#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook		phonebook;
	std::string		command;

	while (!std::cin.eof())
	{
		std::cout << "\033[32m ---- PhoneBook ----\033[0m" << std::endl;
		std::cout << "Commands: " << std::endl;
		std::cout << "\033[31mADD \033[0m: To add a contact" << std::endl;
		std::cout << "\033[31mSEARCH \033[0m: To search a contact" << std::endl;
		std::cout << "\033[31mEXIT \033[0m: To exit the program" << std::endl;
		std::cout << "\033[33mEnter a command and press enter: \033[0m";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "\033[31m Invalid command \033[0m" << std::endl;
		std::cin.clear();
	}
}