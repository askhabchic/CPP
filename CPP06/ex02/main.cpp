#include "Base.hpp"

int main(){
    srand(time(0));
    Base *base = generate();
    Base &baseRef = *base;
    identify(*base);
    identify(baseRef);
    identify(base);
    delete base;
}