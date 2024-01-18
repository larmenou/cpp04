/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:35 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/18 10:13:48 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

# include <string>
# include <iostream>

class Dog : public AAnimal
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