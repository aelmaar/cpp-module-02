/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:20:18 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/20 11:51:28 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed 
{
    private:
        int                 fixed_value;
        static const int    fractional_bits;
    public:
        Fixed();
        Fixed(const Fixed &old_obj);
        Fixed   &operator=(const Fixed &other);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif