/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:17:33 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/07 14:45:21 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <cstring>

class AWeapon
{
	protected:
		std::string _Name;
		int _AP;
		int _Dmg;

	public : 
		AWeapon(std::string const &name, int apcost, int damage);
		~AWeapon();

		std::string getName() const;
		int getAP() const;
		int getDmg() const;

		virtual void attack() const = 0;

		AWeapon(const AWeapon &weapon);
		AWeapon &operator=(const AWeapon &weapon);
};

#endif