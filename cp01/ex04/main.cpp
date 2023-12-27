/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/24 02:50:24 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Sed.hpp"
# include<iostream>
# include<fstream>

std::string new_line(std::string line, std::string old_s, std::string new_s)
{
	std::string new_line;
	size_t start_pos = 0;
	size_t end_pos;

	end_pos = line.find(old_s);
	if(end_pos == std::string::npos)
		return (line);
	while(end_pos != std::string::npos){
		new_line += line.substr(start_pos, end_pos - start_pos) + new_s;
		start_pos = end_pos + old_s.length();
		end_pos = line.find(old_s, start_pos);
	}
	new_line += line.substr(start_pos, line.length());
	return (new_line);
}

int main(int ac, char **av)
{
	std::string line;
	std::string replace;
	std::ifstream infile(av[1]);
	std::ofstream outfile;

	if (ac != 4){
		std::cout << "enter ./main <filename> string1 string2" << std::endl;
		return (0);
	}
	if(!infile.is_open()){
		std::cout << "can't open the file" << std::endl;
		return (0);
	}
	if(infile.peek() == std::ifstream::traits_type::eof()){
		std::cout << "file is empty" << std::endl;
		return (0);
	}
	replace = av[1] + std::string(".replace");
	outfile.open(replace.c_str());
	if(!outfile.is_open()){
		std::cout << "can't open the file" << std::endl;
		return (0);
	}
	while(!infile.eof()){
		getline(infile , line);
		line = new_line(line + "\n", std::string(av[2]), std::string(av[3]));
		outfile << line;
	}
	outfile.close();
}
