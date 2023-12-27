/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:28:53 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/17 19:55:30 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact phone[9];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void Add_Contact();
		void Search_Contact();
		void Exit_Phone();
};


#endif
