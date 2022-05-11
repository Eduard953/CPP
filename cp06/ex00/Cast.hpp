/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:21:51 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/11 19:31:15 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
	# define CAST_HPP

#include <iostream>
#include <string>

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

		double getOut() const;
};

#endif // CAST_HPP