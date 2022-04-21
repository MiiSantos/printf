/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:25:10 by mandress          #+#    #+#             */
/*   Updated: 2021/11/24 12:06:44 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		a;

	a = ft_strlen(str);
	if (c == 0)
		return (ft_strchr(str, '\0'));
	while (a)
	{
		a--;
		if (str[a] == (unsigned char)c)
			return ((char *)str + a);
	}
	return (0);
}
