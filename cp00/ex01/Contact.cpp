/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:03:25 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/09 07:55:50 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int is_empty(std::string str)
{
	int j = 0;
	
	while(str[j] == ' ' || str[j] == '\t')
		j++;
	if (j < str.length())
		return (1);
	return (0);
}

int is_numbre(std::string num)
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

bool	Contact::set_parameter(std::string param, std::string type){
	int j = 0;

	j = 0;
	if(type == "first name" && is_empty(param)){
		this->first_name = param;
		return (0);
	}
	else if(type == "last name" && is_empty(param)){
		this->last_name = param;
		return (0);
	}
	else if(type == "nickname" && is_empty(param)){
		this->nickname = param;
		return (0);
	}
	else if(type == "darkest secret" && is_empty(param)){
		this->darkest_secret = param;
		return (0);
	}
	else if(type == "phone number" && is_empty(param) && is_numbre(param)){
		this->phone_number = param;
		return (0);
	}
	return (1);
}

std::string	Contact::get_parameter(std::string type) const{
	if(type == "first name")
		return this->first_name;
	else if(type == "last name")
		return this->last_name;
	else if(type == "nickname")
		return this->nickname;
	else if(type == "phone number")
		return this->phone_number;
	else if(type == "darkest secret")
		return this->darkest_secret;
	return NULL;
}