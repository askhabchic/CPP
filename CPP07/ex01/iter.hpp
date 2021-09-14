#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

class Test
{
private:
    int _i;
public:
    Test()  { _i = 4; };
    ~Test() {};
    int     getInt() const { return this->_i; }
};

std::ostream & operator<<(std::ostream &out, Test const &t){
    out << t.getInt();
    return out;
}

template <class T>
void    iter(T *arr, int len, void (*f)(T const & a)){
    for (int i = 0; i < len; ++i)
        f(arr[i]);
}

template <class T>
void    ft_printf(T const & a){
    std::cout << a << std::endl;
}

#endif