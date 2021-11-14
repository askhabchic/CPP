/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhyman <fhyman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:56:01 by fhyman            #+#    #+#             */
/*   Updated: 2021/08/18 21:48:07 by fhyman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void){
    std::cout << "Choose one of Karen's levels: ";
    std::string level;
    std::cin >> level;
    Karen Karen;
    Karen.complain(level);
    return 0;
}