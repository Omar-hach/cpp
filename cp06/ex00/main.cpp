/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:32:59 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/15 07:54:22 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int av, char **ac)
{
    ScalarConverter sc;
    if(av  != 2)
        return 0;
    std::string str(ac[1]);
    sc.convert(str);
}