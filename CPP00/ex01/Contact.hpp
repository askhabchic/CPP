#ifndef CONTACTS_HPP
# define CONTACTS_HPP
# include <iostream>

class Contact{

    std::string _phone_number;
    std::string _darkest_secret;
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;

public:
    Contact( void);
    ~Contact( void);
    void setFirstName(std::string cmd);
    void setLastName(std::string cmd);
    void setNickname(std::string cmd);
    void setPhoneNumber(std::string cmd);
    void setDarkestSecret(std::string cmd);
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickname(void);
    std::string getPhoneNumber(void);
    std::string getDarkestSecret(void);
};

#endif