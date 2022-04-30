/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:58:55 by ebeiline          #+#    #+#             */
/*   Updated: 2022/04/30 20:42:25 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
	# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook
{
	private:
		int			_num;
		Contact		_phonebook[8];
	public:
		PhoneBook();
		~PhoneBook();
		std::string	truncate(std::string str) const;
		void get_c();
		void add_c();
};

#endif