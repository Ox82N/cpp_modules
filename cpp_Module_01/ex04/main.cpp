/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:25:06 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/03 23:36:22 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <regex>

std::string replaceText(std::string line, std::string text_to_replace, std::string replace_text) {
	return std::regex_replace(line, std::regex(text_to_replace), replace_text);
}

int main(int ac, char **av)
{
	std::string text_before_replace;
	std::string name_of_new_file;

	if(ac != 4)
		return (std:: cout << "the number of argument Shoud be 4 !!", 1);

	name_of_new_file = std::string(av[1]) + ".replace_file";

	std::ifstream oldFile(av[1]); // ifdtream is used to read from a file 
	if (!oldFile)
		return (std::cout << "There is NO file to read !!\n", 0);

	std::ofstream newFile(name_of_new_file); // ofstream is used to create files and to write information to files
	if (!newFile)
		return (std::cout << "Can't create a new file!\n", 0);

	while (getline(oldFile, text_before_replace))
		newFile << replaceText(text_before_replace, av[2], av[3]) << std::endl;

	oldFile.close(); // close is used to close the file after reading or writing
	newFile.close();
	return 0;
}
/* regex_replace is used to replace the text in the file with the text we want to replace it with */


// parameter of regex_replace() function
// 1. string : It is the string in which we want to replace the text.
// 2. regex : It is the regular expression which is used to find the text to be replaced.
// 3. string : It is the string which is used to replace the text found by the regular expression. */
