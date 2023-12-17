/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/17 19:48:36 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Sed.hpp"
# include<iostream>
# include<fstream>


int main(int av, char **ac)
{
    std::string words;
    std::string replace;
    std::ifstream infile(ac[1]);
    std::ofstream outfile;

    if (av != 4){
        std::cout << "enter ./main <filename> string1 string2" << std::endl;
        return (0);
    }
    infile >> words;
    replace = ac[1] + std::string(".replace");
    outfile.open(replace.c_str());
    outfile << words << std::endl;
    outfile.close();
}
