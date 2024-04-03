/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:52:26 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/24 02:37:18 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ){
}

int opr_doing(std::stack<char> stck, int sum)
{
    int num1 = 0;
    char opr = stck.top();
    stck.pop();
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
    if(opr == '+')
        sum += num1;
    else if(opr == '-')
        sum = num1 - sum;
    else if(opr == '*')
        sum *= num1;
    else if(opr == '/' && sum == 0)
       throw  std::invalid_argument("Error: can't divide by zero");
    else if(opr == '/')
        sum = num1 / sum;
    stck.pop();
    return sum;
}

RPN::RPN( std::string arg ){
    int k =0;
    int number = 0;
    int symble = 0;
    std::stack<char> stck;
    std::string symbles = "+*-/";
    /*while(arg[k] == ' ')
        k++;
    if(!std::isdigit(arg[k]) 
        && arg[k] != ' ' && arg[k] != '-' 
        && arg[k] != '*' && arg[k] != '/' 
        && arg[k] != '+' && arg[k] != ' '){
            throw  std::invalid_argument("Error: this argument don't fellow the Reverse Polish notation");
        }
    stck.push(arg[k]);*/
    if(arg.find_first_not_of("0123456789+*/- ") != std::string::npos)
        throw  std::invalid_argument("Error: this argument don't fellow the Reverse Polish notation.");
    while (arg[k]){
        if(std::strchr("+*/-",arg[k]))
            symble++;
        if(std::isdigit(arg[k]))
            number++;
        if(arg[k] && arg[k] != ' ')
            stck.push(arg[k]);
        if(arg[++k] && arg[k] != ' ' && arg[k - 1] != ' ')
            throw  std::invalid_argument("Error: this argument has a number longer than 1 digits");
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
        
