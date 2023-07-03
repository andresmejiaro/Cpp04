/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 22:29:35 by amejia            #+#    #+#             */
/*   Updated: 2023/07/04 00:10:15 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "A Materia Source was created " << std::endl;
	for (int i = 0; i < 4; i++)
		stuff[i] = NULL;	
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
	{
		if (stuff[i] != NULL)
			delete stuff[i];
	}
	std::cout << "A Materia Source was destroyed " << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other){
	for(int i = 0; i < 4; i++){
		if (other.pointStuff(i) != NULL){
			this->stuff[i] = other.pointStuff(i)->clone();
		}
		else
			this->stuff[i] = NULL;
	}
}

AMateria *MateriaSource::pointStuff(int w) const{
	if (w < 4 && w >= 0){
		return (this->stuff[w]);
	}
	return (NULL);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other){
	int i;
	
	for(i = 0; i < 4; i++){
		if (other.pointStuff(i) != NULL){
			this->stuff[i] = other.pointStuff(i)->clone();
		}
		else
			this->stuff[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* src){
	int i;
	for(i = 0; i < 4; i++){
		if (this->stuff[i] == NULL && src->getUsedState() == false){
			this->stuff[i] = src;
			std::cout << "Materia Source learnt " << src->getType() << std::endl;
			break ;
		}
	}
	if (i >= 4)
		std::cout << "Learn failed"  << std::endl;	
}

AMateria* MateriaSource::createMateria(std::string const & type){
	int i;
	for(i = 0; i < 4; i++){
		if (this->stuff[i] && this->stuff[i]->getType() == type){
			return (this->stuff[i]->clone());
		}
	}
	if (i >= 4)
		std::cout << "Cannot create " << type << std::endl;
	return (NULL);
}
