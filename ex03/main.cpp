/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:01:00 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/12 14:05:33 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* zaz = new Character("zaz");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);
	ICharacter* bob = new Character("bob");
	// zaz->use(0, *bob);
	// zaz->use(1, *bob);

	tmp = src->createMateria("lava");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);
	tmp = src->createMateria("lava");
	zaz->equip(tmp);
	tmp = src->createMateria("ice");
	zaz->equip(tmp);

	zaz->use(-1, *bob);
	zaz->use(0, *bob);
	zaz->use(1, *bob);
	zaz->use(2, *bob);
	zaz->use(3, *bob);
	zaz->use(4, *bob);

	delete bob;
	delete zaz;
	delete src;
	return 0;
}