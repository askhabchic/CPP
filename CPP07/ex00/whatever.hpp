#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

class Awesome{
    int _n;
    public:
    Awesome(int n) : _n(n){};
    int getInt() const { return this->_n; };
    bool operator==(Awesome const & rhs) const { return this->_n == rhs._n; }
    bool operator!=(Awesome const & rhs) const { return this->_n != rhs._n; }
    bool operator>(Awesome const & rhs) const { return this->_n > rhs._n; }
    bool operator<(Awesome const & rhs) const { return this->_n < rhs._n; }
    bool operator>=(Awesome const & rhs) const { return this->_n >= rhs._n; }
    bool operator<=(Awesome const & rhs) const { return this->_n <= rhs._n; }
};

template <class T>
void    swap(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
}

template <class T>
const T&   max(const T&x, const T& y){
    return (x > y ? x : y);
}

template <class T>
const T&   min(const T& x, const T& y){
    return (x < y ? x : y);
}

#endif