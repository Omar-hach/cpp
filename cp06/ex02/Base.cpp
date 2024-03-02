/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:32:52 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/02 03:03:15 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base( void ){
}

Base *generate(void){
    int num;
    srand(time(NULL));
    num = rand();
    if(num % 3 == 1){
        A *ptr = new A();
        return ptr;
    }
    else if(num % 3 == 2){
        B *ptr = new B();
        return ptr;
    }
    else{
        C *ptr = new C();
        return ptr;
    }
}


void identify(Base* p){
    if(p == NULL)
        std::cout << "this is a NULL pointer" << std::endl;
    else if (dynamic_cast<A *>(p))
        std::cout << "the type of this object is A" << std::endl;            
    else if(dynamic_cast<B *>(p))
        std::cout << "the type of this object is B" << std::endl; 
    else if(dynamic_cast<C *>(p))
        std::cout << "the type of this object is C" << std::endl;
    else
        std::cout << "the type of this object is just a base" << std::endl;
}

void identify(Base& p){
    int type = 0;
    try{
        A &obj = dynamic_cast<A &>(p);
        (void)obj;
    }
	catch(std::exception& e) {
		type += 2;
	}
    try{
        B &obj = dynamic_cast<B &>(p);
        (void)obj;
    }
	catch(std::exception& e) {
		type += 1;
	}
    try{
        C &obj = dynamic_cast<C &>(p);
        (void)obj;
    }
	catch(std::exception& e) {
		type += 3;
	}
    if(type == 4)
        std::cout << "the type of this object is A" << std::endl;
    else if(type == 5)
        std::cout << "the type of this object is B" << std::endl;
    else if(type == 3)
        std::cout << "the type of this object is C" << std::endl;
    else
        std::cout << "the type of this object is just a base" << std::endl;
}

