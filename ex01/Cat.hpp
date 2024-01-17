/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baloo <baloo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:30 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/17 14:12:27 by baloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# include <string>
# include <iostream>

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& copy);
		virtual ~Cat();
		Cat& operator=(const Cat& copy);

		virtual std::string getType() const;
		virtual void makeSound() const;

		Brain* getBrain() const;
	
	private:
		Brain* _brain;
};

#endif