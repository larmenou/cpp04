/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:32 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/12 13:21:15 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Default Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& copy)
{
	_type = copy._type;
	std::cout << "Copy Dog constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	_type = copy._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called." << std::endl;
}
