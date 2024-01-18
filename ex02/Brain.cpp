/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baloo <baloo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:14:59 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/17 12:40:49 by baloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Default idea.";
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(Brain& copy)
{
	for (int i=0; i < 100; i++)
		_ideas[i] = copy._ideas[i] + "_copy";
}

Brain& Brain::operator=(Brain& copy)
{
	for (int i=0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i] + "_copy";
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;	
}

void Brain::setIdea(unsigned int index, std::string idea)
{
	if (index < 100)
		this->_ideas[index] = idea;
	else
		std::cout << "Index below 100 only" << std::endl;
}

std::string Brain::getIdea(unsigned int index) const
{
	if (index < 100)
		return (this->_ideas[index]);
	return ("Index below 100 only");
}