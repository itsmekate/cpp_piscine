/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 13:31:54 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/02 13:31:55 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h> 
#include "Account.class.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {

	_displayTimestamp();
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << ";created" << std::endl;
	return ;
}

Account::~Account( void ) {
	_displayTimestamp();
	_accountIndex = _nbAccounts - 1;
	_nbAccounts--;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	_totalAmount -= _amount;
	std::cout << ";closed" << std::endl;
	return ;
}

void Account::_displayTimestamp( void ) {

	time_t rawtime;
	struct tm * timeinfo;
	char buffer [19];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime (buffer,19,"[%Y%m%d_%H%M%S] ",timeinfo);
	std::cout << buffer;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_nbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	if (_amount - withdrawal < 0)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
		std::cout << ";withdrawal:refused" << std::endl;
	}
	else
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_totalNbWithdrawals++;
	}
	return 0;
}

int		Account::checkAmount( void ) const {
	return _amount;
}

void	Account::displayStatus( void ) const {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int	Account::getNbAccounts( void ){ return _nbAccounts; }
int	Account::getTotalAmount( void ){ return _totalAmount; }
int	Account::getNbDeposits( void ){ return _totalNbDeposits; }
int	Account::getNbWithdrawals( void ){ return _totalNbWithdrawals; }

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}