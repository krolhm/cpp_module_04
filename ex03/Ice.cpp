/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:56:22 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/12 11:01:23 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{

}

Ice::~Ice()
{
	
}

Ice::Ice(Ice const &ice):AMateria(ice.getType())
{
	xp_ = ice.getXP();
}

Ice &Ice::operator=(Ice const &ice)
{
	xp_ = ice.getXP();
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << BLUE BOLD << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}