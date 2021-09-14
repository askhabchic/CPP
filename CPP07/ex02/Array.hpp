#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <typename T>
class Array
{
private:
    unsigned int _size;
    T   *_data;
public:
    Array(){
        this->_size = 0;
        this->_data = NULL;
    };

    Array(unsigned int n){
        _size = n;
        if (n != 0)
            _data = new T[_size];
        else
            _data = 0;
    };

    Array(const Array <T> &a){
        *this = a;
    };

    Array & operator=(const Array <T> &arr){
        if (this == &arr)
            return *this;
        _size = arr.getSize();
        _data = NULL;
        if (_size)
            _data = new T[_size];
        else
            _data = 0;
        for (unsigned int i = 0; i < _size; ++i)
            _data[i] = arr._data[i];
        return *this;
    };

    ~Array(){
        if (_data)
            delete [] _data;    };

    unsigned int getSize() const {
        return this->_size;     };

    T & operator[](unsigned int i){
        if (i < 0 || i >= this->getSize())
            throw std::out_of_range("Element is out of the array limits!");
        return _data[i];    };
};

template <typename T>
std::ostream & operator<<(std::ostream &out, Array <T> arr){
    for (unsigned int i = 0; i < arr.getSize(); ++i){
        out << arr[i] << "  ";
        if (i != 0 && !(i % 5))
            out << "\n";
    }
    return out;
};

#endif