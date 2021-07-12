/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:02:32 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/11 10:43:08 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_Sources[4];
		int _Count;

	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource const &materia);
		MateriaSource &operator=(MateriaSource const &materia);

		virtual void learnMateria(AMateria *materia);
		virtual AMateria *createMateria(std::string const &type);
};

#endif