/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:22:50 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/24 20:14:10 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// 생성자, 소멸자
Account::Account(int initial_deposit)
{
	this->_displayTimestamp();
	// created
}

Account::Account(void)
{
	
}

Account::~Account(void)
{
	// closed
}

// GET
// static 멤버 함수는 오직 static 멤버 변수에 접근하거나 static 멤버 함수만 호출할 수 있다.
int		Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return(Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "displayAccountsInfos" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "makeDeposit" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "makeWithdrawal" << std::endl;
	return true;
}

int		Account::checkAmount(void) const
{
	std::cout << "checkAmount" << std::endl;
	return 1;
}

void	Account::displayStatus(void) const
{
	std::cout << "displayStatus" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::cout << "_displayTimestamp" << std::endl;
}
