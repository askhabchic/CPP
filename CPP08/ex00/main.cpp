#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <string>

int main(){
    std::vector<int> vec;
    for (int i = 0; i < 10; ++i)
        vec.push_back(i * 3);
    try
    {
        easyFind(vec, 13);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::list<char> lst;
    for (int i = 0; i < 10; ++i)
        lst.push_front(i + 65);
    try
    {
        easyFind(lst, 'B');
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::deque<int> deq;
    for (int i = 0; i < 10; ++i){
        deq.push_front(i + 2);
        deq.push_back(i);
    }
    try
    {
        easyFind(deq, 4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}