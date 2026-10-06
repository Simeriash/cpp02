/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 13:53:47 by julauren          #+#    #+#             */
/*   Updated: 2026/10/06 09:31:11 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &cpy);
		~Fixed(void);
		Fixed &operator=(Fixed const &rhs);

		Fixed(int const value);
		Fixed(float const value);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:
		int _rawValue;
		static int const _fract = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
