/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:53:56 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 17:47:27 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

 void leaks(){
 	system("leaks zoo");
 }


int main()
{
	atexit(leaks);
	Animal **zoo =  new Animal*[10]; 
	
	for(int i = 0; i < 5; i++){
		zoo[i] = new Dog();
	}
	for(int i = 5; i < 10; i++){
		zoo[i] = new Cat();
	}

	for(int i = 0; i < 10; i++)
		delete zoo[i];
	delete[] zoo;

	Dog Kylo;
	Dog Hammy(Kylo);
	Dog Olivia;

	Olivia = Hammy;

	std::cout << "Dogs Memory Directions:" << std::endl;
	std::cout << "Kylo: " << &Kylo << std::endl;
	std::cout << "Hammy: " <<  &Hammy << std::endl;
	std::cout << "Olivia: " <<  &Olivia << std::endl;
	std::cout << "Dogs Brain Directions:" << std::endl;
	std::cout << "Kylo: " << &Kylo.exposeBrain() << std::endl;
	std::cout << "Hammy: " <<  &Hammy.exposeBrain() << std::endl;
	std::cout << "Olivia: " <<  &Olivia.exposeBrain() << std::endl;
	

	return (0);
}