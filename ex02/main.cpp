/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:34:53 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/10 18:40:40 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	ISquad *crash_test = new Squad;
	vlc->push(bob);
	vlc->push(jim);

	ISpaceMarine *yan = new AssaultTerminator;
	crash_test->push(yan);
	crash_test->push(yan);
	crash_test->push(yan);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	for (int i = 0; i < crash_test->getCount(); ++i)
	{
		ISpaceMarine *cur = crash_test->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	
	delete vlc;
	delete crash_test;
	return (0);
}