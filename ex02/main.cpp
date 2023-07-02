/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:53:56 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 18:04:06 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

//  void leaks(){
//  	system("leaks zoo");
//  }


int main()
{
//	atexit(leaks);

//	Animal	Spirit;
	Dog Kylo;
	Cat Garfield;

	Kylo.makeSound();
	Garfield.makeSound();
//	Spirit.makeSound();

	return (0);
}