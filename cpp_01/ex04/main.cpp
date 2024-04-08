/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:40:44 by niromano          #+#    #+#             */
/*   Updated: 2024/04/08 21:53:10 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replace(std::string &line, const std::string &s1, const std::string &s2) {
	for (int index = line.find(s1); index != -1; index = line.find(s1, index + s2.length())) {
		line.erase(index, s1.length());
		line.insert(index, s2);
	}
}

int main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	if (s1.empty()) {
		std::cerr << "s1 can't be empty" << std::endl;
		return 1;
	}
	std::ifstream input_file(filename.c_str());
	if (!input_file.is_open()) {
		std::cerr << "Can't open the infile" << std::endl;
		return 1;
	}
	std::ofstream output_file((filename + ".replace").c_str());
	if (!output_file.is_open()) {
		std::cerr << "Can't open the outfile" << std::endl;
		input_file.close();
		return 1;
	}
	std::string	s;
	for(int i = 0; std::getline(input_file, s); i++) {
		if (i != 0)
			output_file << std::endl;
		replace(s, s1, s2);
		output_file << s;
	}
	input_file.close();
	output_file.close();
	return 0;
}
