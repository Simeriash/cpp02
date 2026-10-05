/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 12:46:35 by julauren          #+#    #+#             */
/*   Updated: 2026/10/05 13:24:46 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawValue(0)
{
	return;
}

Fixed::Fixed(Fixed const &cpy)
{
	*this = cpy;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		_rawValue = rhs._rawValue;

	return *this;
}

int Fixed::getRawBits(void) const
{
	return (_rawValue);
}

void Fixed::setRawBits(int const raw)
{
	_rawValue = raw;
}
