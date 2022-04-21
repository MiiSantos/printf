/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:59:22 by mandress          #+#    #+#             */
/*   Updated: 2021/09/16 23:35:57 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t nb)
{
	size_t	i;

	i = 0;
	while (i < nb)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
