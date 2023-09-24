/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:29:01 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/24 17:00:44 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        Fixed const  x;
        Fixed const  y;
    public:
        Point();
        Point(float const x, float const y);
        Point(Point const &old_obj);
        Point &operator=(Point const &other_point);
        ~Point();
        Fixed const  &getX() const;
        Fixed const  &getY() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
