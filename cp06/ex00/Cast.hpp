/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:21:51 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/18 14:17:09 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
	# define CAST_HPP

#include <iostream>
#include <string>
#include <limits.h>
#include <math.h>

class Cast
{
	private:
		double	_out;
	public:
		Cast();
		Cast(std::string const &input);
		~Cast();
		Cast(const Cast &src);
		Cast &operator=(const Cast &rhs);

		double		getOut() const;
		std::string	printChar() const;
		std::string	printInt() const;
		std::string	printFloat() const;
		std::string	printDouble() const;
};

std::ostream &operator<<(std::ostream &o, Cast const &i);

#endif // CAST_HPP