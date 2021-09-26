#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cstdlib>
# include <ctime>

class Span
{
private:
    Span();
    unsigned int        _size;
    std::vector<int>    _vect;
public:
    ~Span();
    Span(int N);
    Span(Span const &copy);
    Span & operator=(Span const &copy);

    void    addNumber(int n);
    int     shortestSpan();
    int     longestSpan();

    class alreadyNNumbersStored : public std::exception{
        virtual const char *what() const throw(){
            return "There are already N of numbers stored in the object";}
    };

    class impossibleSpan : public std::exception{
        virtual const char *what() const throw(){
            return "Impossible to find a span";}
    };
};

#endif