/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:57:00 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/15 21:45:30 by pcunha           ###   ########.fr       */
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
//	static void	displayAccountsInfos( void );

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
	std::cout << "saiu";
}
//
//	void	makeDeposit( int deposit );
//	bool	makeWithdrawal( int withdrawal );
//	int		checkAmount( void ) const;
//	void	displayStatus( void ) const;
void	Account::_displayTimestamp( void ){std::cout << "[19920104_091532] ";}

//
//	Account( void );
