/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:41:41 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/30 21:10:49 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist &PowerFist::operator=(const PowerFist &pf)
{
    _Name = pf._Name;
    _AP = pf._AP;
    _Dmg = pf._Dmg;

    return (*this);
}

void PowerFist::attack(void) const
{
    std::cout << PINK << BOLD << "* pschhh... SBAM! *" << RESET << std::endl;
}