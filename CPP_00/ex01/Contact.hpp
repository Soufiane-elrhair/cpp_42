#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>

class Contact {
private:
    std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	Contact();
	~Contact();
	int setContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	void getContact(void);
	void display_contact(void);
};

#endif