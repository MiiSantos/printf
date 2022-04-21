/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 23:39:42 by coder             #+#    #+#             */
/*   Updated: 2022/04/22 00:18:44 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_p(va_list list)
{
	void	*p;
	int		len;
	
	len = 0;
	p = va_arg(list, void *);
	if(!p)
	{
		ft_putstr_fd("(nil)", 1);
		len = 5;
	}
	else
	{
		ft_putstr_fd("0x", 1);
		ft_putnbr_base((unsigned long)p, HEX_L, len);
		len = 15;
	}
	return(len);
}
