/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:41:26 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/30 21:08:35 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		~PowerFist();

		virtual void attack(void) const;

        PowerFist(const PowerFist &pf);
        PowerFist &operator=(const PowerFist &pf);
};

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"

#endif