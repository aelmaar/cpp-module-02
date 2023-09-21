/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:20:20 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/20 19:02:23 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Initialization of the static variable of the class Fixed
const int Fixed::fractional_bits = 8;

// Implementation of the constructor
Fixed::Fixed(): fixed_value(0) 
{ 
    std::cout << "Default constructor called" << std::endl;
}

// Implementation of the constructor (integer --> fixed)
Fixed::Fixed(int const integer_point): fixed_value(integer_point << fractional_bits) 
{
    std::cout << "Int constructor called" << std::endl;
}

// Implementation of the constructor (float --> fixed)
Fixed::Fixed(float const float_point): fixed_value(roundf(float_point * (1 << fractional_bits))) 
{
    std::cout << "Float constructor called" << std::endl;
}

// Implementation of the copy constructor
Fixed::Fixed(const Fixed &old_obj)
{
    this->fixed_value = old_obj.fixed_value;
    std::cout << "Copy constructor called" << std::endl;
}

// Implementation of the copy assignment operator
Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->fixed_value = other.fixed_value;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

// Implementation of the destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// Implementation of the getRawBits function
int Fixed::getRawBits(void) const 
{ 
    return fixed_value; 
}

// Implementation of the setRawBits function
void    Fixed::setRawBits(int const raw) 
{
    this->fixed_value = raw; 
}

// Implementation of the toInt (fixed --> int)
int Fixed::toInt(void) const
{
    return (fixed_value >> fractional_bits);
}

// Implementation of the toFloat (fixed --> float)
float   Fixed::toFloat(void) const
{
    return ((float)fixed_value / (1 << fractional_bits));
}

// Implementation of the operator <<
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
