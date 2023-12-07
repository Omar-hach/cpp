/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 08:03:25 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/07 08:03:27 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	Contact::set_parameter(std::string param, std::string type){
	int j = 0;

	if(type == "first name")
		this->first_name = param;
	else if(type == "last name")
		this->last_name = param;
	else if(type == "nickname")
		this->nickname = param;
	else if(type == "darkest secret")
		this->darkest_secret = param;
	else if(type == "phone number"){
		while (isdigit(param[j]))
			j++;
		if (j < param.length())
			return (1);
		this->phone_number = param;
	}
	return (0);
}

std::string	Contact::get_parameter(std::string type) const{
	if(type == "first name")
		return this->first_name;
	else if(type == "last name")
		return this->last_name;
	else if(type == "nickname")
		return this->nickname;
	return NULL;
}