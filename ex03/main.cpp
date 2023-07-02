/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:05:18 by amejia            #+#    #+#             */
/*   Updated: 2023/07/03 00:17:51 by amejia           ###   ########.fr       */
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
	//atexit(leaks);	
	IMateriaSource* src = new MateriaSource();
	AMateria * hielo = new Ice();
	src->learnMateria(hielo);
	AMateria * cura = new Cure();
	src->learnMateria(cura);
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete hielo;
	delete cura;
	delete bob;
	delete me;
	delete src;
	return 0;
}
