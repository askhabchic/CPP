#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class NotFound : public std::exception{
    virtual const char* what() const throw(){
        return "Not found!";    };
};

template <typename T> void easyFind(T &cnt, int val){
    typename T::iterator itr = std::find(cnt.begin(), cnt.end(), val);
    if (itr != cnt.cend()){
        std::cout << "Element <" << *itr << "> is found and equal to the [" << val << "].\n";
        return ;
    }
    throw NotFound();
}

#endif