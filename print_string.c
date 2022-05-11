/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:16:10 by mandress          #+#    #+#             */
/*   Updated: 2022/05/11 03:23:36 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(va_list list)
{
	int		len;
	char	*s;

	s = va_arg(list, char *);
	if (s == NULL)
		return (write(1, "(null)", 6));
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	return (len);
}
