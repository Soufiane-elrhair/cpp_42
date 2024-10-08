#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE
#include <fstream>
#include <map>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <limits.h>

class BitcoinExchange
{
	private:
        std::string file;
        std::ifstream   f_data;
        std::ifstream   f_input;
        std::map<std::string, std::string>    data;
        std::map<std::string, std::string>    input;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string in_file);
		BitcoinExchange(const BitcoinExchange& source);
		BitcoinExchange &operator= (const BitcoinExchange& source);
		~BitcoinExchange();
        void    openFiles();
		void	parseInput();
		void    fill_data_map();
		void    closeFiles();
		void	run();
};

#endif