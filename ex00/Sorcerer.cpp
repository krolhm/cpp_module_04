/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 09:39:25 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/29 16:26:28 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _Name(name), _Title(title)
{
	std::cout << GREEN << BOLD << _Name << ", " << _Title << ", is born!" << RESET << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << RED << BOLD << _Name << ", " << _Title << ", is dead! Consequences will never be the same!" << RESET << std::endl;
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

void Sorcerer::polymorph(Peon const &peon) const
{
	peon.getPolymorphed();
}

Sorcerer &Sorcerer::operator=(const Sorcerer &rhs)
{
	_Title = rhs._Title;
	_Name = rhs._Name;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << BLUE << BOLD << "I am " << sorcerer._Name << ", " << sorcerer._Title << ", and I like ponies !" << RESET << std::endl;
	return out;
}