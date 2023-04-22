/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:35:52 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/22 11:47:02 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int size = 10;
	Animal *array[size];
	for (int i = 0; i < size; i++)
	{
		if (i < (size / 2))	// Dogs
			array[i] = new Dog();
		else		// Cats
			array[i] = new Cat();
	}
	for (int i = 0; i < size; i++)
		delete array[i];
	return 0;
}