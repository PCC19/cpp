/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:57:00 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/16 17:13:48 by pcunha           ###   ########.fr       */
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
//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
Account::Account( int initial_deposit ) :
		_accountIndex(_nbAccounts), _amount(initial_deposit),
		_nbDeposits(0), _nbWithdrawals(0)
{
	Account::_totalAmount += _amount;
	Account::_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "ammount:" << _amount <<";";
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
//
//	void	makeDeposit( int deposit );
//	bool	makeWithdrawal( int withdrawal );
//	int		checkAmount( void ) const;
//	void	displayStatus( void ) const;
void	Account::_displayTimestamp( void ){std::cout << "[19920104_091532] ";}
