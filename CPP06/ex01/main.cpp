#include "Data.hpp"

int main(){
    Data data;
    uintptr_t u = serialize(&data);
    std::cout << sizeof(&data) << std::endl;
    std::cout << sizeof(u) << std::endl;
    std::cout << &data << std::endl;
    std::cout << serialize(&data) << std::endl;
    std::cout << deserialize(serialize(&data)) << "\n\n";
    Data data2;
    std::cout << &data2 << std::endl;
    std::cout << serialize(&data2) << std::endl;
    std::cout << deserialize(serialize(&data2)) << std::endl;

    return 0;
}