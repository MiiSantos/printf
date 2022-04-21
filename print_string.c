/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:38:53 by mandress          #+#    #+#             */
/*   Updated: 2022/04/21 23:10:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int print_string(va_list list)
{
	int	len;
	char *s;

	s = va_arg(list, char *);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	return(len);
}