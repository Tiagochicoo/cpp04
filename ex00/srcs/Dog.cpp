/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:15:19 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/22 09:14:37 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog Default constructor called!" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	this->_type = type;
	std::cout << "Dog String constructor called for " << _type << std::endl;
}

Dog::Dog( const Dog & src ) : Animal(src)
{
	(void)src;
	std::cout << "Animal Copy constructor called!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog destructor called for " << _type << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & value )
{
	(void)value;
	//if ( this != &value )
	//{
		//this->_value = value.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << "WOOOOFFF WOOOOFFF" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Dog::getType() const
{
	return _type;
}

/* ************************************************************************** */