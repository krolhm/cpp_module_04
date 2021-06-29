/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 09:50:41 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/28 23:17:33 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <cstring>

class Victim
{
	public:
		Victim(std::string name);
		~Victim();
		std::string _Name;
		Victim &operator=(const Victim &rhs);
		void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &victim);

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"

#endif