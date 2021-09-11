#ifndef DATA_HPP
# define DATA_HPP

# include <cstdint>

class Data
{
private:
public:
    Data();
    ~Data();
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};

#endif