/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:57:00 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/16 19:21:36 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )				{return (_nbAccounts);}
int	Account::getTotalAmount( void )				{return (_totalAmount);}
int	Account::getNbDeposits( void )				{return (_totalNbDeposits);}
int	Account::getNbWithdrawals( void )			{return (_totalNbWithdrawals);}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

Account::Account( int initial_deposit ) :
		_accountIndex(_nbAccounts), _amount(initial_deposit),
		_nbDeposits(0), _nbWithdrawals(0)
{
	Account::_totalAmount += _amount;
	Account::_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "amount:" << _amount <<";";
	std::cout << "created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	_amount += deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	_nbDeposits ++;
	std::cout << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal;
	_amount -= withdrawal;
	std::cout << ";amount:" << _amount;
	_nbWithdrawals ++;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
	_totalNbWithdrawals += 1;
	_totalAmount -= withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

//void	Account::_displayTimestamp( void ){std::cout << "[19920104_091532] ";}
void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	
	tm *ltm = localtime(&now);
	std::cout << '[' << 1900 + ltm->tm_year << 1 + ltm->tm_mon << ltm->tm_mday;
	std::cout << '_' << 5+ltm->tm_hour << 30+ltm->tm_min << ltm->tm_sec << "] ";
}
