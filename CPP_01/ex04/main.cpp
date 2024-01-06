#include <iostream>
#include <fstream>

int	replace(char **av, std::string str)
{
	size_t			pos;
	static bool 	newfile;
	std::ofstream	outfile;

	outfile.open((std::string(av[1]) + ".replace").c_str(), std::ofstream::app);
	if (outfile.fail())
	{
		std::cerr << "Error: Faile to open outfile" << std::endl;
		return (1);
	}
	if (newfile)
		outfile << std::endl;
	newfile = true;
	pos = str.find(av[2]);
	for (size_t i = 0; i < str.size(); i++)
	{
		if (pos == i)
		{
			outfile << av[3];
			i += std::string(av[2]).size() - 1;
			pos = str.find(av[2], i);
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}

int main(int ac, char **av)
{
	std::string str;
	std::ifstream ifile;

	if (ac != 4)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		std::cout << "Try: ./replace [filename] [string to replace] [string to replace with]" << std::endl;
		return (1);
	}
	ifile.open(av[1]);
	if (ifile.fail())
	{
		std::cout << "Error: Failed to open file" << std::endl;
		return (1);
	}
	// if(std::ifstream(std::string(av[1]) + ".replace"))
	// 	std::remove((std::string(av[1]) + ".replace").c_str());
    std::ifstream infile((std::string(av[1]) + ".replace").c_str());
    if (infile.good()) {
        // File exists, perform actions...
		std::remove((std::string(av[1]) + ".replace").c_str());
    }
	while (std::getline(ifile, str))
	{
		if (replace(av, str))
			return (1);
	}
	ifile.close();
	return (0);
}