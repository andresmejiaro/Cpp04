/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:05:18 by amejia            #+#    #+#             */
/*   Updated: 2023/07/04 00:11:25 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void leaks(){
	system("leaks materia");
}


int main()
{
	atexit(leaks);	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	bob->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(5, *bob);
	me->use(-5, *bob);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(0);
	me->unequip(5);
	delete tmp;
	tmp = src->createMateria("patata");
	
	
	delete bob;
	delete me;
	delete src;
	return 0;
}
