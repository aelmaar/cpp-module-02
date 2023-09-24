/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:29:04 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/24 17:01:53 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Implementation of the default constructor
Point::Point(): x(0), y(0) {}

// Implementation of the parameterized constructor
Point::Point(float const x, float const y): x(x), y(y) {}

// Implementation of the copy constructor
Point::Point(Point const &old_obj): x(old_obj.x), y(old_obj.y) {}

// Implementation of the copy assignement operator
Point &Point::operator=(Point const &other)
{
    (void)other;
    return (*this);
}

// Implementation of the destructor
Point::~Point() {}

// Implementation of the getX function
Fixed const  &Point::getX() const { return (x); }

// Implementation of the getY function
Fixed const  &Point::getY() const { return (y); }


