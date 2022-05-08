/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:57:21 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/08 11:27:31 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
	#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(FragTrap const &source);
		FragTrap(std::string const name);
		~FragTrap();
		FragTrap &operator=(FragTrap const &right);
		void highFiveGuys(void);
		void attack(std::string const &target);
};

#endif // FRAGTRAP_HPP