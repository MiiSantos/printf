/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:08:51 by mandress          #+#    #+#             */
/*   Updated: 2021/11/24 13:12:47 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t nb)
{
	size_t	i;

	i = 0;
	while (i < nb)
	{
		if ((((unsigned char *)str1)[i]) != ((unsigned char *)str2)[i])
		{
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
