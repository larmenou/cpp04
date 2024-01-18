/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:30 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/18 10:13:01 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
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