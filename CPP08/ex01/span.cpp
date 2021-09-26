#include "span.hpp"

Span::Span(){}

Span::~Span(){}

Span::Span(int N) : _size(N) {}

Span::Span(Span const &copy){
    *this = copy;
}

Span & Span::operator=(Span const &copy){
    if (this == &copy)
        return *this;
    this->_size = copy._size;
    this->_vect.insert(this->_vect.begin(), copy._vect.begin(), copy._vect.end());
    return *this;
}

void    Span::addNumber(int n){
    if (this->_vect.size() >= this->_size)
        throw alreadyNNumbersStored();
    this->_vect.push_back(n);
}

int     Span::shortestSpan(){
    if (!_vect.size() || _vect.size() == 1)
        throw impossibleSpan();
    std::vector<int>sortV = this->_vect;
    std::sort(sortV.begin(), sortV.end());
    int diff = std::numeric_limits<int>::max();
    for (unsigned int i = 0; i < sortV.size() - 1; ++i)
        if (sortV[i+1] - sortV[i] < diff)
            diff = sortV[i + 1] - sortV[i];
    return diff;
}

int     Span::longestSpan(){
    if (!_vect.size() || _vect.size() == 1)
        throw impossibleSpan();
    std::vector<int>_sortV = this->_vect;
    std::sort(_sortV.begin(), _sortV.end());
    return _sortV.back() - _sortV.front();
}