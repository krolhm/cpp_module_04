/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pig.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:56:39 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/30 18:57:48 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIG_HPP
# define PIG_HPP

#include <iostream>
#include <cstring>
#include "Victim.hpp"

class Pig : public Victim
{
	public:
		Pig(std::string name);
		~Pig();
		Pig(const Pig& pig);
		Pig &operator=(const Pig &rhs);
		virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Pig const &victim);

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"

#endif