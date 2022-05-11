/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 23:39:42 by coder             #+#    #+#             */
/*   Updated: 2022/05/11 03:24:10 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(va_list list)
{
	void	*p;
	int		len;

	len = 0;
	p = va_arg(list, void *);
	if (!p)
	{
		ft_putstr_fd("(nil)", 1);
		len = 5;
	}
	else
	{
		ft_putstr_fd("0x", 1);
		len = ft_putnbr_base((unsigned long)p, HEX_L, 0);
		len += 2;
	}
	return (len);
}
