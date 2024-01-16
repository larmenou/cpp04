/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:56:26 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 15:04:42 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& copy);

		std::string getType() const;
		void makeSound() const;
	
	protected:
		std::string _type;	
};

#endif