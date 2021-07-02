/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:17:43 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/30 20:53:31 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _Name(name), _AP(apcost), _Dmg(damage)
{
    
}

AWeapon::~AWeapon()
{
    
}

std::string AWeapon::getName() const
{
    return (_Name);
}

int AWeapon::getDmg() const
{
    return (_Dmg);
}

int AWeapon::getAP() const
{
    return (_AP);
}

AWeapon &AWeapon::operator=(const AWeapon &weapon)
{
    _Name = weapon._Name;
    _AP = weapon._AP;
    _Dmg = weapon._Dmg;
    
    return (*this);
}
