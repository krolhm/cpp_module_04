/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:24:15 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/11 10:40:55 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _Name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_Inventory[i] = nullptr;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_Inventory[i] != nullptr)
		{
			delete _Inventory[i];
		}
	}
}

Character::Character(Character const &character)
{
	_Name = character._Name;
	for (int i = 0; i < 4; i++)
	{
		if (!_Inventory[i])
			equip(_Inventory[i]->clone());
	}
}

Character &Character::operator=(Character const &character)
{
	_Name = character._Name;
	for (int i = 0; i < 4; i++)
	{
		if (!_Inventory[i])
			_Inventory[i] = character._Inventory[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_Name);
}

void Character::equip(AMateria *m)
{
	if (m == nullptr)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_Inventory[i])
		{
			_Inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	if (_Inventory[idx])
	{
		_Inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return;
	if (_Inventory[idx])
	{
		_Inventory[idx]->use(target);
	}
}