/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:30 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 15:42:15 by larmenou         ###   ########.fr       */
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
	
	private:
		Brain* _brain;
};

#endif