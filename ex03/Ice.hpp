/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:51:16 by amejia            #+#    #+#             */
/*   Updated: 2023/07/03 23:47:40 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#endif