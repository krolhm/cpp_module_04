/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 09:51:55 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/28 23:24:46 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _Name(name)
{
	std::cout << GREEN << "Some random victim called " << _Name << " just appeared !" << RESET << std::endl;
}

Victim::~Victim()
{
	std::cout << RED << "Victim " << _Name << " just died for no apparent reason!" << RESET << std::endl;	
}

void Victim::getPolymorphed() const
{
	std::cout << PINK << _Name << " has been turned into a cute little sheep!" << RESET << std::endl;
}

Victim &Victim::operator=(const Victim &rhs)
{
	_Name = rhs._Name;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Victim const &victim)
{
	out << BLUE << "I am " << victim._Name << " and I like otters!" << RESET << std::endl;
	return out;
}