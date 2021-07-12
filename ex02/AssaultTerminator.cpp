/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:27:32 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/10 18:33:13 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << PINK BOLD << "* teleports from space *" << RESET << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << RED BOLD << "I’ll be back ..." << RESET << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &assault)
{
	(void)assault;
	std::cout << PINK BOLD << "* teleports from space *" << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const
{
	return new AssaultTerminator(*this);
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &assault)
{
	(void)assault;
	return (*this);
}

void AssaultTerminator::battleCry() const
{
	std::cout << BLUE BOLD << "This code is unclean. PURIFY IT!" << RESET << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << GREEN BOLD << "* does nothing *" << RESET << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << GREEN BOLD << "* attacks with chainfists *" << RESET << std::endl;
}