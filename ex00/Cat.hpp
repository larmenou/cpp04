/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:30 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 15:40:33 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

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
};

#endif