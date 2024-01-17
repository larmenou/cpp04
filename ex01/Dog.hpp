/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baloo <baloo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:35 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/17 11:18:50 by baloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# include <string>
# include <iostream>

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& copy);
		virtual ~Dog();
		Dog& operator=(const Dog& copy);

		virtual std::string getType() const;
		virtual void makeSound() const;
		
		Brain* getBrain() const;
	
	private:
		Brain* _brain;
};

#endif