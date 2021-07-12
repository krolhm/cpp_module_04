/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:02:29 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/12 10:54:06 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _Count(0)
{
    for (int i = 0; i < 4; i++)
    {
        _Sources[i] = nullptr;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < _Count; i++)
    {
        delete _Sources[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const &materia)
{
    _Count = 0;
	for(int i = 0; i < materia._Count; i++)
		learnMateria(materia._Sources[i]->clone());
}

MateriaSource &MateriaSource::operator=(MateriaSource const &materia)
{
    _Count = 0;
	for(int i = 0; i < materia._Count; i++)
		learnMateria(materia._Sources[i]->clone());
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (_Count  == 4 || materia == nullptr)
		return ;
	_Sources[_Count++] = materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < _Count; i++)
    {
        if (_Sources[i]->getType() == type)
        {
            return _Sources[i]->clone();
        }
    }
    return NULL;
}