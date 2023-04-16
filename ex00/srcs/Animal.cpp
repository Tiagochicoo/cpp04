/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:15:13 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/16 22:37:00 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Animal Default constructor called!" << std::endl;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "Animal String constructor called for " << _type << std::endl;
}

Animal::Animal( const Animal & src )
{
	(void)src;
	std::cout << "Animal Copy constructor called for " << _type << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor called for " << _type << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & value )
{
	(void)value;
	// if ( this != &value )
	//{
	// this->_value = value.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound() const
{
	std::cout << "Animal sounds from " << _type << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Animal::getType() const
{
	return _type;
}

/* ************************************************************************** */