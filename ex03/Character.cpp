/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:09:45 by amejia            #+#    #+#             */
/*   Updated: 2023/07/04 00:23:24 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(): _name("Jhon Doe"){
	for (int i = 0; i < 4; i++)
		stuff[i] = NULL;	
	std::cout << "A Wild " << this->_name << " appeared." << std::endl;
}

Character::Character(std::string name): _name(name){
	for (int i = 0; i < 4; i++)
		stuff[i] = NULL;	
	std::cout << "A Wild " << this->_name << " appeared." << std::endl;
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
	{
		if (stuff[i] != NULL)
			delete stuff[i];
	}
	std::cout  << this->_name << " fainted." << std::endl;
}

AMateria const *Character::pointStuff(int w) const{
	if (w < 4){
		return (this->stuff[w]);
	}
	return (NULL);
}

Character::Character(const Character &other): _name(other.getName()){
	for(int i = 0; i < 4; i++){
		if (other.pointStuff(i) != NULL){
			this->stuff[i] = other.pointStuff(i)->clone();
		}
		else
			this->stuff[i] = NULL;
	}
}

Character &Character::operator=(const Character &other){
	this->_name = other.getName();
	for(int i = 0; i < 4; i++){
		if (other.pointStuff(i) != NULL){
			this->stuff[i] = other.pointStuff(i)->clone();
		}
		else
			this->stuff[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const{
	return (this->_name);
}

void Character::equip(AMateria* m){
	int i;
	
	for(i = 0; i < 4; i++){
		if (this->stuff[i] == NULL && m->getUsedState() == false){
			this->stuff[i] = m;
			m->ChangeUsed();
			std::cout << this->_name << " equiped " << m->getType() << " in slot "
				<< i << std::endl;
			break ;
		}
	}
	if (i >= 4)
		std::cout << this->_name << " failed to equip " << m->getType() 
			<< std::endl; 
}	

void Character::unequip(int idx){
	if (idx < 4 && idx >= 0 && this->stuff[idx]){
		std::cout << "Unequiping " << this->stuff[idx]->getType() 
			<< " from slot " << idx << std::endl;
		this->stuff[idx]->ChangeUsed();
		this->stuff[idx] = NULL;
	}
	else
		std::cout << "Nothing to unequip in slot " << idx << std::endl; 
		
}

void Character::use(int idx, ICharacter& target){
	if (idx < 4 && idx >= 0 && this->stuff[idx]){
		this->stuff[idx]->use(target);
		delete this->stuff[idx];
		this->stuff[idx] = NULL;
	}
	else 
		std::cout << "Slot " << idx << " is empty" << std::endl;
}
