/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:38:40 by mandress          #+#    #+#             */
/*   Updated: 2022/05/11 02:56:18 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(va_list list, char c)
{
	char	s;

	if (c == 'c')
	{
		s = va_arg(list, int);
		write(1, &s, 1);
	}
	else if (c == '%')
		write(1, "%", 1);
	return (1);
}
