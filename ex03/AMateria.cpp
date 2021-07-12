/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:55:10 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/12 10:56:05 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _Type(type), xp_(0)
{
	
}

AMateria::~AMateria()
{
	
}

std::string const &AMateria::getType() const
{
	return _Type;
}

unsigned int AMateria::getXP() const
{
	return xp_;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	xp_ += 10;
}