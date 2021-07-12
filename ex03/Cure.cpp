/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:48:02 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/12 11:00:47 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &cure) : AMateria(cure.getType())
{
	xp_ = cure.getXP();
}

Cure &Cure::operator=(Cure const &cure)
{
	xp_ = cure.getXP();
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << GREEN BOLD << "* heals " << target.getName() << " wounds *" << RESET << std::endl;
}