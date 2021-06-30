/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 09:56:23 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/29 17:43:53 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include <cstring>
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name);
		~Peon();
		Peon(const Peon& peon);
		Peon &operator=(const Peon &rhs);
		virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Peon const &victim);

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"

#endif