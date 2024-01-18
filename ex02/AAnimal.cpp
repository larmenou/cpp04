/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:03:54 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/18 10:12:44 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "AAnimal";
	std::cout << "Default AAnimal constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	_type = copy._type;
	std::cout << "Copy AAnimal constructor called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
	_type = copy._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
}

std::string AAnimal::getType() const
{
	return (_type);
}

void AAnimal::makeSound() const
{
	std::cout << "Insert some AAnimal noise here" << std::endl;
}