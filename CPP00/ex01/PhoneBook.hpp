#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define CONTACT_NUM 8

# include <iostream>
# include <string>
# include <sstream>
# include "Contact.hpp"

class Phonebook {

    int     _index;
    Contact _contacts[CONTACT_NUM];
public:
    bool            fullPhonebook;
    int             getIndex(void);
    std::string     checkValid(std::string messege);
    static void     printHeader();
    void            addContact(void);
    void            searchContact(void);
    void            showContact(std::string index);
    void            printPhonebook(int index);
    void            checkWidth(std::string);
    Phonebook();
    ~Phonebook();
};

#endif