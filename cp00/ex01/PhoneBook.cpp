/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:10:07 by ohachami          #+#    #+#             */
/*   Updated: 2023/11/22 16:11:08 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	std::cout <<"enter a command (ADD, SEARCH and EXIT)..."<< std::endl;
	return;
}

void	PhoneBook::Add_Contact(){

	int i = 0;
	int j = 0;
	std::string input;

	while (phone[i].get_parameter("first name").length() > 0)
		i++;
	if(i >= 8)
		i = 0;//problem here
	std::cout <<"enter first name" << std::endl;
	std::getline(std::cin, input);
	phone[i].set_parameter(input, "first name");
	std::cout << input << "i ="<<i<< std::endl;
	std::cout << "enter last name" << std::endl;
	std::getline(std::cin, input);
	phone[i].set_parameter(input, "last name");
	std::cout << input << std::endl;
	std::cout <<"enter nickname" << std::endl;
	std::getline(std::cin, input);
	phone[i].set_parameter(input, "nickname");
	input.clear();
	std::cout <<"enter phone number (numbers only)" << std::endl;
	std::getline(std::cin, input);
	while(phone[i].set_parameter(input, "phone number"))
	{
		input.clear();
		std::cout <<"wrong please enter phone number (numbers only)" << std::endl;
		std::getline(std::cin, input);
	}
	std::cout <<"enter darkest secret" << std::endl;
	std::getline(std::cin, input);
	phone[i].set_parameter(input, "darkest secret");
}

void	PhoneBook::Search_Contact(){
	int i = 0;
	int j;
	std::string reset;
	std::string num;

	while (phone[i].get_parameter("last name").length() > 0)
		i++;
	std::cout <<"enter index" << std::endl;
	std::cin >> j;
	if((j > 9 || j < 0) || j >= i)
		std::cout <<"this index don\'t exit" << std::endl;
	else
	{
		//std::cout << "index|first name|last name|nickname" << std::endl;
		std::cout << j + 1 << "|";
		reset = phone[j].get_parameter("first name") + "|" + phone[j].get_parameter("last name") + "|" + phone[j].get_parameter("nickname");
		if(reset.length() < 8)
		{
			std::cout << reset << "." << std::endl;
			return ;
		}
		std::cout << reset.substr(0, 7) << "." << std::endl;
		reset = reset.substr(7, reset.length() - 7);
		while(reset.length() > 9)
		{
			std::cout << reset.substr(0, 9) << "." << std::endl;
			reset = reset.substr(9, reset.length() - 9);
		}
		std::cout << reset << "." << std::endl;
		/*std::cout << reset.substr(0, 8) << ".";
		std::cout << "." << std::endl;*/
	}
}

void	PhoneBook::Exit_Phone(){
	PhoneBook::~PhoneBook();
}

PhoneBook::~PhoneBook(){
	exit(0);
}
// tab shoul not pass 10
// number in num
// space,tab only in first name
// 
