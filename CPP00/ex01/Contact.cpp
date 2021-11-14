#include "Contact.hpp"
#include <iostream>

Contact::Contact(void){
    return ; }

Contact::~Contact(void){
    return ; }

void Contact::setFirstName(std::string cmd){
    _first_name = cmd; }

void Contact::setLastName(std::string cmd){
    _last_name = cmd; }

void Contact::setNickname(std::string cmd){
    _nickname = cmd; }

void Contact::setPhoneNumber(std::string cmd){
    _phone_number = cmd; }

void Contact::setDarkestSecret(std::string cmd){
    _darkest_secret = cmd; }

std::string Contact::getFirstName(void){
    return this->_first_name; }

std::string Contact::getLastName(void){
    return this->_last_name; }

std::string Contact::getNickname(void){
    return this->_nickname; }

std::string Contact::getPhoneNumber(void){
    return this->_phone_number; }

std::string Contact::getDarkestSecret(void){
    return this->_darkest_secret; }
