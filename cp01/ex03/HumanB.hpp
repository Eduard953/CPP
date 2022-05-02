/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:37:46 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/02 16:53:03 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
	# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	const	_name;
		Weapon				*_weapon;
	public:
		HumanB(std::string const name);
		~HumanB();
		std::string const getName(void);
		void setWeapon(Weapon &weapon);
		void attack(void);
};

#endif // HUMANB_HPP