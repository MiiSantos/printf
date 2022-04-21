/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:18:13 by mandress          #+#    #+#             */
/*   Updated: 2021/11/23 17:03:50 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	if (!dest && !src && size > 0)
		return (0);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (size)
	{
		d[i] = s[i];
		i++;
		size--;
	}
	return (dest);
}
