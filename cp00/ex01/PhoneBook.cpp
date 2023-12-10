/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:10:07 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/10 06:23:58 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	std::cout <<"enter a command (ADD, SEARCH and EXIT)..."<< std::endl;
	return;
}

int is_num(std::string num)
{
	int j = 0;
	
	while(num[j] == ' ' || num[j] == '\t')
		j++;
	while (num[j] && isdigit(num[j]))
		j++;
	if (num[j] == '+' && num[j] == '-')
		j++;
	while(num[j] == ' ' || num[j] == '\t')
		j++;
	if (j < num.length())
		return (0);
	return (1);
}

void get_input(std::string msg, std::string type, Contact *phone)
{
	int i = 0;
	std::string input;

	std::cout << msg << std::endl;
	std::getline(std::cin, input);
	if(std::cin.eof())
		exit(0);
	while(phone->set_parameter(input, type))
	{
		std::cout << "wrong please " << msg << std::endl;
		std::getline(std::cin, input);
		if(std::cin.eof())
			exit(0);
	}
}

void	PhoneBook::Add_Contact(){

	int i = 0;
	static int index;

	while (phone[i].get_parameter("last name").length() > 0)
		i++;
	if(i >= 3)
	{
		if(index >= 3)
			index = 0;
		i = index;
		index++;
	}
	get_input("enter first name", "first name", &phone[i]);
	get_input("enter last name", "last name", &phone[i]);
	get_input("enter nickname", "nickname", &phone[i]);
	get_input("enter phone number", "phone number", &phone[i]);
	get_input("enter darkest secret", "darkest secret", &phone[i]);
}

void	put_param(std::string param){
	int k = 0;

	if(param.length() < 11){
		while(k++ < 10 - param.length())
			std::cout << " ";
		std::cout << param << "|";
	}
	else{
		std::cout << param.substr(0, 9) << ".|";
	}
}

void	PhoneBook::Search_Contact(){
	int i = 0;
	int j = 0;
	std::string num;

	while (phone[i].get_parameter("last name").length() > 0)
		i++;
	if(i > 3)
		i = 3;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while(j < i){
		std::cout << "|         " << j + 1 << "|";
		put_param(phone[j].get_parameter("first name"));
		put_param(phone[j].get_parameter("last name"));
		put_param(phone[j].get_parameter("nickname"));
		j++;
		std::cout << std::endl << "---------------------------------------------" << std::endl;
	}
	std::cout <<"enter index for more informations" << std::endl;
	std::getline(std::cin, num);
	if(!is_num(num)){
		std::cout <<"this index don\'t exit" << std::endl;
		return;
	}
	j = atoi(num.c_str());
	if(num.length() > 9 || j > 9 || j <= 0 || j >= i + 1)
		std::cout <<"this index don\'t exit" << std::endl;
	else
	{
		j--;
		std::cout << "first name : " << phone[j].get_parameter("first name") << std::endl;
		std::cout << "last name : " << phone[j].get_parameter("last name") << std::endl;
		std::cout << "nickname : " << phone[j].get_parameter("nickname") << std::endl;
		std::cout << "phone number : " << phone[j].get_parameter("phone number") << std::endl;
		std::cout << "darkest secret : " << phone[j].get_parameter("darkest secret") << std::endl;
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
