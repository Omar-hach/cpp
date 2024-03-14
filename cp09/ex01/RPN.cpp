/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:52:26 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/14 00:54:40 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ){
}

int opr_doing(std::stack<char> stck, int sum)
{
    int num1 = 0;
    char total = stck.top();
    stck.pop();
    if(stck.size() == 0)
        return sum;
    if(!std::isdigit(stck.top())){
        sum += opr_doing(stck, sum);
        stck.pop();
        stck.pop();
    }
    else
        sum = static_cast<int>(stck.top() - '0');
    stck.pop();
    if(!std::isdigit(stck.top())){
        num1 += opr_doing(stck, num1);
    }
    else
        num1 = static_cast<int>(stck.top() - '0');
    if(total == '+')
        sum = sum + num1;
    else if(total == '-')
        sum = num1 - sum;
    else if(total == '*')
        sum = sum * num1;
    else if(total == '/')
        sum = num1 / sum;
    if(stck.size() > 0)
        stck.pop();
    return sum;
}

RPN::RPN( std::string opr ){
    int k =0;
    int number = 0;
    int symble = 0;
    std::stack<char> stck;
    /*while(opr[k] == ' ')
        k++;
    if(!std::isdigit(opr[k]) 
        && opr[k] != ' ' && opr[k] != '-' 
        && opr[k] != '*' && opr[k] != '/' 
        && opr[k] != '+' && opr[k] != ' '){
            throw  std::invalid_argument("Error: this argument don't fellow the Reverse Polish notation");
        }
    stck.push(opr[k]);*/
    while (opr[k]){
        if(!std::isdigit(opr[k]) && opr[k] != '-' 
        && opr[k] != '*' && opr[k] != '/' 
        && opr[k] != '+' && opr[k] != ' '){
            throw  std::invalid_argument("Error: this argument don't fellow the Reverse Polish notation");
        }
        if(opr[k] == '-' || opr[k] == '*' || opr[k] == '/' 
        || opr[k] == '+')
            symble++;
        if(std::isdigit(opr[k]))
            number++;
        if(opr[k] && opr[k] != ' ')
            stck.push(opr[k]);
        if(opr[++k] && opr[k] != ' ' && opr[k - 1] != ' ')
            throw  std::invalid_argument("Error: this argument has a number longer than 2 digits");
    }
    if(std::isdigit(stck.top()) || (number - symble != 1))
        throw  std::invalid_argument("Error: this argument don't fellow the Reverse Polish notation");
    /*while(stck.size() != 0)
    {
        std::cout << stck.top() <<  "=size(" << stck.size() << ")" << std::endl;
        stck.pop();
    }*/
    std::cout << opr_doing(stck , 0) << std::endl;
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
        
