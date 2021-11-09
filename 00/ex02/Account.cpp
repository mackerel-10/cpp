/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:22:50 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/09 15:21:57 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

// 생성자, 소멸자
Account::Account(int initial_deposit)
{
	// created
}

Account::Account(void)
{
	
}

Account::~Account( void )
{
	// closed
}

int		Account::getNbAccounts( void ){}
int		Account::getTotalAmount( void ){}
int		Account::getNbDeposits( void ){}
int		Account::getNbWithdrawals( void ){}
void	Account::displayAccountsInfos( void ){}

void	Account::makeDeposit( int deposit ){}
bool	Account::makeWithdrawal( int withdrawal ){}
int		Account::checkAmount( void ) const{}
void	Account::displayStatus( void ) const{}

void	Account::_displayTimestamp( void ){}

