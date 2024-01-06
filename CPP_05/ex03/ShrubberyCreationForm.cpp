#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery Creation", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), _target(other._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else {
        std::ofstream outfile((_target + "_shrubbery").c_str());
        outfile << "      /\\\n"
                << "     /\\*\\\n"
                << "    /\\O\\*\\\n"
                << "   /*/\\/\\/\\\n"
                << "  /\\O\\/\\*\\/\\\n"
                << " /\\*\\/\\*\\/\\/\\\n"
                << "/\\O\\/\\/*/\\/O/\\\n"
                << "      ||\n"
                << "      ||\n"
                << "      ||\n";
        outfile.close();
    }
}