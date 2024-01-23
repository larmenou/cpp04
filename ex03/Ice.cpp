/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:20:36 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/23 13:12:34 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(std::string const & type)
{
	this->_type = type;
}

Ice::Ice(Ice& copy)
{
	this->_type = copy._type;
}

Ice::~Ice(){}

Ice& Ice::operator=(Ice& copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string const & Ice::getType() const
{
	return (this->_type);
}

Ice* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}