#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    try {

        Bureaucrat foo("foo", 11);
        Form boo("boo", 10);
        Form zoo("zoo", 150);

        foo.signForm(boo);
        foo.signForm(zoo);
        std::cout << zoo << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
