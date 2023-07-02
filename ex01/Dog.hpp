/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:40:57 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 17:39:26 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain *gray;
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	void makeSound() const;
	Brain &exposeBrain() const;

};

#endif