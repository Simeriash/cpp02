/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:44:27 by julauren          #+#    #+#             */
/*   Updated: 2026/10/06 14:02:17 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>
#include <cmath>

Fixed::Fixed(void) : _rawValue(0)
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
	if(this != &rhs)
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
	return (((float)_rawValue) / 256.);
}

int Fixed::toInt(void) const
{
	return (_rawValue >> _fract);
}

/*----------comparison operators----------*/

bool Fixed::operator>(Fixed const &rhs) const
{
	return (_rawValue > rhs._rawValue);
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (_rawValue < rhs._rawValue);
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (_rawValue >= rhs._rawValue);
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (_rawValue <= rhs._rawValue);
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (_rawValue == rhs._rawValue);
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (_rawValue != rhs._rawValue);
}

/*----------arithmetic operators----------*/

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(toFloat() / rhs.toFloat()));
}

/*----------increment/decrement----------*/

Fixed &Fixed::operator++()
{
	_rawValue++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	_rawValue--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_rawValue++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_rawValue--;
	return (temp);
}

/*----------min/max----------*/

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	return ((a < b) ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	return ((a > b) ? a : b);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
