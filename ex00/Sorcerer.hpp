/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 09:38:49 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/29 16:22:48 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <cstring>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		std::string _Name;
		std::string _Title;
		Sorcerer &operator=(const Sorcerer &rhs);
		void polymorph(Victim const &victim) const;
		void polymorph(Peon const &peon) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"

#endif