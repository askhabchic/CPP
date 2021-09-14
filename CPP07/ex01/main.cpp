#include "iter.hpp"

int main(){
    Test t[4];
    iter(t, 4, ft_printf);
    std::cout << std::endl;

    int i[] = {5, 9, 6, 2, 7, 0};
    iter(i, 6, ft_printf);
    std::cout << std::endl;

    std::string str[] = {"a", "b", "c", "d"};
    iter(str, 4, ft_printf);
    return 0;
}