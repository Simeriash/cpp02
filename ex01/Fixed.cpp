/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:06:11 by julauren          #+#    #+#             */
/*   Updated: 2026/10/06 10:10:13 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <ostream>

Fixed::Fixed(void)
{
	return;
}

Fixed::Fixed(Fixed const &cpy)
{
	*this = cpy;
	return;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		_rawValue = rhs._rawValue;
	return (*this);
}

Fixed::Fixed(int const value) : _rawValue(value << _fract)
{
	return;
}

Fixed::Fixed(float const value) : _rawValue(roundf(value * 256))
{
	return;
}

int Fixed::getRawBits(void) const
{
	return (_rawValue);
}

void Fixed::setRawBits(int const raw)
{
	_rawValue = raw;
	return;
}

float Fixed::toFloat(void) const
{
	return (float(_rawValue) / 256);
}

int Fixed::toInt(void) const
{
	return (_rawValue >> _fract);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
