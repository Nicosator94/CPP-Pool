/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:26:36 by niromano          #+#    #+#             */
/*   Updated: 2024/04/05 13:14:22 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	_amount = initial_deposit;
	_accountIndex = getNbAccounts();
	_nbAccounts ++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts() {
	return _nbAccounts;
}

int	Account::getTotalAmount() {
	return _totalAmount;
}

int	Account::getNbDeposits() {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits ++;
	_totalNbDeposits ++;
	std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (_amount - withdrawal >= 0) {
		std::cout << withdrawal << ";amount:";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals ++;
		_totalNbWithdrawals ++;
		std::cout << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	else
		std::cout << "refused" << std::endl;
	return 0;
}

int		Account::checkAmount() const {
	return _amount;
}

void	Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp() {
	time_t seconds = time(NULL);
	tm *ltm = localtime(&seconds);
	std::cout << "[" << ltm->tm_year + 1900;
	if (ltm->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << ltm->tm_mon + 1;
	if (ltm->tm_mday < 10)
		std::cout << "0";
	std::cout << ltm->tm_mday << "_";
	if (ltm->tm_hour < 10)
		std::cout << "0";
	std::cout << ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << "0";
	std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << "0";
	std::cout << ltm->tm_sec << "] ";
}