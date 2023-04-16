/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:15:30 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/16 22:36:54 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string _type;

	public:

		Animal();
		Animal(std::string type);
		Animal( Animal const & src );
		~Animal();

		Animal &		operator=( Animal const & value );

		std::string getType() const;

		virtual void makeSound() const;
};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */