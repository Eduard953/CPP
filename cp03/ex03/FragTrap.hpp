/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:57:21 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/08 13:23:43 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
	#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(FragTrap const &source);
		FragTrap(std::string const name);
		virtual ~FragTrap();
		FragTrap &operator=(FragTrap const &right);
		void highFiveGuys(void);

		void setAttackDamage(void);
		void setHitPoints(void);
};

#endif // FRAGTRAP_HPP