/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:47:28 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/11 16:57:15 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _Type;
		unsigned int xp_;

	public:
		AMateria(std::string const &type);
		virtual ~AMateria();

		std::string const &getType() const; //Returns the materia type
		unsigned int getXP() const;         //Returns the Materia's XP

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif