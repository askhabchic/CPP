#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void){
}

Account::Account(int initial_deposit){
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";created\n";
    _totalAmount = checkAmount();
}

Account::~Account(void){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";closed\n";
}

int Account::getNbAccounts(void){
    return _nbAccounts;
}

int Account::getTotalAmount(void){
    return _totalAmount;
}

int Account::getNbDeposits(void){
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void){
    return _totalNbWithdrawals;
}

void    Account::displayAccountsInfos(void){
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() \
 << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << "\n";
}

void    Account::makeDeposit(int deposit){
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    std::cout << ";amount:" << _amount << ";np_deposits::" << _nbDeposits << std::endl;
    _totalAmount += deposit;
}

bool    Account::makeWithdrawal(int withdrawal){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    if (_amount < withdrawal){
        std::cout << ";withdrawal:refused\n";
        return false;
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << ";withdrawal:" << withdrawal ;
    _amount -= withdrawal;
    std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _totalAmount -= withdrawal;
    return true;
}

int Account::checkAmount(void) const {
    _totalAmount += _amount;
    return _totalAmount;
}

void    Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" \
    << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp(void){
    time_t t = time(0);
    tm *tm = localtime(&t);
    std::cout << "[" << tm->tm_year + 1900 << std::setfill('0') << std::setw(2) << tm->tm_mon << std::setw(2) << tm->tm_mday << "_" << std::setw(2) << tm->tm_hour << std::setw(2) << tm->tm_min << std::setw(2) << tm->tm_sec << "] ";
}