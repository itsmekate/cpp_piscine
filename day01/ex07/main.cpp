/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:59:04 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/03 17:59:05 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void findAndReplaceAll(std::string &data, std::string toSearch, std::string replaceStr)
{
	size_t pos = data.find(toSearch);

	while( pos != std::string::npos)
	{
		data.replace(pos, toSearch.size(), replaceStr);
		pos = data.find(toSearch, pos + toSearch.size());
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "\033[0;31m" << "WRONG NUMBER OF ARGUMENTS" << "\033[0m" << std::endl;
		return (1);
	}
	else
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		
		if (s1.length() == 0 || s2.length() == 0)
		{
			std::cout << "\033[0;31m" << "EMPTY STRING" << "\033[0m" << std::endl;
			return 1;
		}
		if (s1 == s2)
		{
			std::cout << "\033[0;31m" << "EQUAL STRINGS" << "\033[0m" << std::endl;
			return 1;
		}
		std::string line;
		std::string file_content;
 		std::ifstream myfile (filename);

 		std::ofstream outfile (filename + ".replace");

 		if (myfile.is_open())
 		{
 		  while ( getline(myfile,line) )
 		  {
 		    file_content += line;
 		    file_content += '\n';
 		  }
 		  myfile.close();
 		}
 		findAndReplaceAll(file_content, s1, s2);

		outfile << file_content << std::endl;
		outfile.close();
		return (0);
	}
}
