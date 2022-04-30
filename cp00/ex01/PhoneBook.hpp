/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:58:55 by ebeiline          #+#    #+#             */
/*   Updated: 2022/04/30 19:50:20 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
	# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
	private:
		int			_num;
		Contact		_phonebook[8];
	public:
		PhoneBook();
		~PhoneBook();
		void get_c();
		void add_c();
};

#endif