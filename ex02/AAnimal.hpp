/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:03:51 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/18 10:11:56 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal& copy);
		virtual ~AAnimal();
		AAnimal& operator=(const AAnimal& copy);

		virtual std::string getType() const;
		virtual void makeSound() const = 0;
	
	protected:
		std::string _type;	
};

#endif