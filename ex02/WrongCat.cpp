/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:02:38 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 15:03:05 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "Default WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	_type = copy._type;
	std::cout << "Copy WrongCat constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	_type = copy._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

std::string WrongCat::getType() const
{
	return (_type);
}

void WrongCat::makeSound() const
{
	std::cout << "Miaouuuu" << std::endl;
}