/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:35:45 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/24 17:50:58 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Implementation of ft_abs() function
static Fixed ft_abs(Fixed const &fixed)
{
    if (fixed < 0)
        return (fixed * -1);
    return (fixed);
}

// Implementation of the calculation the area of a triangle
static Fixed   area(Fixed x1, Fixed y1, Fixed x2, Fixed y2, Fixed x3, Fixed y3)
{
    return (ft_abs(Fixed(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))));
}

// Implementation of the bsp function
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed Delta = area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
    Fixed DeltaOne = area(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY());
    Fixed DeltaTwo = area(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY());
    Fixed DeltaThree = area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());

    if (Delta == 0 || DeltaOne == 0 || DeltaTwo == 0 || DeltaThree == 0)
        return (false);
    return (Delta == (DeltaOne + DeltaTwo + DeltaThree));
}
