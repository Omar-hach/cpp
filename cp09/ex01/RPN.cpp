/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:52:26 by ohachami          #+#    #+#             */
/*   Updated: 2024/07/25 23:58:20 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ){
    hit_last = 0;
}

int RPN::opr_doing(std::stack<char> stck, int sum)
{
    int count = 1;
    int num = 0;
    char opr = stck.top();
    stck.pop();
    if(!std::isdigit(stck.top())){
        sum += opr_doing(stck, sum);
        while(!std::isdigit(stck.top())){
            stck.pop();
            count++;
        }
    }
    else
        sum = static_cast<int>(stck.top() - '0');
    while(count--)
        stck.pop();
    if(!std::isdigit(stck.top()))
        num += opr_doing(stck, num);
    else
        num = static_cast<int>(stck.top() - '0');
    if(opr == '+')
        sum += num;
    else if(opr == '-')
        sum = num - sum;
    else if(opr == '*')
        sum *= num;
    else if(opr == '/' && sum == 0)
       throw  std::invalid_argument("Error: can't divide by zero");
    else if(opr == '/')
        sum = num / sum;
    stck.pop();
    if(stck.empty())
        this->hit_last = 1;
    return sum;
}

RPN::RPN( std::string arg )
{
    int k = 0;
    int number = 0;
    int symble = 0;
    std::stack<char> stck;
    std::string symbles = "+*-/";
    if(arg.find_first_not_of("0123456789+*/- ") != std::string::npos)
        throw  std::invalid_argument("Error: this argument don't fellow the Reverse Polish notation.");
    while (arg[k]){
        if(arg[k] == '+' || arg[k] == '-' 
            || arg[k] == '/' || arg[k] == '*')
            symble++;
        if(std::isdigit(arg[k]))
            number++;
        if(arg[k] && arg[k] != ' ')
            stck.push(arg[k]);
        if(arg[++k] && arg[k] != ' ' && arg[k - 1] != ' ')
            throw  std::invalid_argument("Error: this argument has a number longer than 1 digits");
    }
    if(std::isdigit(stck.top()) || (number != symble + 1))
        throw  std::invalid_argument("Error: this argument don't fellow the Reverse Polish notation");
    int result = opr_doing(stck , 0);
    if(!this->hit_last)
        throw  std::invalid_argument("Error: this argument don't fellow the Reverse Polish notation");
    std::cout << result << std::endl;
}

RPN::~RPN( void ){
}

RPN::RPN(const RPN& object){
    *this = object;
}

RPN& RPN::operator=( const RPN& object ){
    (void)object;
    return *this;
}
        
