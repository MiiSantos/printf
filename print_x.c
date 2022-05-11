/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 04:23:45 by coder             #+#    #+#             */
/*   Updated: 2022/05/11 03:27:01 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(va_list list)
{
	unsigned int	x;
	int				len;

	len = 0;
	x = va_arg(list, unsigned int);
	len = ft_putnbr_base(x, HEX_L, 0);
	return (len);
}

int	print_x_upper(va_list list)
{
	unsigned int	x;
	int				len;

	len = 0;
	x = va_arg(list, unsigned int);
	len = ft_putnbr_base(x, HEX_U, 0);
	return (len);
}
