/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujeon <sujeon@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:22:50 by sujeon            #+#    #+#             */
/*   Updated: 2021/11/25 01:48:46 by sujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* 생성자, 소멸자 */

// [19920104_091532] index:0;amount:42;created
Account::Account(int initial_deposit)
{
	// created
	_displayTimestamp();
	
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;

	_nbAccounts++;
	_totalAmount += _amount;
}

Account::Account(void)
{
	std::cout << "Default Constructor" << std::endl;
}

// [19920104_091532] index:0;amount:47;closed
Account::~Account(void)
{
	// closed
	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

/* PUBLIC */

// Static
// static 멤버 함수는 오직 static 멤버 변수에 접근하거나 static 멤버 함수만 호출할 수 있다.
int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return(_totalNbWithdrawals);
}

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
// [19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits <<  ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

// Non-static
// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();

	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	
	_totalAmount += deposit;
	_totalNbDeposits++;
}

// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	Account::makeWithdrawal(int withdrawal)
{	
	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	
	if (_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl; 
		return false;
	}
	
	_nbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ";";
	_amount -= withdrawal;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;

	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return true;
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus(void) const
{
	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

/* PRIVATE */

// Static
void	Account::_displayTimestamp(void)
{
	time_t	time_now;
	char	buff[16];

	time(&time_now);
	strftime(buff, 16, "%Y%m%d_%H%M%S", localtime(&time_now));
	std::cout << "[" << buff << "]" << " ";
	// std::cout << "[19920104_091532] ";
}
