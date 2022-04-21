/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 06:48:28 by mandress          #+#    #+#             */
/*   Updated: 2021/10/09 17:30:43 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t nb)
{
	size_t	i;
	size_t	subsize;

	i = 0;
	subsize = ft_strlen(sub);
	if (*sub == '\0')
		return ((char *)str);
	while (*str && i < nb)
	{
		if (!ft_strncmp(str, sub, subsize) && (i + subsize) <= nb)
			return ((char *)str);
		str++;
		i++;
	}
	return (NULL);
}
