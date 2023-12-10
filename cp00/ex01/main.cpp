/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:03:07 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/09 07:42:04 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// DO NOT PUSH
int	PhoneBook::Search_all_Contact(){
	int i = 0;
	int j = 0;

	while (phone[i].get_parameter("first name").length() > 0)
		i++;
	while(j < i)
	{
		std::cout << j + 1 <<"|"<< phone[j].get_parameter("first name") <<"|"<< phone[j].get_parameter("last name") <<"|"<< phone[j].get_parameter("nickname") << "." << std::endl;
		j++;
	}
	return (1);
}
// DO NOT PUSH

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
		else if(order == "ALL")
			pb.Search_all_Contact();
		std::cout <<"enter a command (ADD, SEARCH and EXIT)..."<< std::endl;
	}
	
}
