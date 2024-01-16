/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:03:13 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 15:05:04 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

# include <string>
# include <iostream>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& copy);
		~WrongCat();
		WrongCat& operator=(const WrongCat& copy);

		std::string getType() const;
		void makeSound() const;
	
	protected:
		std::string _type;	
};

#endif