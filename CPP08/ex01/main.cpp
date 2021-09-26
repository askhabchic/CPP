#include "span.hpp"

int main()
{
    try
    {
        Span sp = Span(6);
        sp.addNumber(2147483647);
        sp.addNumber(-2147483648);
        sp.addNumber(6);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n   -----------------------\n" << std::endl;
    Span s1 = Span(10000);
    try
    {
        std::cout << s1.shortestSpan() << std::endl;
        std::cout << s1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        s1.addNumber(10001);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n   -----------------------\n" << std::endl;

    Span s2 = Span(10000);
    try
    {
        s2.addNumber(1000);
        s2.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n   -----------------------\n" << std::endl;

    Span s3 = Span(20);
    for (int i = 0; i < 20; ++i){
        s3.addNumber(i * 2);
    }
    try
    {
        std::cout << s3.longestSpan() << std::endl;
        std::cout << s3.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}