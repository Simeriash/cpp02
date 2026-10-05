/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 13:53:47 by julauren          #+#    #+#             */
/*   Updated: 2026/10/05 14:05:16 by julauren         ###   ########.fr       */
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

		Fixed(int const );

		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int _rawValue;
		static int const _fract = 8;
};

#endif
