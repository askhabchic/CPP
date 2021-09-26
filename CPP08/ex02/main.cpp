#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top = " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size = " << mstack.size() << std::endl;
    std::cout << "top = " << mstack.top() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "size = " << mstack.size() << std::endl;
    mstack.pop();
    mstack.pop();
    std::cout << "size = " << mstack.size() << std::endl << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    while (it != ite)
    {
        std::cout << "*it = " << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    std::cout << "\n|  std::list example  |\n";
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << "top = " << lst.back() << std::endl;
    lst.pop_back();
    std::cout << "size = " << lst.size() << std::endl;
    std::cout << "top = " << lst.back() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    std::cout << "size = " << lst.size() << std::endl;
    lst.pop_back();
    lst.pop_back();
    std::cout << "size = " << lst.size() << std::endl << std::endl;
    std::list<int>::iterator itl= lst.begin();
    std::list<int>::iterator itel= lst.end();
    ++itl;
    --itl;
    while (itl != itel)
    {
        std::cout << "*it = " << *itl << std::endl;
        ++itl;
    }
    std::list<int> slst(lst);


    std::cout << "\nMutantStack copy stack\n" << std::endl;
    while (!s.empty()){
        std::cout << "size - " << s.size() << ", top = " << s.top() << std::endl;
        s.pop();
    }

    MutantStack<int> ss(mstack);
    it = ss.begin();
    ite = ss.end() - 1;
    std::cout << "\nMutantStack copy\n" << std::endl;
    while (it != ite) {
        std::cout << "*ite = " << *ite << std::endl;
        --ite;
    }
    std::cout << "*ite = " << *ite << std::endl;

    return 0;
}