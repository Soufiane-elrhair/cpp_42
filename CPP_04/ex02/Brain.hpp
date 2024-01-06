#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain
{
    public:
        Brain();
        Brain(Brain const &other);
        Brain &operator=(const Brain &other);
        ~Brain();
        std::string getIdea(int i) const;
        void setIdea(int i, std::string idea);
    private:
        std::string ideas[100];
};

#endif
