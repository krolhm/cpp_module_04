/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:49:21 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/12 10:59:59 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class Cure: public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		Cure(Cure const &cure);
		
		Cure &operator=(Cure const &cure);
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"

#endif