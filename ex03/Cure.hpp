/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:51:16 by amejia            #+#    #+#             */
/*   Updated: 2023/07/03 23:47:04 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif