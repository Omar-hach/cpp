/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:03:07 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/17 16:28:16 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(){
	PhoneBook 	pb;
	std::string order;
	
	while (1)
	{
		std::getline(std::cin, order);
		if(std::cin.eof())
			exit(0);
		if(order == "ADD" )
			pb.Add_Contact();
		else if(order == "SEARCH")
			pb.Search_Contact();
		else if(order == "EXIT")
			pb.Exit_Phone();
		std::cout <<"enter a command (ADD, SEARCH and EXIT)..."<< std::endl;
	}
	
}
