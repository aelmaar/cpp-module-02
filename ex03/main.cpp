/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:20:22 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/24 17:48:10 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
    
    Point a(3.0f, 3.0f);
    Point b(0.0f, 0.0f);
    Point c(4.0f, 0.0f);

    Point pointIn(2.0f, 1.0f);
    Point pointOut(5.0f, 1.0f);
    Point VertexPoint(4.0f, 0.0f);

    if (bsp(a, b, c, pointIn))
        std::cout << "The point is inside the triangle a, b, c" << std::endl;
    else
        std::cout << "The point is outside the triangle a, b, c" << std::endl;
    
    if (bsp(a, b, c, pointOut))
        std::cout << "The point is inside the triangle a, b, c" << std::endl;
    else
        std::cout << "The point is outside the triangle a, b, c" << std::endl;

    if (bsp(a, b, c, VertexPoint))
        std::cout << "The point is inside the triangle a, b, c" << std::endl;
    else
        std::cout << "The point is outside the triangle a, b, c" << std::endl;

    return (EXIT_SUCCESS);
}
