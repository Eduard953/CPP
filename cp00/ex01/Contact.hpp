/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 12:31:20 by ebeiline          #+#    #+#             */
/*   Updated: 2022/04/30 19:55:16 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
	# define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string _nickname;
		std::string _number;
		std::string _secret;
	public:
		Contact();
		~Contact();
		std::string	get_fname() const;
		std::string	get_lname() const;
		std::string	get_nicname() const;
		std::string	get_num() const;
		std::string	get_secr() const;

		void		set_fname(std::string name);
		void		set_lname(std::string name);
		void		set_nicname(std::string name);
		void		set_num(std::string number);
		void		set_secr(std::string secret);
};

#endif