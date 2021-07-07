/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:20:09 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/04 11:01:15 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << GREEN << "Gaaah. Me want smash heads!" << RESET << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << RED << "Aaargh..." << RESET << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &mutant)
{
	_HP = mutant._HP;
	_Type = mutant._Type;

	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	_HP -= damage - 3;
}
