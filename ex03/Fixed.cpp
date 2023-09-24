/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:20:20 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/23 20:35:15 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Initialization of the static variable of the class Fixed
const int Fixed::fractional_bits = 8;

// Implementation of the constructor
Fixed::Fixed(): fixed_value(0) {}

// Implementation of the constructor (integer --> fixed)
Fixed::Fixed(int const integer_point): fixed_value(integer_point << fractional_bits) {}

// Implementation of the constructor (float --> fixed)
Fixed::Fixed(float const float_point): fixed_value(roundf(float_point * (1 << fractional_bits))) {}

// Implementation of the copy constructor
Fixed::Fixed(const Fixed &old_obj)
{
    this->fixed_value = old_obj.fixed_value;
}

// Implementation of the copy assignment operator
Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->fixed_value = other.fixed_value;
    return (*this);
}

// Implementation of the destructor
Fixed::~Fixed() {}

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

// Implementation of the operator <
bool    Fixed::operator<(const Fixed &fixed) const
{
    return (this->fixed_value < fixed.fixed_value);
}

// Implementation of the operator >
bool    Fixed::operator>(const Fixed &fixed) const
{
    return (this->fixed_value > fixed.fixed_value);
}

// Implementation of the operator <=
bool    Fixed::operator<=(const Fixed &fixed) const
{
    return (this->fixed_value <= fixed.fixed_value);
}

// Implementation of the operator >=
bool    Fixed::operator>=(const Fixed &fixed) const
{
    return (this->fixed_value >= fixed.fixed_value);
}

// Implementation of the operator ==
bool    Fixed::operator==(const Fixed &fixed) const
{
    return (this->fixed_value == fixed.fixed_value);
}

// Implementation of the operator <
bool    Fixed::operator!=(const Fixed &fixed) const
{
    return (this->fixed_value != fixed.fixed_value);
}

// Implementation of the operator *
Fixed   Fixed::operator*(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() * fixed.toFloat()));
}

// Implementation of the operator +
Fixed   Fixed::operator+(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() + fixed.toFloat()));
}

// Implementation of the operator -
Fixed   Fixed::operator-(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() - fixed.toFloat()));
}

// Implementation of the operator /
Fixed   Fixed::operator/(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() / fixed.toFloat()));
}

// Implementation of the operator ++ (pre-increment)
Fixed   &Fixed::operator++()
{
    ++this->fixed_value;
    return (*this);
}

// Implementation of the operator ++ (post-increment)
Fixed   Fixed::operator++(int)
{
    Fixed fixed_value = *this;
    ++this->fixed_value;
    return (fixed_value);
}

// Implementation of the operator -- (pre-decrement)
Fixed   &Fixed::operator--()
{
    --this->fixed_value;
    return (*this);
}

// Implementation of the operator -- (post-decrement)
Fixed   Fixed::operator--(int)
{
    Fixed fixed_value = *this;
    --this->fixed_value;
    return (fixed_value);
}

// Implementation of the static min function that takes two fixed references
Fixed &Fixed::min(Fixed &fixed_one, Fixed &fixed_two)
{
    return ((fixed_one < fixed_two)? fixed_one: fixed_two);
}

// Implementation of the static min function that takes two fixed const references
const Fixed &Fixed::min(Fixed const &fixed_one, Fixed const &fixed_two)
{
    return ((fixed_one < fixed_two)? fixed_one: fixed_two);
}

// Implementation of the static maxfunction that takes two fixed references
Fixed &Fixed::max(Fixed &fixed_one, Fixed &fixed_two)
{
    return ((fixed_one > fixed_two)? fixed_one: fixed_two);
}

// Implementation of the static max function that takes two fixed const references
const Fixed &Fixed::max(Fixed const &fixed_one, Fixed const &fixed_two)
{
    return ((fixed_one > fixed_two)? fixed_one: fixed_two);
}
