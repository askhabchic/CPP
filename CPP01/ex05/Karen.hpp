#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <sstream>

class Karen {
private:
    void         debug(void);
    void         info(void);
    void         warning(void);
    void         error(void);
    std::string  _index[4];
    typedef void (Karen:: * PType)(void);
    PType        methods[4];
public:
    void         complain(std::string level);
    void         initIndex(void);
    Karen(void);
    ~Karen();
};

#endif