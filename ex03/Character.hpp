/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:49:04 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/11 10:46:16 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _Name;
        AMateria *_Inventory[4];

    public:
        Character(std::string name);
        virtual ~Character();
        Character(Character const &character);
        Character &operator=(Character const &character);

        virtual std::string const &getName() const;
        virtual void equip(AMateria *m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter &target);
};

#endif