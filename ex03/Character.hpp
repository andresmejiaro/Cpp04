/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:55:21 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 23:44:54 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*stuff[4];
	public:
	Character();
	virtual ~Character();
	Character (std::string name);
	Character(const Character &other);
	Character &operator=(const Character &other);
	AMateria const *pointStuff(int w) const;
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif