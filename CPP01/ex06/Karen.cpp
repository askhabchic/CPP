/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhyman <fhyman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:31:29 by fhyman            #+#    #+#             */
/*   Updated: 2021/08/19 00:18:27 by fhyman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void    Karen::debug(void){
    std::cout << "[ DEBUG ]\nI love to get extra bacon for my burger.\n\n";
}

void    Karen::info(void){
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money.\n\n";
}

void    Karen::warning(void){
    std::cout << "[ WARNINIG ]\nI think I deserve to have some extra bacon for free.\n\n";
}

void    Karen::error(void){
    std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n\n";
}

void    Karen::initIndex(void) {
    _index[0] = "DEBUG";
    _index[1] = "INFO";
    _index[2] = "WARNING";
    _index[3] = "ERROR";
}

void    Karen::complain(std::string level){
    int i = 0;
    while (i < 4 && level != _index[i])    {
        if (level == _index[i])
            break ;
        i++;
    }
    switch (i)  {
    case 4:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break ;
    default:
        while (i < 4)
            (this->*this->methods[i++])();
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
