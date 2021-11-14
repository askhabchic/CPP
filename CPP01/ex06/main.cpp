/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhyman <fhyman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:56:01 by fhyman            #+#    #+#             */
/*   Updated: 2021/08/19 00:12:22 by fhyman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv){
    if (argc != 2)  {
        std::cout << "Oops, invalid number of arguments!\n";
        return 1;}
    Karen Karen;
    if (argv[1])
    Karen.complain(argv[1]);
    return 0;
}