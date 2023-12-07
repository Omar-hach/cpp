/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:28:53 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/04 23:29:17 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		bool set_parameter(std::string param, std::string type);
		std::string get_parameter(std::string type) const;
};

class PhoneBook {
	private:
		Contact phone[9];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void Add_Contact();
		void Search_Contact();
		void Exit_Phone();
		int Search_all_Contact();
};

#endif
