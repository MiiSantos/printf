/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 20:50:01 by mandress          #+#    #+#             */
/*   Updated: 2021/11/24 12:09:14 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	a;

	a = c;
	while (*str)
	{
		if (*str == a)
			return ((char *)str);
		str++;
	}
	if (a == '\0')
		return ((char *)str);
	return (0);
}
