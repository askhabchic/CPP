/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhyman <fhyman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:49:21 by fhyman            #+#    #+#             */
/*   Updated: 2021/08/19 20:30:32 by fhyman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string changeFilename(std::string &name){
    for (std::string::iterator p = name.begin(); p != name.end(); ++p)
        *p = towupper(*p);
    name = name.append(".replace");
    return name;
}

std::string findString(std::string str, std::string s1, std::string s2){
    std::stringstream   newStr;
    size_t              pos;
    pos = str.find(s1);
    if (pos == std::string::npos)
        return str;
    newStr << str.substr(0, pos) << s2 << str.substr(pos + s1.length(), std::string::npos);
    std::string newS = newStr.str();
    return findString(newS, s1, s2);
}

void    replace(std::string file, std::string s1, std::string s2)   {
    std::ifstream inf(file);
    if (!inf)  {
        std::cerr << file << "couldn't be opened!\n";
        exit(1);    }
    std::ofstream outf(changeFilename(file));
    if (!outf)   {
        std::cerr << file << "couldn't be opened!\n";
        exit(1);    }
        std::string str;
        while (std::getline(inf, str))
            outf << findString(str, s1, s2) << std::endl;
}

int main(int argc, char **argv){
    std::string file, s1, s2;
    if (argc != 4){
        std::cerr << "Entered invalid number of arguments!\n";
        return 1;
    }
    file = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (s2.find(s1) != std::string::npos)   {
        std::cout << "s2 shouldn't contain s1\n";
        return (1);
    }
    replace(file, s1, s2);
    return 0;
}
