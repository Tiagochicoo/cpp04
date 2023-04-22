/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:15:16 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/22 11:32:38 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal()
{
	this->_brain = new Brain();
	this->_type = "Cat";
	std::cout << "Cat Default constructor called!" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	this->_brain = new Brain();
	this->_type = type;
	std::cout << "Cat String constructor called for " << _type << std::endl;
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	(void)src;
	std::cout << "Cat Copy constructor called!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called for " << _type << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & value )
{
	(void)value;
	// if ( this != &value )
	//{
	// this->_value = value.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const
{
	std::cout << "MMMMMMMEEEEEEEEEOOOOOOOOOOOWWWWWWW" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Cat::getType() const
{
	return _type;
}


/* ************************************************************************** */