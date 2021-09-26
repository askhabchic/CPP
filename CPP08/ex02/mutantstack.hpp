#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>    {
    public:
        MutantStack() { std::stack<T>();    };
        ~MutantStack() {};
        MutantStack(MutantStack const &copy) : std::stack<T>(copy) {};
        MutantStack & operator=(MutantStack const &copy)    {
            if (this == &copy)
                return *this;
            std::stack<T>::operator=(copy);
            return *this;
        };

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return this->std::stack<T>::c.begin(); }
        iterator end() { return this->std::stack<T>::c.end(); }
};

#endif