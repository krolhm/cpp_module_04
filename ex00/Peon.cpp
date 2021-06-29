/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 09:59:11 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/29 16:51:35 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : _Name(name)
{
    std::cout << GREEN << BOLD << "Zog zog." << RESET << std::endl;
}

Peon::~Peon()
{
    std::cout << RED << BOLD << "Bleuark..." << RESET << std::endl;
}

Peon &Peon::operator=(const Peon &rhs)
{
    _Name = rhs._Name;
    return *this;
}

std::ostream &operator<<(std::ostream &out, Peon const &peon)
{
    out << BLUE << "I am " << peon._Name << " and I like otters!" << RESET << std::endl;
    return out;
}