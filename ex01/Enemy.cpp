/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:19:22 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/02 18:53:45 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _HP(hp), _Type(type)
{
	
}

Enemy::~Enemy()
{

}

Enemy &Enemy::operator=(const Enemy &enemy)
{
	_HP = enemy.getHP();
	_Type = enemy.getType();
	return (*this);
}

std::string Enemy::getType() const
{
	return (_Type);
}

int Enemy::getHP() const
{
	return (_HP);
}

void Enemy::takeDamage(int damage)
{
	if (_HP < 0)
	{
		return ;
	} else if (_HP < damage) {
		_HP = 0;
	} else {
		_HP -= damage;
	}
}