/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:28:29 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/10 18:31:46 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		~AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &assault);
		virtual ISpaceMarine *clone() const;
		AssaultTerminator &operator=(AssaultTerminator const &assault);
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"

#endif