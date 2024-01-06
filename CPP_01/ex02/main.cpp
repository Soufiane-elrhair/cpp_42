#include <iostream>
#include <string>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    //stringRef is a reference to str semailaire to nickname or an alias
    std::string &stringREF = str;

    std::cout << &str << " : " << str << std::endl;
    std::cout << stringPTR << " : " << *stringPTR << std::endl;
    std::cout << &stringREF << " : " << stringREF << std::endl;

    
    return (0);
}
