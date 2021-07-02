/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:18:44 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/30 21:07:04 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{
    
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle& pr)
{
    _Name = pr._Name;
    _AP = pr._AP;
    _Dmg = pr._Dmg;

    return (*this);
}

void PlasmaRifle::attack(void) const
{
    std::cout << BLUE << BOLD << "* piouuu piouuu piouuu *" << RESET << std::endl;
}
