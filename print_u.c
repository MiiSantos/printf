/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 00:31:36 by coder             #+#    #+#             */
/*   Updated: 2022/05/11 03:20:39 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_u(va_list list)
{
	int				len;
	unsigned int	u;

	len = 0;
	u = va_arg(list, unsigned int);
	len = ft_putnbr_base(u, DEC, 0);
	return (len);
}
