/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:19:38 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/07 14:52:05 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <cstring>

class Enemy
{
	protected:
		int _HP;
		std::string _Type;

	public:
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();

		Enemy(const Enemy &enemy);
		Enemy &operator=(const Enemy &enemy);

		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int damage);
};

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"

#endif