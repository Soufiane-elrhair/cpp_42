#include "Bureaucrat.hpp"
int main(void)
{
    try
    {
        Bureaucrat foo("foo", 0);
        //Bureaucrat bar("bar", 151);
        //Bureaucrat zoo("zoo", 0);
        // foo.incGrade();
        // foo.incGrade();
		std::cout << foo.getGrade() << std::endl;
        /* do some stuff with bureaucrats */
    }
    catch (std::exception &e)
    {
        /* handle exception */
        std::cout << e.what() << std::endl;
    }
    return 0;
}
