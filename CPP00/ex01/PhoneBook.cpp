#include "PhoneBook.hpp"
#include "Contact.hpp"


Phonebook::Phonebook(void){
    this->_index = 0;
    this->fullPhonebook = false;
    return ; }

Phonebook::~Phonebook(void){
    return ; }

std::string    Phonebook::checkValid(std::string messege){
    std::string cmd;
    while (cmd.empty()){
        std::cout << messege;
        std::getline(std::cin, cmd);}
    return cmd; }

void    Phonebook::addContact(void)
{
    this->_contacts[this->_index].setFirstName(checkValid("Enter First name:  "));
    this->_contacts[this->_index].setLastName(checkValid("Enter Last name:  "));
    this->_contacts[this->_index].setNickname(checkValid("Enter Nickname:  "));
    this->_contacts[this->_index].setPhoneNumber(checkValid("Enter Phone number:  "));
    this->_contacts[this->_index].setDarkestSecret(checkValid("Enter Darkest secret:  "));
    std::cout << "\n ~ New contact with index " << this->_index << " added! ~\n" << std::endl;
    if (this->_index >= 7){
        this->_index = 0;
        this->fullPhonebook = true; }
    else
        this->_index++; }

void Phonebook::checkWidth(std::string cmd){
    int dif = 10 - cmd.length();
    if (cmd.length() >= 10)
        std::cout << cmd.substr(0, 9) << ".";
    else{
        if (cmd.length() < 10)
            while (dif > 0){
                std::cout << " ";
                dif--; }
            std::cout << cmd; }
    std::cout << "ā"; }

int    Phonebook::getIndex(void){
    return this->_index; }

void    Phonebook::printPhonebook(int index){
    std::cout << "ā";
    std::ostringstream i;
    i << index;
    checkWidth(i.str());
    checkWidth(this->_contacts[index].getFirstName());
    checkWidth(this->_contacts[index].getLastName());
    checkWidth(this->_contacts[index].getNickname());
    std::cout << "\nā-------------------------------------------ā" << std::endl; }

void    Phonebook::showContact(std::string index){
    std::cout << "    First name: " << this->_contacts[(int)index[0] - 48].getFirstName();
    std::cout << "\n     Last name: " << this->_contacts[(int)index[0] - 48].getLastName();
    std::cout << "\n      Nickname: " << this->_contacts[(int)index[0] - 48].getNickname();
    std::cout << "\n  Phone Number: " << this->_contacts[(int)index[0] - 48].getPhoneNumber();
    std::cout << "\nDarkest secret: " << this->_contacts[(int)index[0] - 48].getDarkestSecret() << std::endl; }

void    Phonebook::searchContact(void){
    std::cout << "ā-------------------------------------------ā" << std::endl;
    std::cout << "ā  Index   āFirst nameā Last nameā Nickname ā" << std::endl;
    std::cout << "ā-------------------------------------------ā¤" << std::endl;
    while (this->_index > 0 || (!this->_index && fullPhonebook)){
        if (!this->fullPhonebook)   {
            for (int i = 0; i < this->getIndex(); ++i)
                printPhonebook(i);
        }
        else if (this->fullPhonebook)   {
            for (int i = 0; i < CONTACT_NUM; ++i)
                printPhonebook(i);
        }
        break ; } }

void    Phonebook::printHeader(void)
{
    std::cout << "āāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāā" << std::endl;
    std::cout << "ā                                                       ā" << std::endl;
    std::cout << "ā                 -----PHONEBOOK-----                   ā" << std::endl;
    std::cout << "ā                                                       ā" << std::endl;
    std::cout << "ā                                                       ā" << std::endl;
    std::cout << "ā         You can enter the following commands:         ā" << std::endl;
    std::cout << "ā                                                       ā" << std::endl;
    std::cout << "ā                                                       ā" << std::endl;
    std::cout << "ā    SEARCH - the program will display a list of        ā" << std::endl;
    std::cout << "ā    the available contacts and you can enter index     ā" << std::endl;
    std::cout << "ā    to select the contact and get information          ā" << std::endl;
    std::cout << "ā                                                       ā" << std::endl;
    std::cout << "ā                                                       ā" << std::endl;
    std::cout << "ā    ADD - you can create new contact and it will be    ā" << std::endl;
    std::cout << "ā    added to phonebook                                 ā" << std::endl;
    std::cout << "ā                                                       ā" << std::endl;
    std::cout << "ā                                                       ā" << std::endl;
    std::cout << "ā    EXIT - program quits and contacts are lost         ā" << std::endl;
    std::cout << "ā                                                       ā" << std::endl;
    std::cout << "āāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāāā" << std::endl; }