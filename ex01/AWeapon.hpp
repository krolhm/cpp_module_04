/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:17:33 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/30 21:10:17 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

		// AWeapon(const AWeapon &weapon);
		AWeapon &operator=(const AWeapon &weapon);
};