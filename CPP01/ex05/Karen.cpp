/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhyman <fhyman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:31:29 by fhyman            #+#    #+#             */
/*   Updated: 2021/08/18 23:46:57 by fhyman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void    Karen::debug(void){
    std::cout << "I love to get extra bacon for my burger.\n";
}

void    Karen::info(void){
    std::cout << "I cannot believe adding extra bacon cost more money.\n";
}

void    Karen::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free.\n";
}

void    Karen::error(void){
    std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void    Karen::initIndex(void) {
    _index[0] = "debug";
    _index[1] = "info";
    _index[2] = "warning";
    _index[3] = "error";
}

void    Karen::complain(std::string level){
    int i = 0;
    while (level != _index[i])    {
        if (level == _index[i])
            break ;
        i++;
    }
    switch (i)  {
    case 4:
        std::cout << "Sorry, this is not Karen's level :(\n";
        break ;
    default:
        (this->*this->methods[i])();
        break ;
    }
}

Karen::Karen(void){
    initIndex();
    methods[0] = &Karen::debug;
    methods[1] = &Karen::info;
    methods[2] = &Karen::warning;
    methods[3] = &Karen::error;
}

Karen::~Karen(){
}

