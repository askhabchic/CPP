#ifndef DATA_HPP
# define DATA_HPP

# include <cstdint>
# include <iostream>
# include <string>

struct Data   {
    int         i;
    float       f;
    double      d;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif