/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:31:12 by julauren          #+#    #+#             */
/*   Updated: 2026/10/06 14:10:52 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(25.f);
	Fixed d(6.f);

	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << "b: " << b << std::endl;

	std::cout << "max(a,b): " << Fixed::max(a,b) << std::endl;

	std::cout << "a + a: " << a + a << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << "b + b: " << b + b << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "a + b: " << a + b << std::endl;

	std::cout << "b * b: " << b * b << std::endl;

	std::cout << "a - b: " << a - b << std::endl;

	std::cout << "a / b: " << a / b << std::endl;

	std::cout << "b / a: " << b / a << std::endl;

	std::cout << "c / d: " << c/ d << std::endl;

	std::cout << "b / d: " << b / d << std::endl;

	return (0);
}
