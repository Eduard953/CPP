/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:36:37 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/04 20:00:04 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <ostream>

class Fixed {
	private:
		int					_value;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(Fixed const &src);
		~Fixed();
		Fixed &operator=(Fixed const &src);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &in);

#endif // FIXED_HPP