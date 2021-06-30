/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pig.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:55:30 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/30 19:10:46 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pig.hpp"

Pig::Pig(std::string name) : Victim(name)
{
    std::cout << GREEN << BOLD << "Grui grui." << RESET << std::endl;
}

Pig::~Pig()
{
    std::cout << RED << BOLD << "Gruiiiii..." << RESET << std::endl;
}

Pig::Pig(const Pig &pig) : Victim(pig._Name)
{
    _Name = pig._Name;
}

void Pig::getPolymorphed() const
{
    std::cout << PINK << BOLD << _Name << " has been turned into a pig monkey !" << RESET << std::endl;
}

Pig &Pig::operator=(const Pig &rhs)
{
    _Name = rhs._Name;
    return *this;
}

std::ostream &operator<<(std::ostream &out, Pig const &peon)
{
    out << BLUE << "I am " << peon._Name << " and I like otters!" << RESET << std::endl;
    return out;
}