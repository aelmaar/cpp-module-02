/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:20:18 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/21 20:15:15 by ael-maar         ###   ########.fr       */
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
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed   &operator=(const Fixed &other);
        bool    operator <(const Fixed &fixed) const;
        bool    operator >(const Fixed &fixed) const;
        bool    operator <=(const Fixed &fixed) const;
        bool    operator >=(const Fixed &fixed) const;
        bool    operator ==(const Fixed &fixed) const;
        bool    operator !=(const Fixed &fixed) const;
        Fixed   operator *(const Fixed &fixed) const;
        Fixed   operator +(const Fixed &fixed) const;
        Fixed   operator -(const Fixed &fixed) const;
        Fixed   operator /(const Fixed &fixed) const;
        Fixed   &operator ++();
        Fixed   operator ++(int);
        Fixed   &operator --();
        Fixed   operator --(int);
        static  Fixed   &min(Fixed &fixed_one, Fixed &fixed_two);
        static  const Fixed   &min(Fixed const &fixed_one, Fixed const &fixed_two);
        static  Fixed   &max(Fixed &fixed_one, Fixed &fixed_two);
        static  const Fixed   &max(Fixed const &fixed_one, Fixed const &fixed_two);
        ~Fixed();
};
std::ostream    &operator<<(std::ostream &out, const Fixed &fixed);
#endif