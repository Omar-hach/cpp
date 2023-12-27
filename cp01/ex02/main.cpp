/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/18 22:55:43 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream>

int main()
{
    std::string     str = "HI THIS IS BRAIN"; 
    std::string     *stringPTR = &str;
    std::string     &stringREF = str;
    
    std::cout << "str of adresse:" << &str << ", and value is " << str <<std::endl;
    std::cout << "stringPTR of adresse:" << stringPTR << ", and value is " << *stringPTR <<std::endl;
    std::cout << "stringREF of adresse:" << &stringREF << ", and value is " << stringREF <<std::endl;
}
