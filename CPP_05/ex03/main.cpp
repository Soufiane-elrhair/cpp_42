# include "Intern.hpp"

int main(void)
{
	try {
		Intern someRandomIntern;
		AForm* rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

			try{
				rrf = someRandomIntern.makeForm("robotomyrequest", "Bender");}
			catch(std::exception &e){
				std::cout << e.what() << std::endl;
			}
		
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		delete rrf;
	}
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
