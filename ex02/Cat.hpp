/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:33:59 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 17:39:20 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain *gray;
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	void makeSound() const;
	Brain &exposeBrain() const;

};

#endif