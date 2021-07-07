/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:21:04 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/07 12:01:13 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"
class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        virtual ~RadScorpion();
        
        RadScorpion(const RadScorpion &scorpion);
        RadScorpion &operator=(const RadScorpion &scorpion);

        virtual void takeDamage(int damage);
};

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"

#endif