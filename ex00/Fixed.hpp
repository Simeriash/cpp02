/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 12:36:00 by julauren          #+#    #+#             */
/*   Updated: 2026/10/05 13:17:44 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &cpy);
		~Fixed(void);

		Fixed &operator=(Fixed const &rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int _rawValue;
		static const int _fract = 8;
};

#endif
