/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:22:00 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/10 15:07:29 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _Count(0), _Array(nullptr)
{

}

Squad::~Squad()
{
	for (int i = 0; i < _Count; i++)
	{
		delete _Array[i];
	}
	if (_Array)
		delete[] _Array;
}

Squad::Squad(const Squad &squad)
{
	_Count = 0;
	for (int i = 0; i < _Count; i++)
	{
		push(squad.getUnit(i)->clone());
	}
}

Squad &Squad::operator=(Squad const &squad)
{
	if (_Count > 0)
	{
		for (int i = 0; i < _Count; i++)
		{
			delete _Array[i];
		}
		_Count = 0;
		delete[] _Array;
	}
	_Count = 0;
	_Array = (ISpaceMarine **)malloc(sizeof(ISpaceMarine *) * (_Count + 1));
	for (int i = 0; i < _Count; i++)
	{
		push(squad.getUnit(i)->clone());
	}
	return (*this);
}

int Squad::getCount() const
{
	return _Count;
}

ISpaceMarine *Squad::getUnit(int index) const
{
	if (_Count == 0 || index >= _Count || index < 0)
		return (nullptr);
	return _Array[index];
}

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (_Count);
	for (int i = 0; i < _Count; i++)
	{
		if (_Array[i] == unit)
		{
			return (_Count);
		}
	}
	if (_Array)
	{
		ISpaceMarine **cpy = new ISpaceMarine *[_Count + 1];
		for (int i = 0; i < _Count; i++)
			cpy[i] = _Array[i];
		delete[] _Array;
		_Array = cpy;
	}
	else
	{
		_Array = new ISpaceMarine *[_Count + 1];
	}
	_Array[(_Count)++] = unit;
	return (_Count);
}