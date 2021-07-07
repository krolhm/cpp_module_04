/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:21:13 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/07 14:56:20 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << GREEN << "* click click click *" << RESET << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << RED << "* SPROTCH *" << RESET << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &scorpion)
{
    _HP = scorpion._HP;
    _Type = scorpion._Type;

    return (*this);
}

void RadScorpion::takeDamage(int damage)
{
    _HP -= damage;
}