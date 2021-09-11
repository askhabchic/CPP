#include "Converter.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cerr << "Bad arguments!" << std::endl;
        return 1;
    }
    else    {
        Converter Conv;
        Conv.parseArg(argv[1]);
    }
    return 0;
}