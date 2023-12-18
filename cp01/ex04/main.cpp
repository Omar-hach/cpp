/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarino <omarino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/18 20:13:32 by omarino          ###   ########.fr       */
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
		new_line += line.substr(start_pos, end_pos) + new_s;
		start_pos = end_pos + old_s.length();
		end_pos = line.find(old_s, start_pos + old_s.length());
	}
	new_line += line.substr(start_pos, line.length());
	return (new_line);
}

int main(int av, char **ac)
{
	std::string line;
	std::string replace;
	std::ifstream infile(ac[1]);
	std::ofstream outfile;

	if (av != 4){
		std::cout << "enter ./main <filename> string1 string2" << std::endl;
		return (0);
	}
	replace = ac[1] + std::string(".replace");
	outfile.open(replace.c_str());
	while(!infile.eof()){
		getline(infile , line);
		line = new_line(line, std::string(ac[2]), std::string(ac[3]));
		outfile << line << std::endl;
	}
	outfile.close();
}
