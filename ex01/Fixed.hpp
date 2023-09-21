/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:20:18 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/20 18:30:42 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed 
{
    private:
        int                 fixed_value;
        static const int    fractional_bits;
    public:
        Fixed();
        Fixed(int const integer_point);
        Fixed(float const integer_point);
        Fixed(const Fixed &old_obj);
        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed   &operator=(const Fixed &other);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};
std::ostream    &operator<<(std::ostream &out, const Fixed &fixed);

#endif