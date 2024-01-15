/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:03:51 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 14:47:34 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal& copy);
		virtual ~Animal();
		Animal& operator=(const Animal& copy);

		virtual std::string getType() const;
		virtual void makeSound() const;
	
	protected:
		std::string _type;	
};

#endif