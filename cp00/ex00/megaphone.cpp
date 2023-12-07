/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:19:15 by ohachami          #+#    #+#             */
/*   Updated: 2023/11/19 13:19:41 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(int av, char **ac)
{
	int i = 0;
	int j = -1;
	//std::string str = ac[1];
	

	//int len = str.lenght();
	if (av == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	else
	{
		while(++i < av)
		{
			j = -1;
			while(ac[i][++j])
				std::cout << (char)toupper(ac[i][j]);
		}
		std::cout <<""<< std::endl;
	}
}
