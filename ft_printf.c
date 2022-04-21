/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 04:17:41 by mandress          #+#    #+#             */
/*   Updated: 2022/04/22 00:30:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	type(const char *str, va_list list)
{
	int	len;

	len = 0;
	if (*str == 'c' || *str == '%')
		len = print_char(list, *str);
	else if (*str == 's')
		len = print_string(list);
	else if (*str == 'p')
		len = print_p(list);
	else if (*str == 'd')
		len = print_d(list);
	else if (*str == 'i')
		len = print_i(list);
	else if (*str == 'u')
		len = print_u(list);
	// else if (*str == 'x' || *str == 'X')
	// 	len = print_hex(list, *str);

	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(list, str);
	while (str[i] != '\0')
	{
		if(str[i] == '%')
		{
			i++;
			len += type(&str[i], list);
		}
		else
		{
			write(STDOUT_FILENO, &str[i], 1);
			len++;
		}
		i++;
	}

	va_end(list);

	return (len);
}
