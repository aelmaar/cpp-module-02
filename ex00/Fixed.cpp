/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:20:20 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/20 13:45:39 by ael-maar         ###   ########.fr       */
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
    {
        this->fixed_value = other.fixed_value;
    }
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
    std::cout << "getRawBits member function called" << std::endl; 
    return fixed_value; 
}

// Implementation of the setRawBits function
void    Fixed::setRawBits(int const raw) 
{
    std::cout << "setRawBits member function called" << std::endl; 
    this->fixed_value = raw; 
}
