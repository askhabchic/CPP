#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    Phonebook::printHeader();
    Phonebook book;
    std::string cmd;
    while (cmd != "EXIT")
    {
        std::cout << "Enter command:  ";
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
            book.addContact();
        else if (cmd == "SEARCH")   {
            book.searchContact();
            std::string num;
            if ((book.getIndex() > 0 && !book.fullPhonebook) || (book.getIndex() >= 0 && book.fullPhonebook))   {
                while (1)   {
                std::cout << "\nEnter the index of the required contact:\n";
                std::getline(std::cin, num);
                if ((num[0] < 48 || num[0] > 55) || num.length() > 1)
                    std::cout << "Invalid index for this phonebook! Please, enter a number from 0 to 7\n";
                else if ((!book.getIndex() && !book.fullPhonebook) && (int)num[0] - 48 > book.getIndex())
                    std::cout << "Contact with this index don't exist! Please, enter a index from 0 to " << book.getIndex()<< "\n";
                else if ((book.getIndex() > 0 && !book.fullPhonebook) && (int)num[0] - 48 > book.getIndex() - 1)
                    std::cout << "Contact with this index don't exist! Please, enter a index from 0 to " << book.getIndex() - 1 << "\n";
                else if (((book.getIndex() > 0 && !book.fullPhonebook) || (book.getIndex() >= 0 && book.fullPhonebook))\
                 && num.length() == 1 && num[0] >= 48 && num[0] <= 55){ 
                    book.showContact(num);
                    break ;    }}}
            else if (!book.getIndex() && !book.fullPhonebook)
                std::cout << "Phonebook is empty. You need to ADD contacts.\n";     }
        else if (cmd == "EXIT")
            std::cout << "\n* The program is exited *\n\n";
        else if (std::cin.eof()){
            std::cout << "Suspended\n";
            return 1;   }
        else
            std::cout << "Invalid command, please, enter command ADD, SEARCH or EXIT!\n";   }
    return 0;
}