/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:26:14 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/10 18:35:03 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << PINK << "Tactical Marine ready for battle!" << RESET << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << RED << "Aaargh ..." << RESET << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &tactical)
{
	(void)tactical;
	std::cout << PINK << "Tactical Marine ready for battle!" << RESET << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	return new TacticalMarine(*this);
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &tactical)
{
	(void)tactical;
	return (*this);
}

void TacticalMarine::battleCry() const
{
	std::cout << BLUE << "For the holy PLOT!" << RESET << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << BLUE << "* attacks with a bolter *" << RESET << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << BLUE << "* attacks with a chainsword *" << RESET << std::endl;
}