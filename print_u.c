/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 00:31:36 by coder             #+#    #+#             */
/*   Updated: 2022/04/22 00:47:39 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_u(va_list list)
{
	int				len;
	unsigned int	u;

	len = 0;
	u = va_arg(list, unsigned int);
	len = ft_putnbr_base(u, DEC, len);
	return(len + 1);
}