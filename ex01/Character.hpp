/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:22:01 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/07 14:49:54 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>
#include <cstring>
 
class Character
{
	public:
		std::string _Name;
		int _AP;
		AWeapon *_Weapon;

		Character(std::string const & name);
		~Character();
		void recoverAP();
		void equip(AWeapon* weapon);
		void attack(Enemy* enemy);
		std::string getName() const;

		Character &operator=(const Character &charac);
};

std::ostream &operator<<(std::ostream &out, Character const &character);

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"

#endif