/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:22:10 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/07 15:18:32 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _Name(name), _AP(40)
{
	std::cout << GREEN BOLD << _Name << " spawn with " << _AP << " AP !" << RESET << std::endl;
}

Character::~Character()
{

}

Character &Character::operator=(const Character &character)
{
	_Name = character._Name;
	_AP = character._AP;
	_Weapon = character._Weapon;
	return (*this);
}

void Character::recoverAP()
{
	if (_AP >= 40)
		return;
	if (_AP + 10 > 40)
	{
		_AP = 40;
		return;
	}
	_AP += 10;
}

void Character::attack(Enemy *enemy)
{
	if (_Weapon == nullptr || _AP < _Weapon->getAP())
		return;
	std::cout << PINK BOLD << _Name << " attacks " << enemy->getType() << " with a " 
	<< _Weapon->getName() << RESET << std::endl;
	_Weapon->attack();
	enemy->takeDamage(_Weapon->getDmg());
	_AP -= _Weapon->getAP();
	if (enemy->getHP() <= 0)
		delete enemy;
}

void Character::equip(AWeapon *weapon)
{
	_Weapon = weapon;
}

std::ostream &operator<<(std::ostream &out, Character const &character)
{
	if (!character._Weapon)
	{
		out << BLUE << character._Name << " has " << character._AP << " AP and is unarmed" << RESET << std::endl;
	}
	else
		out << BLUE << character._Name << " has " << character._AP << " AP and wields a " << character._Weapon->getName() << RESET << std::endl;
	return out;
}