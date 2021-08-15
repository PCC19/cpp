/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:57:00 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/15 21:11:09 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

int	Account::getNbAccounts( void )		{return (_nbAccounts);}
int	Account::getTotalAmount( void )				{return (_totalAmount);}
int	Account::getNbDeposits( void )				{return (_totalNbDeposits);}
int	Account::getNbWithdrawals( void )			{return (_totalNbWithdrawals);}
//	static void	displayAccountsInfos( void );
//
//	Account( int initial_deposit );
//	~Account( void );
//
//	void	makeDeposit( int deposit );
//	bool	makeWithdrawal( int withdrawal );
//	int		checkAmount( void ) const;
//	void	displayStatus( void ) const;
//	static void	_displayTimestamp( void );
//
//	Account( void );
