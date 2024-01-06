#include <iostream>
#include <fstream> // std::ifstream, std::ofstream 


class Replace
{
    private:
        std::string str1;
        std::string str2;
        std::string filename;
        std::string newfilename;
    public:
        Replace(std::string filename, std::string str1, std::string str2);
        ~Replace();
        void replace();
};