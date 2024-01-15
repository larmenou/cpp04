/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:03:54 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 14:47:16 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "animal";
	std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& copy)
{
	_type = copy._type;
	std::cout << "Copy Animal constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	_type = copy._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "Insert some animal noise here" << std::endl;
}